import '../models/user_model.dart';
import '../models/mood_entry.dart';
import 'dart:math';

class UserData {
  // Singleton instance
  static final UserData _instance = UserData._internal();

  factory UserData() => _instance;

  UserData._internal();

  static final List<String> _moods = ['Happy', 'Good', 'Neutral', 'Sad','Angry'];

  static final List<MoodEntry> _moodEntries = [
    MoodEntry(date: DateTime.now().subtract(const Duration(days: 1)), mood: 'Happy', note: 'Great day at work!'),
    MoodEntry(date: DateTime.now().subtract(const Duration(days: 2)), mood: 'Angry', note: 'Got stuck in traffic.'),
    MoodEntry(date: DateTime.now().subtract(const Duration(days: 3)), mood: 'Neutral', note: 'Had a relaxing weekend.'),
    MoodEntry(date: DateTime.now().subtract(const Duration(days: 4)), mood: 'Neutral', note: 'So much energy today!'),
    MoodEntry(date: DateTime.now().subtract(const Duration(days: 5)), mood: 'Sad', note: 'Completed a big project!'),
    MoodEntry(date: DateTime.now().subtract(const Duration(days: 6)), mood: 'Good', note: 'Peaceful day with family.'),
    MoodEntry(date: DateTime.now().subtract(const Duration(days: 7)), mood: 'Angry', note: 'Had an argument with a friend.'),
    MoodEntry(date: DateTime.now().subtract(const Duration(days: 8)), mood: 'Good', note: 'Worked on a new idea nonstop!'),
    MoodEntry(date: DateTime.now().subtract(const Duration(days: 9)), mood: 'Happy', note: 'Received great feedback!'),
    MoodEntry(date: DateTime.now().subtract(const Duration(days: 10)), mood: 'Neutral', note: 'A quiet and restful day.'),
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
