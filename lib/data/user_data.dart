// lib/data/user_data.dart
import '../models/user_model.dart';
import '../models/mood_entry.dart';

class UserData {
  // Singleton instance
  static final UserData _instance = UserData._internal();

  factory UserData() => _instance;

  UserData._internal();

  // Mock user data
  static User getUser() {
    return User(
      name: 'Saurabh Kumar',
      username: 'saurabh123',
      email: 'saurabh@example.com',
      phone: '+91 9876543210',
      location: 'Mumbai, India',
      bio: 'Flutter developer passionate about creating beautiful mobile experiences.',
      joinDate: DateTime(2023, 3, 15),
      profileImage: 'assets/images/profile.jpeg',
    );
  }

  // Mock mood entries
  static List<MoodEntry> getMoodEntries() {
    final today = DateTime.now();

    return [
      MoodEntry(
        date: today.subtract(const Duration(days: 6)),
        mood: 'Happy',
        note: 'Completed my project ahead of schedule!',
      ),
      MoodEntry(
        date: today.subtract(const Duration(days: 5)),
        mood: 'Good',
        note: 'Had a productive day at work.',
      ),
      MoodEntry(
        date: today.subtract(const Duration(days: 4)),
        mood: 'Neutral',
        note: 'Just an ordinary day.',
      ),
      MoodEntry(
        date: today.subtract(const Duration(days: 3)),
        mood: 'Sad',
        note: 'Missed an important deadline.',
      ),
      MoodEntry(
        date: today.subtract(const Duration(days: 2)),
        mood: 'Angry',
        note: 'Got stuck in traffic for 2 hours!',
      ),
      MoodEntry(
        date: today.subtract(const Duration(days: 1)),
        mood: 'Good',
        note: 'Found a solution to a tough problem.',
      ),
      MoodEntry(
        date: today,
        mood: 'Happy',
        note: 'It\'s Friday!',
      ),
    ];
  }

  // Method to handle real API data when available
  static Future<User> fetchUserData() async {
    // This would be replaced with actual API call
    // For now, return mock data
    return getUser();
  }

  static Future<List<MoodEntry>> fetchMoodEntries() async {
    // This would be replaced with actual API call
    // For now, return mock data
    return getMoodEntries();
  }
}