import '../models/user_model.dart';
import '../models/mood_entry.dart';
import 'dart:math';

class UserData {
  // Singleton instance
  static final UserData _instance = UserData._internal();

  factory UserData() => _instance;

  UserData._internal();

  static final List<String> _moods = ['Happy', 'Angry', 'Calm', 'Manic'];

  static final List<MoodEntry> _moodEntries = [
    MoodEntry(date: DateTime.now().subtract(const Duration(days: 1)), mood: 'Happy', note: 'Great day at work!'),
    MoodEntry(date: DateTime.now().subtract(const Duration(days: 2)), mood: 'Angry', note: 'Got stuck in traffic.'),
    MoodEntry(date: DateTime.now().subtract(const Duration(days: 3)), mood: 'Calm', note: 'Had a relaxing weekend.'),
    MoodEntry(date: DateTime.now().subtract(const Duration(days: 4)), mood: 'Manic', note: 'So much energy today!'),
    MoodEntry(date: DateTime.now().subtract(const Duration(days: 5)), mood: 'Happy', note: 'Completed a big project!'),
    MoodEntry(date: DateTime.now().subtract(const Duration(days: 6)), mood: 'Calm', note: 'Peaceful day with family.'),
    MoodEntry(date: DateTime.now().subtract(const Duration(days: 7)), mood: 'Angry', note: 'Had an argument with a friend.'),
    MoodEntry(date: DateTime.now().subtract(const Duration(days: 8)), mood: 'Manic', note: 'Worked on a new idea nonstop!'),
    MoodEntry(date: DateTime.now().subtract(const Duration(days: 9)), mood: 'Happy', note: 'Received great feedback!'),
    MoodEntry(date: DateTime.now().subtract(const Duration(days: 10)), mood: 'Calm', note: 'A quiet and restful day.'),
  ];

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

  static List<MoodEntry> getMoodEntries() {
    return _moodEntries;
  }

  static void addMoodEntry(MoodEntry moodEntry) {
    final today = DateTime.now();
    if (_moodEntries.any((entry) =>
    entry.date.year == today.year &&
        entry.date.month == today.month &&
        entry.date.day == today.day)) {
      return;
    }
    _moodEntries.add(moodEntry);
  }

  static Future<List<MoodEntry>> fetchMoodEntries() async {
    return Future.value(getMoodEntries());
  }
}
