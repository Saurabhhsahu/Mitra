import 'package:flutter/material.dart';
import 'package:http/http.dart' as http;
import 'dart:convert';
import 'package:mitra/core/config/colors.dart';
import 'package:flutter_markdown/flutter_markdown.dart';

class GeminiChatbot extends StatefulWidget {
  const GeminiChatbot({super.key});

  @override
  State<GeminiChatbot> createState() => _GeminiChatbotState();
}

class _GeminiChatbotState extends State<GeminiChatbot> {
  final TextEditingController _textController = TextEditingController();
  final List<ChatMessage> _messages = [];
  final ScrollController _scrollController = ScrollController();
  bool _isLoading = false;

  final String _apiUrl =
      'https://generativelanguage.googleapis.com/v1beta/models/gemini-1.5-flash:generateContent';
  final String _apiKey = 'AIzaSyCNjcppkOu8IYk5OzoEuEeDNvpuhoa1gA8';

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
                {"text": userMessage}
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
            _handleError('Invalid response: Missing text.');
          }
        } else {
          _handleError('Invalid response: No candidates found.');
        }
      } else {
        _handleError(
            'API request failed: ${response.statusCode} - ${response.body}');
      }
    } catch (e) {
      _handleError('Error: $e');
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
    print(message);
    setState(() {
      _messages.add(ChatMessage(text: message, isUser: false, isError: true));
    });
    _scrollToBottom();
  }

  @override
  Widget build(BuildContext context) {
    final theme = Theme.of(context);
    final bottomPadding = MediaQuery.of(context).padding.bottom;
    final bottomNavHeight = 100.0;

    return Scaffold(
      backgroundColor: AppColors.background,
      appBar: AppBar(
        centerTitle: true,
        title: Row(
          mainAxisSize: MainAxisSize.min,
          children: [
            Container(
              width: 32,
              height: 32,
              decoration: BoxDecoration(
                color: AppColors.primary.withOpacity(0.1),
                shape: BoxShape.circle,
              ),
              child: Icon(
                Icons.smart_toy_rounded,
                size: 18,
                color: AppColors.primary,
              ),
            ),
            const SizedBox(width: 8),
            Text(
              'MitraBot',
              style: theme.textTheme.titleLarge?.copyWith(
                color: AppColors.textPrimary,
                fontWeight: FontWeight.w600,
              ),
            ),
          ],
        ),
        backgroundColor: AppColors.surface,
        elevation: 0,
        automaticallyImplyLeading: false,
      ),
      body: SafeArea(
        bottom: false,
        child: Column(
          children: [
            Expanded(
              child: ListView.builder(
                controller: _scrollController,
                padding:
                    const EdgeInsets.symmetric(horizontal: 16.0, vertical: 8.0),
                itemCount: _messages.length,
                itemBuilder: (context, index) {
                  final message = _messages[index];
                  final isFirstMessage = index == 0;
                  final isLastMessage = index == _messages.length - 1;
                  final showAvatar = !message.isUser &&
                      (isFirstMessage || _messages[index - 1].isUser);

                  return Column(
                    children: [
                      if (isFirstMessage) const SizedBox(height: 8),
                      MessageBubble(
                        message: message,
                        showAvatar: showAvatar,
                      ),
                      if (isLastMessage && _isLoading)
                        Padding(
                          padding: const EdgeInsets.only(top: 16.0),
                          child: LoadingIndicator(),
                        ),
                    ],
                  );
                },
              ),
            ),
            ChatInputBox(
              controller: _textController,
              onSend: _sendMessage,
              bottomPadding: bottomPadding,
              bottomNavHeight: bottomNavHeight,
            ),
          ],
        ),
      ),
    );
  }
}

class MessageBubble extends StatelessWidget {
  final ChatMessage message;
  final bool showAvatar;

  const MessageBubble({
    super.key,
    required this.message,
    this.showAvatar = false,
  });

  @override
  Widget build(BuildContext context) {
    return Padding(
      padding: EdgeInsets.only(
        top: 8.0,
        bottom: 8.0,
        left: message.isUser
            ? 48.0
            : showAvatar
                ? 0.0
                : 40.0,
        right: message.isUser ? 0.0 : 48.0,
      ),
      child: Row(
        crossAxisAlignment: CrossAxisAlignment.start,
        mainAxisAlignment:
            message.isUser ? MainAxisAlignment.end : MainAxisAlignment.start,
        children: [
          if (!message.isUser && showAvatar)
            Padding(
              padding: const EdgeInsets.only(right: 8.0),
              child: Container(
                width: 32,
                height: 32,
                decoration: BoxDecoration(
                  color: AppColors.primary.withOpacity(0.1),
                  shape: BoxShape.circle,
                ),
                child: Icon(
                  Icons.smart_toy_rounded,
                  size: 16,
                  color: AppColors.primary,
                ),
              ),
            ),
          Flexible(
            child: Container(
              constraints: BoxConstraints(
                maxWidth: MediaQuery.of(context).size.width * 0.85,
              ),
              decoration: BoxDecoration(
                color: message.isUser
                    ? AppColors.primary
                    : message.isError
                        ? AppColors.error.withOpacity(0.1)
                        : AppColors.surface,
                borderRadius: BorderRadius.circular(20.0),
                border: message.isUser
                    ? null
                    : Border.all(
                        color: message.isError
                            ? AppColors.error.withOpacity(0.3)
                            : AppColors.primary.withOpacity(0.1),
                      ),
                boxShadow: [
                  BoxShadow(
                    color: (message.isUser
                            ? AppColors.primary
                            : AppColors.textPrimary)
                        .withOpacity(0.08),
                    blurRadius: 8,
                    offset: const Offset(0, 4),
                  ),
                ],
              ),
              padding: const EdgeInsets.symmetric(horizontal: 16, vertical: 12),
              child: message.isUser
                  ? Text(
                      message.text,
                      style: Theme.of(context).textTheme.bodyLarge?.copyWith(
                            color: AppColors.surface,
                            height: 1.4,
                          ),
                    )
                  : MarkdownBody(
                      data: message.text,
                      styleSheet: MarkdownStyleSheet(
                        p: Theme.of(context).textTheme.bodyLarge?.copyWith(
                              color: message.isError
                                  ? AppColors.error
                                  : AppColors.textPrimary,
                              height: 1.4,
                            ),
                        code: Theme.of(context).textTheme.bodyMedium?.copyWith(
                              color: message.isError
                                  ? AppColors.error
                                  : AppColors.primary,
                              backgroundColor:
                                  AppColors.primary.withOpacity(0.1),
                              fontFamily: 'monospace',
                            ),
                        codeblockDecoration: BoxDecoration(
                          color: AppColors.primary.withOpacity(0.05),
                          borderRadius: BorderRadius.circular(8),
                        ),
                        blockquote:
                            Theme.of(context).textTheme.bodyLarge?.copyWith(
                                  color: AppColors.textSecondary,
                                  height: 1.4,
                                ),
                        blockquoteDecoration: BoxDecoration(
                          border: Border(
                            left: BorderSide(
                              color: AppColors.primary.withOpacity(0.3),
                              width: 4,
                            ),
                          ),
                        ),
                        listBullet:
                            Theme.of(context).textTheme.bodyLarge?.copyWith(
                                  color: message.isError
                                      ? AppColors.error
                                      : AppColors.textPrimary,
                                ),
                      ),
                      selectable: true,
                    ),
            ),
          ),
        ],
      ),
    );
  }
}

class LoadingIndicator extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Row(
      children: [
        Container(
          width: 32,
          height: 32,
          margin: const EdgeInsets.only(left: 8.0, right: 8.0),
          decoration: BoxDecoration(
            color: AppColors.primary.withOpacity(0.1),
            shape: BoxShape.circle,
          ),
          child: Icon(
            Icons.smart_toy_rounded,
            size: 16,
            color: AppColors.primary,
          ),
        ),
        Container(
          padding: const EdgeInsets.symmetric(horizontal: 16, vertical: 12),
          decoration: BoxDecoration(
            color: AppColors.surface,
            borderRadius: BorderRadius.circular(20.0),
            border: Border.all(color: AppColors.primary.withOpacity(0.1)),
          ),
          child: Row(
            mainAxisSize: MainAxisSize.min,
            children: [
              Container(
                width: 8,
                height: 8,
                margin: const EdgeInsets.symmetric(horizontal: 2),
                decoration: BoxDecoration(
                  color: AppColors.primary.withOpacity(0.4),
                  shape: BoxShape.circle,
                ),
              ),
              Container(
                width: 8,
                height: 8,
                margin: const EdgeInsets.symmetric(horizontal: 2),
                decoration: BoxDecoration(
                  color: AppColors.primary.withOpacity(0.4),
                  shape: BoxShape.circle,
                ),
              ),
              Container(
                width: 8,
                height: 8,
                margin: const EdgeInsets.symmetric(horizontal: 2),
                decoration: BoxDecoration(
                  color: AppColors.primary.withOpacity(0.4),
                  shape: BoxShape.circle,
                ),
              ),
            ],
          ),
        ),
      ],
    );
  }
}

class ChatInputBox extends StatelessWidget {
  final TextEditingController controller;
  final VoidCallback onSend;
  final double bottomPadding;
  final double bottomNavHeight;

  const ChatInputBox({
    super.key,
    required this.controller,
    required this.onSend,
    required this.bottomPadding,
    required this.bottomNavHeight,
  });

  @override
  Widget build(BuildContext context) {
    return Container(
      padding: EdgeInsets.fromLTRB(
        16,
        16,
        16,
        bottomPadding + bottomNavHeight + 16,
      ),
      decoration: BoxDecoration(
        color: AppColors.surface,
        borderRadius: const BorderRadius.vertical(top: Radius.circular(28)),
        boxShadow: [
          BoxShadow(
            color: AppColors.primary.withOpacity(0.08),
            blurRadius: 24,
            offset: const Offset(0, -4),
          ),
        ],
      ),
      child: Row(
        children: [
          Expanded(
            child: Container(
              decoration: BoxDecoration(
                color: AppColors.background,
                borderRadius: BorderRadius.circular(24),
                border: Border.all(
                  color: AppColors.primary.withOpacity(0.1),
                ),
              ),
              child: Row(
                children: [
                  Expanded(
                    child: TextField(
                      controller: controller,
                      decoration: InputDecoration(
                        hintText: 'Type your message...',
                        hintStyle: Theme.of(context)
                            .textTheme
                            .bodyLarge
                            ?.copyWith(
                              color: AppColors.textSecondary.withOpacity(0.5),
                            ),
                        border: InputBorder.none,
                        contentPadding:
                            const EdgeInsets.symmetric(horizontal: 20),
                      ),
                    ),
                  ),
                  Container(
                    margin: const EdgeInsets.only(right: 4),
                    decoration: BoxDecoration(
                      gradient: LinearGradient(
                        colors: [
                          AppColors.primary,
                          AppColors.primary.withOpacity(0.8),
                        ],
                      ),
                      borderRadius: BorderRadius.circular(20),
                    ),
                    child: Material(
                      color: Colors.transparent,
                      child: InkWell(
                        onTap: onSend,
                        borderRadius: BorderRadius.circular(20),
                        child: Container(
                          padding: const EdgeInsets.all(12),
                          child: Icon(
                            Icons.send_rounded,
                            color: AppColors.surface,
                            size: 20,
                          ),
                        ),
                      ),
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