import 'dart:async';
import '../models/dummy_user_model.dart';
import '../models/interest_match_model.dart';
class UserRepository {
  // Mock users data
  final List<User> _dummyUsers = [
    User(
      id: 'user1',
      username: 'Emma',
      profileImageAsset: 'assets/human1', // Use asset path
      interests: ['Reading', 'Hiking', 'Mindfulness', 'Photography', 'Cooking'],
      isOnline: true,
      lastActive: DateTime.now(),
    ),
    User(
      id: 'user2',
      username: 'Liam',
      profileImageAsset: 'assets/human1', // Use asset path
      interests: ['Gaming', 'Movies', 'Hiking', 'Music', 'Technology'],
      isOnline: false,
      lastActive: DateTime.now().subtract(const Duration(minutes: 30)),
    ),
    User(
      id: 'user3',
      username: 'Sophia',
      profileImageAsset: 'assets/human1', // Use asset path
      interests: ['Art', 'Yoga', 'Mindfulness', 'Traveling', 'Cooking'],
      isOnline: true,
      lastActive: DateTime.now(),
    ),
    User(
      id: 'user4',
      username: 'Noah',
      profileImageAsset: 'assets/human1', // Use asset path
      interests: ['Running', 'Movies', 'Gaming', 'Photography', 'Reading'],
      isOnline: false,
      lastActive: DateTime.now().subtract(const Duration(hours: 2)),
    ),
    User(
      id: 'user5',
      username: 'Olivia',
      profileImageAsset: 'assets/human1', // User without profile image
      interests: ['Dancing', 'Music', 'Art', 'Photography', 'Traveling'],
      isOnline: true,
      lastActive: DateTime.now(),
    ),
    User(
      id: 'user6',
      username: 'Jackson',
      profileImageAsset: 'assets/human1', // Use asset path
      interests: ['Fitness', 'Meditation', 'Cooking', 'Technology', 'Reading'],
      isOnline: false,
      lastActive: DateTime.now().subtract(const Duration(days: 1)),
    ),
    User(
      id: 'currentUser',
      username: 'CurrentUser',
      profileImageAsset: 'assets/human1', // Use asset path
      interests: ['Reading', 'Hiking', 'Photography', 'Meditation', 'Music'],
      isOnline: true,
      lastActive: DateTime.now(),
    ),
  ];

  // Get user by ID
  Future<User> getUserById(String userId) async {
    // Simulate network delay
    await Future.delayed(const Duration(milliseconds: 300));
    
    final user = _dummyUsers.firstWhere(
      (user) => user.id == userId,
      orElse: () => throw Exception('User not found'),
    );
    
    return user;
  }
  
  // Get users with similar interests
  Future<List<InterestMatch>> getSimilarUsers(String userId) async {
    // Simulate network delay
    await Future.delayed(const Duration(seconds: 1));
    
    try {
      // Get current user
      final currentUser = _dummyUsers.firstWhere((user) => user.id == userId);
      
      final List<InterestMatch> matches = [];
      
      // Calculate match percentage for each user
      for (final user in _dummyUsers) {
        // Skip current user
        if (user.id == userId) continue;
        
        // Find common interests
        final commonInterests = user.interests
            .where((interest) => currentUser.interests.contains(interest))
            .toList();
        
        // Calculate match percentage
        final matchPercentage = commonInterests.length /
            (currentUser.interests.length + user.interests.length - commonInterests.length);
        
        // Only include users with at least one common interest
        if (commonInterests.isNotEmpty) {
          matches.add(InterestMatch(
            user: user,
            matchPercentage: matchPercentage,
            commonInterests: commonInterests,
          ));
        }
      }
      
      // Sort by match percentage (highest first)
      matches.sort((a, b) => b.matchPercentage.compareTo(a.matchPercentage));
      
      return matches;
    } catch (e) {
      throw Exception('Failed to get similar users: $e');
    }
  }

  // Update user interests
  Future<void> updateUserInterests(String userId, List<String> interests) async {
    // Simulate network delay
    await Future.delayed(const Duration(milliseconds: 500));
    
    try {
      final index = _dummyUsers.indexWhere((user) => user.id == userId);
      if (index != -1) {
        final updatedUser = User(
          id: _dummyUsers[index].id,
          username: _dummyUsers[index].username,
          profileImageAsset: _dummyUsers[index].profileImageAsset, // Use asset path
          interests: interests,
          isOnline: _dummyUsers[index].isOnline,
          lastActive: _dummyUsers[index].lastActive,
        );
        _dummyUsers[index] = updatedUser;
      } else {
        throw Exception('User not found');
      }
    } catch (e) {
      throw Exception('Failed to update interests: $e');
    }
  }
  
  // Update user online status
  Future<void> updateUserOnlineStatus(String userId, bool isOnline) async {
    // Simulate network delay
    await Future.delayed(const Duration(milliseconds: 300));
    
    try {
      final index = _dummyUsers.indexWhere((user) => user.id == userId);
      if (index != -1) {
        final updatedUser = User(
          id: _dummyUsers[index].id,
          username: _dummyUsers[index].username,
          profileImageAsset: _dummyUsers[index].profileImageAsset, // Use asset path
          interests: _dummyUsers[index].interests,
          isOnline: isOnline,
          lastActive: DateTime.now(),
        );
        _dummyUsers[index] = updatedUser;
      } else {
        throw Exception('User not found');
      }
    } catch (e) {
      throw Exception('Failed to update online status: $e');
    }
  }
}