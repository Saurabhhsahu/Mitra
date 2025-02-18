import 'dart:async';
import '../models/message_model.dart';

class ChatRepository {
  // Mock messages data
  final List<Message> _messages = [
    // Conversation with user1 (Emma)
    Message(
      id: 'm1',
      senderId: 'currentUser',
      receiverId: 'user1',
      content: 'Hi Emma, I noticed we both enjoy photography. What kind of photos do you like to take?',
      timestamp: DateTime.now().subtract(const Duration(days: 2, hours: 3)),
      isRead: true,
    ),
    Message(
      id: 'm2',
      senderId: 'user1',
      receiverId: 'currentUser',
      content: 'Hey there! I mostly do nature photography - especially on my hikes. It helps me stay mindful and appreciate beauty around me. How about you?',
      timestamp: DateTime.now().subtract(const Duration(days: 2, hours: 2, minutes: 45)),
      isRead: true,
    ),
    Message(
      id: 'm3',
      senderId: 'currentUser',
      receiverId: 'user1',
      content: 'That sounds lovely! I enjoy street photography. It helps me notice details I might otherwise miss. Been feeling down lately but my camera helps me see the world differently.',
      timestamp: DateTime.now().subtract(const Duration(days: 2, hours: 2, minutes: 30)),
      isRead: true,
    ),
    Message(
      id: 'm4',
      senderId: 'user1',
      receiverId: 'currentUser',
      content: 'I understand completely. Photography has been my therapy during tough times too. Maybe we could share some photos sometime?',
      timestamp: DateTime.now().subtract(const Duration(days: 2, hours: 2, minutes: 15)),
      isRead: true,
    ),
    
    // Conversation with user3 (Sophia)
    Message(
      id: 'm5',
      senderId: 'user3',
      receiverId: 'currentUser',
      content: 'Hello! I saw we both practice mindfulness. Have you tried any guided meditations lately?',
      timestamp: DateTime.now().subtract(const Duration(days: 1, hours: 5)),
      isRead: true,
    ),
    Message(
      id: 'm6',
      senderId: 'currentUser',
      receiverId: 'user3',
      content: 'Hi Sophia! Yes, Ive been using the Calm app lately. Its been helping with my anxiety. What about you?',
      timestamp: DateTime.now().subtract(const Duration(days: 1, hours: 4, minutes: 50)),
      isRead: true,
    ),
    Message(
      id: 'm7',
      senderId: 'user3',
      receiverId: 'currentUser',
      content: 'I love Calm! Ive also been trying yoga to help with mindfulness. On difficult days, combining movement with breath really helps ground me.',
      timestamp: DateTime.now().subtract(const Duration(days: 1, hours: 4, minutes: 30)),
      isRead: true,
    ),
    Message(
      id: 'm8',
      senderId: 'currentUser',
      receiverId: 'user3',
      content: 'That makes sense. Ive been meaning to try yoga. Do you have any beginner recommendations?',
      timestamp: DateTime.now().subtract(const Duration(days: 1, hours: 4, minutes: 15)),
      isRead: false,
    ),
    Message(
      id: 'm9',
      senderId: 'user3',
      receiverId: 'currentUser',
      content: 'Absolutely! Id recommend "Yoga with Adriene" on YouTube. She has a great 30-day beginner series. No pressure though - even 5 minutes makes a difference!',
      timestamp: DateTime.now().subtract(const Duration(days: 1, hours: 4)),
      isRead: false,
    ),
    
    // No conversation yet with other users
  ];
  
  // Get chat messages stream
  Stream<List<Message>> getMessages(String currentUserId, String otherUserId) {
    // Create a StreamController to simulate real-time updates
    final controller = StreamController<List<Message>>();
    
    // Filter messages between these two users
    final filteredMessages = _messages.where((message) =>
        (message.senderId == currentUserId && message.receiverId == otherUserId) ||
        (message.senderId == otherUserId && message.receiverId == currentUserId))
        .toList();
    
    // Sort by timestamp (newest first)
    filteredMessages.sort((a, b) => b.timestamp.compareTo(a.timestamp));
    
    // Add to stream with slight delay to simulate network
    Future.delayed(const Duration(milliseconds: 500), () {
      controller.add(filteredMessages);
    });
    
    // Return the stream
    return controller.stream;
  }
  
  // Send a new message
  Future<void> sendMessage(Message message) async {
    // Simulate network delay
    await Future.delayed(const Duration(milliseconds: 300));
    
    try {
      // Add message to the list
      _messages.add(message);
    } catch (e) {
      throw Exception('Failed to send message: $e');
    }
  }
  
  // Mark messages as read
  Future<void> markMessagesAsRead(String currentUserId, String otherUserId) async {
    // Simulate network delay
    await Future.delayed(const Duration(milliseconds: 200));
    
    try {
      for (var i = 0; i < _messages.length; i++) {
        if (_messages[i].senderId == otherUserId && 
            _messages[i].receiverId == currentUserId && 
            !_messages[i].isRead) {
          _messages[i] = Message(
            id: _messages[i].id,
            senderId: _messages[i].senderId,
            receiverId: _messages[i].receiverId,
            content: _messages[i].content,
            timestamp: _messages[i].timestamp,
            isRead: true,
          );
        }
      }
    } catch (e) {
      throw Exception('Failed to mark messages as read: $e');
    }
  }
}