// lib/models/mood_entry.dart
class MoodEntry {
  final DateTime date;
  final String mood;
  final String? note;

  MoodEntry({
    required this.date,
    required this.mood,
    this.note,
  });

  factory MoodEntry.fromJson(Map<String, dynamic> json) {
    return MoodEntry(
      date: DateTime.parse(json['date'] as String),
      mood: json['mood'] as String,
      note: json['note'] as String?,
    );
  }
}