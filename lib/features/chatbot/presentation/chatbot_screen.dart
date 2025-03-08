import 'package:flutter/material.dart';
import 'package:http/http.dart' as http;
import 'dart:convert';
import 'package:flutter_markdown/flutter_markdown.dart';
import 'package:google_fonts/google_fonts.dart';
import 'package:speech_to_text/speech_to_text.dart' as stt;
import 'package:flutter_tts/flutter_tts.dart';
import 'package:mitra/core/config/colors.dart'; // Import app colors

class JivaAssistant extends StatefulWidget {
  const JivaAssistant({super.key});

  @override
  State<JivaAssistant> createState() => _JivaAssistantState();
}

class _JivaAssistantState extends State<JivaAssistant> {
  final TextEditingController _textController = TextEditingController();
  final List<ChatMessage> _messages = [];
  final ScrollController _scrollController = ScrollController();
  bool _isLoading = false;
  bool _isListening = false;

  // Speech to text
  late stt.SpeechToText _speech;
  // Text to speech
  late FlutterTts _flutterTts;
  bool _isSpeaking = false;

  // API settings
  final String _apiUrl =
      'https://generativelanguage.googleapis.com/v1beta/models/gemini-1.5-flash:generateContent';
  final String _apiKey = 'AIzaSyCNjcppkOu8IYk5OzoEuEeDNvpuhoa1gA8';

  @override
  void initState() {
    super.initState();

    // Initialize speech to text
    _speech = stt.SpeechToText();
    _initSpeech();

    // Initialize text to speech
    _flutterTts = FlutterTts();
    _initTts();

    // Add initial welcome message
    _messages.add(ChatMessage(
      text:
          "Hello! I'm your Jiva Assistant. I can help answer health questions, provide wellness tips, or just chat about how you're feeling today. What can I help you with?",
      isUser: false,
    ));
  }

  // Initialize speech recognition
  void _initSpeech() async {
    await _speech.initialize(
      onStatus: (status) {
        print('Speech recognition status: $status');
        if (status == 'done' || status == 'notListening') {
          setState(() {
            _isListening = false;
          });
        }
      },
      onError: (error) => print('Speech recognition error: $error'),
    );
  }

  // Initialize text to speech
  void _initTts() async {
    await _flutterTts.setLanguage("en-US");
    await _flutterTts
        .setSpeechRate(0.5); // Slower rate for better understanding
    await _flutterTts.setVolume(1.0);
    await _flutterTts.setPitch(1.0);

    _flutterTts.setCompletionHandler(() {
      setState(() {
        _isSpeaking = false;
      });
    });
  }

  // Start listening for speech input
  void _startListening() async {
    if (!_isListening) {
      bool available = await _speech.initialize();
      if (available) {
        setState(() {
          _isListening = true;
        });
        _speech.listen(
          onResult: (result) {
            setState(() {
              _textController.text = result.recognizedWords;
              if (result.finalResult) {
                _isListening = false;
                if (_textController.text.isNotEmpty) {
                  _sendMessage();
                }
              }
            });
          },
        );
      } else {
        print("Speech recognition not available");
        setState(() {
          _isListening = false;
        });
      }
    } else {
      setState(() {
        _isListening = false;
        _speech.stop();
      });
    }
  }

  // Speak the text
  Future<void> _speak(String text) async {
    if (_isSpeaking) {
      await _flutterTts.stop();
      setState(() {
        _isSpeaking = false;
      });
      return;
    }

    // Clean markdown syntax for better speech
    String cleanText = text
        .replaceAll(RegExp(r'\*\*(.+?)\*\*'), r'$1')
        .replaceAll(RegExp(r'\*(.+?)\*'), r'$1')
        .replaceAll(RegExp(r'#+ '), '')
        .replaceAll('>', '')
        .replaceAll(' - ', ', ');

    setState(() {
      _isSpeaking = true;
    });

    await _flutterTts.speak(cleanText);
  }

  Future<void> _sendMessage() async {
    if (_textController.text.trim().isEmpty) return;

    String userMessage = _textController.text.trim();
    setState(() {
      _messages.add(ChatMessage(text: userMessage, isUser: true));
      _isLoading = true;
      _textController.clear();
    });

    _scrollToBottom();

    try {
      final response = await http.post(
        Uri.parse('$_apiUrl?key=$_apiKey'),
        headers: {'Content-Type': 'application/json'},
        body: jsonEncode({
          "contents": [
            {
              "parts": [
                {
                  "text":
                      "You are Jiva Assistant, a helpful AI assistant in a health app called Jiva. You provide thoughtful and knowledgeable responses to questions about health, wellness, and general topics. Be conversational, supportive, and informative. Respond to the following message: $userMessage"
                }
              ]
            }
          ]
        }),
      );

      if (response.statusCode == 200) {
        final jsonData = jsonDecode(response.body);
        final candidates = jsonData['candidates'] as List?;
        if (candidates != null && candidates.isNotEmpty) {
          final parts = candidates[0]['content']['parts'] as List?;
          final content = parts != null && parts.isNotEmpty
              ? parts[0]['text'] as String?
              : null;
          if (content != null) {
            setState(() {
              _messages.add(ChatMessage(text: content, isUser: false));
            });
            _scrollToBottom();
          } else {
            _handleError('I couldn\'t process that request. Please try again.');
          }
        } else {
          _handleError(
              'I\'m having trouble connecting. Please try again in a moment.');
        }
      } else {
        _handleError(
            'I\'m unable to respond right now. Please try again later.');
      }
    } catch (e) {
      _handleError(
          'Connection issue. Please check your internet and try again.');
    } finally {
      setState(() {
        _isLoading = false;
      });
    }
  }

  void _scrollToBottom() {
    Future.delayed(const Duration(milliseconds: 100), () {
      if (_scrollController.hasClients) {
        _scrollController.animateTo(
          _scrollController.position.maxScrollExtent,
          duration: const Duration(milliseconds: 300),
          curve: Curves.easeOut,
        );
      }
    });
  }

  void _handleError(String message) {
    print("Error occurred: $message");
    setState(() {
      _messages.add(ChatMessage(text: message, isUser: false, isError: true));
    });
    _scrollToBottom();
  }

  @override
  void dispose() {
    _speech.cancel();
    _flutterTts.stop();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    final theme = Theme.of(context);

    // Use app colors from your theme
    final Color backgroundColor = AppColors.surface;
    final Color cardColor = Colors.white;
    final Color primaryAccent = AppColors.primary;
    final Color secondaryAccent = const Color(0xFFF78C95); // Soft coral
    final Color textColor = AppColors.textPrimary;
    final Color textSecondaryColor = AppColors.textSecondary;

    return Scaffold(
      backgroundColor: backgroundColor,
      appBar: PreferredSize(
        preferredSize: const Size.fromHeight(70),
        child: AppBar(
          backgroundColor: backgroundColor,
          elevation: 0,
          leading: Padding(
            padding: const EdgeInsets.only(left: 16.0, top: 12.0),
            child: Container(
              decoration: BoxDecoration(
                color: cardColor,
                borderRadius: BorderRadius.circular(12),
                boxShadow: [
                  BoxShadow(
                    color: Colors.black.withOpacity(0.05),
                    blurRadius: 10,
                    offset: const Offset(0, 2),
                  ),
                ],
              ),
              child: IconButton(
                icon:
                    Icon(Icons.arrow_back_ios_new, color: textColor, size: 18),
                onPressed: () => Navigator.of(context).pop(),
              ),
            ),
          ),
          centerTitle: true,
          title: Padding(
            padding: const EdgeInsets.only(top: 12.0),
            child: Text(
              "Jiva Assistant",
              style: GoogleFonts.poppins(
                color: textColor,
                fontSize: 18,
                fontWeight: FontWeight.w600,
              ),
            ),
          ),
          actions: [
            Padding(
              padding: const EdgeInsets.only(right: 16.0, top: 12.0),
              child: Container(
                decoration: BoxDecoration(
                  color: cardColor,
                  borderRadius: BorderRadius.circular(12),
                  boxShadow: [
                    BoxShadow(
                      color: Colors.black.withOpacity(0.05),
                      blurRadius: 10,
                      offset: const Offset(0, 2),
                    ),
                  ],
                ),
                child: IconButton(
                  icon: Icon(Icons.help_outline, color: textColor, size: 20),
                  onPressed: () {
                    // Show help dialog
                    showDialog(
                      context: context,
                      builder: (context) => AlertDialog(
                        title: Text("Jiva Assistant Help",
                            style: GoogleFonts.poppins(
                                fontWeight: FontWeight.w600)),
                        content: Column(
                          mainAxisSize: MainAxisSize.min,
                          crossAxisAlignment: CrossAxisAlignment.start,
                          children: [
                            Text("• Tap the microphone to use voice input",
                                style: GoogleFonts.poppins(fontSize: 14)),
                            const SizedBox(height: 8),
                            Text(
                                "• Tap the speaker icon on any message to hear it read aloud",
                                style: GoogleFonts.poppins(fontSize: 14)),
                            const SizedBox(height: 8),
                            Text(
                                "• Ask me about health, wellness, or any questions you have",
                                style: GoogleFonts.poppins(fontSize: 14)),
                          ],
                        ),
                        actions: [
                          TextButton(
                            onPressed: () => Navigator.pop(context),
                            child: Text("Got it", style: GoogleFonts.poppins()),
                          )
                        ],
                      ),
                    );
                  },
                ),
              ),
            ),
          ],
        ),
      ),
      body: Column(
        children: [
          // Date chip
          Padding(
            padding: const EdgeInsets.only(top: 8.0, bottom: 16.0),
            child: Center(
              child: Container(
                padding:
                    const EdgeInsets.symmetric(horizontal: 16, vertical: 8),
                decoration: BoxDecoration(
                  color: cardColor,
                  borderRadius: BorderRadius.circular(20),
                  boxShadow: [
                    BoxShadow(
                      color: Colors.black.withOpacity(0.03),
                      blurRadius: 8,
                      offset: const Offset(0, 2),
                    ),
                  ],
                ),
                child: Text(
                  "Today, ${DateTime.now().day} ${_getMonth(DateTime.now().month)}",
                  style: GoogleFonts.poppins(
                    fontSize: 12,
                    fontWeight: FontWeight.w500,
                    color: textSecondaryColor,
                  ),
                ),
              ),
            ),
          ),

          // Chat messages
          Expanded(
            child: ListView.builder(
              controller: _scrollController,
              physics: const BouncingScrollPhysics(),
              padding: const EdgeInsets.symmetric(horizontal: 16),
              itemCount: _messages.length,
              itemBuilder: (context, index) {
                final message = _messages[index];
                final isLastMessage = index == _messages.length - 1;
                final showAvatar = !message.isUser;

                // Show time for first message or if previous message is from different sender
                final showTime = index == 0 ||
                    (_messages[index - 1].isUser != message.isUser);

                return Padding(
                  padding: const EdgeInsets.only(bottom: 16.0),
                  child: Column(
                    crossAxisAlignment: CrossAxisAlignment.start,
                    children: [
                      if (showTime)
                        Padding(
                          padding:
                              const EdgeInsets.only(bottom: 8.0, left: 16.0),
                          child: Text(
                            message.isUser
                                ? "Just now"
                                : "${DateTime.now().hour}:${DateTime.now().minute.toString().padLeft(2, '0')}",
                            style: GoogleFonts.poppins(
                              fontSize: 10,
                              fontWeight: FontWeight.w500,
                              color: textSecondaryColor.withOpacity(0.7),
                            ),
                          ),
                        ),
                      MessageBubble(
                        message: message,
                        showAvatar: showAvatar,
                        primaryColor: primaryAccent,
                        secondaryColor: secondaryAccent,
                        backgroundColor: backgroundColor,
                        cardColor: cardColor,
                        textColor: textColor,
                        textSecondaryColor: textSecondaryColor,
                        onSpeakPressed:
                            !message.isUser ? () => _speak(message.text) : null,
                        isSpeaking: _isSpeaking && !message.isUser,
                      ),
                      if (isLastMessage && _isLoading)
                        Padding(
                          padding: const EdgeInsets.only(top: 16.0),
                          child: LoadingIndicator(
                              primaryColor: primaryAccent,
                              cardColor: cardColor),
                        ),
                    ],
                  ),
                );
              },
            ),
          ),

          // Input box
          Container(
            margin:
                const EdgeInsets.only(bottom: 16, left: 16, right: 16, top: 8),
            decoration: BoxDecoration(
              color: cardColor,
              borderRadius: BorderRadius.circular(30),
              boxShadow: [
                BoxShadow(
                  color: Colors.black.withOpacity(0.05),
                  blurRadius: 10,
                  offset: const Offset(0, -2),
                ),
              ],
            ),
            child: Row(
              children: [
                InkWell(
                  onTap: _startListening,
                  child: Container(
                    padding: const EdgeInsets.all(12),
                    margin: const EdgeInsets.only(left: 8),
                    decoration: BoxDecoration(
                      color: _isListening
                          ? primaryAccent.withOpacity(0.2)
                          : Colors.transparent,
                      borderRadius: BorderRadius.circular(20),
                    ),
                    child: Icon(
                      _isListening ? Icons.mic : Icons.mic_none,
                      color: _isListening ? primaryAccent : textSecondaryColor,
                      size: 22,
                    ),
                  ),
                ),
                Expanded(
                  child: TextField(
                    controller: _textController,
                    decoration: InputDecoration(
                      hintText:
                          _isListening ? 'Listening...' : 'Ask me anything...',
                      hintStyle: GoogleFonts.poppins(
                        fontSize: 14,
                        fontWeight: FontWeight.w400,
                        color: textSecondaryColor.withOpacity(0.6),
                      ),
                      border: InputBorder.none,
                      contentPadding: const EdgeInsets.symmetric(
                        horizontal: 16,
                        vertical: 16,
                      ),
                    ),
                    style: GoogleFonts.poppins(
                      fontSize: 14,
                      color: textColor,
                    ),
                    maxLines: 1,
                  ),
                ),
                InkWell(
                  onTap: _sendMessage,
                  child: Container(
                    margin: const EdgeInsets.all(8),
                    height: 40,
                    width: 40,
                    decoration: BoxDecoration(
                      gradient: LinearGradient(
                        colors: [
                          primaryAccent,
                          primaryAccent.withOpacity(0.8),
                        ],
                        begin: Alignment.topLeft,
                        end: Alignment.bottomRight,
                      ),
                      borderRadius: BorderRadius.circular(20),
                    ),
                    child: const Icon(
                      Icons.arrow_upward,
                      color: Colors.white,
                      size: 18,
                    ),
                  ),
                ),
              ],
            ),
          ),
        ],
      ),
    );
  }

  String _getMonth(int month) {
    const months = [
      'Jan',
      'Feb',
      'Mar',
      'Apr',
      'May',
      'Jun',
      'Jul',
      'Aug',
      'Sep',
      'Oct',
      'Nov',
      'Dec'
    ];
    return months[month - 1];
  }
}

class MessageBubble extends StatelessWidget {
  final ChatMessage message;
  final bool showAvatar;
  final Color primaryColor;
  final Color secondaryColor;
  final Color backgroundColor;
  final Color cardColor;
  final Color textColor;
  final Color textSecondaryColor;
  final VoidCallback? onSpeakPressed;
  final bool isSpeaking;

  const MessageBubble({
    super.key,
    required this.message,
    required this.showAvatar,
    required this.primaryColor,
    required this.secondaryColor,
    required this.backgroundColor,
    required this.cardColor,
    required this.textColor,
    required this.textSecondaryColor,
    this.onSpeakPressed,
    this.isSpeaking = false,
  });

  @override
  Widget build(BuildContext context) {
    return Padding(
      padding: EdgeInsets.only(
        left: message.isUser ? 64.0 : 0.0,
        right: message.isUser ? 0.0 : 16.0,
      ),
      child: Row(
        crossAxisAlignment: CrossAxisAlignment.start,
        mainAxisAlignment:
            message.isUser ? MainAxisAlignment.end : MainAxisAlignment.start,
        children: [
          if (!message.isUser && showAvatar)
            Container(
              width: 36,
              height: 36,
              // margin: const EdgeInsets.only(right: 12.0, top: 4.0),
              decoration: BoxDecoration(
                color: cardColor,
                borderRadius: BorderRadius.circular(12),
                boxShadow: [
                  BoxShadow(
                    color: Colors.black.withOpacity(0.05),
                    blurRadius: 10,
                    offset: const Offset(0, 2),
                  ),
                ],
              ),
              child: Center(
                child: Icon(
                  Icons.auto_awesome,
                  color: primaryColor,
                  size: 18,
                ),
              ),
            ),
          Flexible(
            child: Container(
              decoration: BoxDecoration(
                color: message.isUser ? primaryColor : cardColor,
                borderRadius: BorderRadius.circular(20),
                boxShadow: [
                  BoxShadow(
                    color: Colors.black.withOpacity(0.05),
                    blurRadius: 8,
                    offset: const Offset(0, 2),
                  ),
                ],
              ),
              padding: const EdgeInsets.symmetric(horizontal: 16, vertical: 12),
              child: Column(
                crossAxisAlignment: CrossAxisAlignment.start,
                children: [
                  message.isUser
                      ? Text(
                          message.text,
                          style: GoogleFonts.poppins(
                            fontSize: 14,
                            fontWeight: FontWeight.w400,
                            color: Colors.white,
                            height: 1.4,
                          ),
                        )
                      : MarkdownBody(
                          data: message.text,
                          styleSheet: MarkdownStyleSheet(
                            p: GoogleFonts.poppins(
                              fontSize: 14,
                              fontWeight: FontWeight.w400,
                              color: textColor,
                              height: 1.4,
                            ),
                            code: GoogleFonts.firaCode(
                              fontSize: 13,
                              color: primaryColor,
                              backgroundColor: primaryColor.withOpacity(0.08),
                            ),
                            codeblockDecoration: BoxDecoration(
                              color: primaryColor.withOpacity(0.08),
                              borderRadius: BorderRadius.circular(8),
                            ),
                            blockquote: GoogleFonts.poppins(
                              fontSize: 14,
                              fontWeight: FontWeight.w400,
                              color: textSecondaryColor,
                              height: 1.4,
                            ),
                            blockquoteDecoration: BoxDecoration(
                              border: Border(
                                left: BorderSide(
                                  color: primaryColor.withOpacity(0.3),
                                  width: 4,
                                ),
                              ),
                            ),
                            listBullet: GoogleFonts.poppins(
                              fontSize: 14,
                              fontWeight: FontWeight.w400,
                              color: textColor,
                            ),
                            h1: GoogleFonts.poppins(
                              fontSize: 18,
                              fontWeight: FontWeight.w600,
                              color: textColor,
                            ),
                            h2: GoogleFonts.poppins(
                              fontSize: 16,
                              fontWeight: FontWeight.w600,
                              color: textColor,
                            ),
                            h3: GoogleFonts.poppins(
                              fontSize: 15,
                              fontWeight: FontWeight.w600,
                              color: textColor,
                            ),
                            strong: TextStyle(
                              color: primaryColor,
                              fontWeight: FontWeight.w600,
                            ),
                          ),
                          selectable: true,
                        ),
                  if (!message.isUser && onSpeakPressed != null)
                    Align(
                      alignment: Alignment.centerRight,
                      child: IconButton(
                        icon: Icon(
                          isSpeaking
                              ? Icons.volume_up
                              : Icons.volume_up_outlined,
                          size: 16,
                          color: isSpeaking
                              ? primaryColor
                              : textSecondaryColor.withOpacity(0.7),
                        ),
                        onPressed: onSpeakPressed,
                        padding: EdgeInsets.zero,
                        constraints: const BoxConstraints(),
                      ),
                    ),
                ],
              ),
            ),
          ),
        ],
      ),
    );
  }
  
}

class LoadingIndicator extends StatefulWidget {
  final Color primaryColor;
  final Color cardColor;

  const LoadingIndicator({
    super.key,
    required this.primaryColor,
    required this.cardColor,
  });

  @override
  State<LoadingIndicator> createState() => _LoadingIndicatorState();
}

class _LoadingIndicatorState extends State<LoadingIndicator>
    with SingleTickerProviderStateMixin {
  late AnimationController _controller;
  late List<Animation<double>> _animations;

  @override
  void initState() {
    super.initState();
    _controller = AnimationController(
      vsync: this,
      duration: const Duration(milliseconds: 1200),
    )..repeat();

    _animations = List.generate(3, (index) {
      return Tween<double>(begin: 0.0, end: 1.0).animate(
        CurvedAnimation(
          parent: _controller,
          curve: Interval(
            index * 0.2, // Stagger the animations
            0.6 + index * 0.2,
            curve: Curves.easeInOut,
          ),
        ),
      );
    });
  }

  @override
  void dispose() {
    _controller.dispose();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    return Row(
      children: [
        Container(
          width: 36,
          height: 36,
          margin: const EdgeInsets.only(right: 2.0),
          decoration: BoxDecoration(
            color: widget.cardColor,
            borderRadius: BorderRadius.circular(12),
            boxShadow: [
              BoxShadow(
                color: Colors.black.withOpacity(0.05),
                blurRadius: 10,
                offset: const Offset(0, 2),
              ),
            ],
          ),
          child: Center(
            child: Icon(
              Icons.auto_awesome,
              color: widget.primaryColor,
              size: 18,
            ),
          ),
        ),
        Container(
          padding: const EdgeInsets.symmetric(horizontal: 16, vertical: 12),
          decoration: BoxDecoration(
            color: widget.cardColor,
            borderRadius: BorderRadius.circular(20),
            boxShadow: [
              BoxShadow(
                color: Colors.black.withOpacity(0.05),
                blurRadius: 8,
                offset: const Offset(0, 2),
              ),
            ],
          ),
          child: Row(
            mainAxisSize: MainAxisSize.min,
            children: List.generate(
              3,
              (index) => AnimatedBuilder(
                animation: _animations[index],
                builder: (context, child) {
                  return Container(
                    width: 8,
                    height: 8 + (_animations[index].value * 8),
                    margin: const EdgeInsets.symmetric(horizontal: 3),
                    decoration: BoxDecoration(
                      color: widget.primaryColor
                          .withOpacity(0.4 + (_animations[index].value * 0.6)),
                      borderRadius: BorderRadius.circular(2),
                    ),
                  );
                },
              ),
            ),
          ),
        ),
      ],
    );
  }
}

class ChatMessage {
  final String text;
  final bool isUser;
  final bool isError;

  const ChatMessage({
    required this.text,
    required this.isUser,
    this.isError = false,
  });
}
