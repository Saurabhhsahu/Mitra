import 'package:flutter/material.dart';
import '../services/database_service.dart';
import '../data/user_data.dart';
import '../models/mood_entry.dart';

class MoodSection extends StatefulWidget {
  const MoodSection({super.key});

  @override
  _MoodSectionState createState() => _MoodSectionState();
}

class _MoodSectionState extends State<MoodSection> {
  MoodEntry? todayMood;

  @override
  void initState() {
    super.initState();
    _checkTodayMood();
  }

  void _checkTodayMood() {
    final moodEntries = UserData.getMoodEntries();
    final today = DateTime.now();

    setState(() {
      todayMood = moodEntries.firstWhere(
            (entry) =>
        entry.date.year == today.year &&
            entry.date.month == today.month &&
            entry.date.day == today.day,
        orElse: () => MoodEntry(date: DateTime(2000), mood: ''), // Default if no entry found
      );
    });
  }

  Future<void> _saveMood(String mood) async {
    if (todayMood!.mood.isNotEmpty) return;

    final newMood = MoodEntry(
      date: DateTime.now(),
      mood: mood,
      note: '',
    );

    await DatabaseService.insertData({
      "mood": mood,
      "timestamp": DateTime.now().toIso8601String()
    });

    UserData.addMoodEntry(newMood);

    setState(() {
      todayMood = newMood;
    });
  }

  Widget _buildMoodButton(String label, IconData icon, Color backgroundColor) {
    final bool isDisabled = todayMood!.mood.isNotEmpty;

    return GestureDetector(
      onTap: isDisabled ? null : () => _saveMood(label),
      child: Column(
        children: [
          Container(
            width: 56,
            height: 56,
            decoration: BoxDecoration(
              color: isDisabled ? Colors.grey.shade300 : backgroundColor,
              borderRadius: BorderRadius.circular(16),
            ),
            child: Icon(
              icon,
              color: Colors.black54,
              size: 28,
            ),
          ),
          const SizedBox(height: 8),
          Text(
            label,
            style: TextStyle(
              fontSize: 12,
              color: isDisabled ? Colors.grey : Colors.black,
            ),
          ),
        ],
      ),
    );
  }

  @override
  Widget build(BuildContext context) {
    return Column(
      crossAxisAlignment: CrossAxisAlignment.start,
      children: [
        const Text(
          'How are you feeling today?',
          style: TextStyle(
            fontSize: 16,
            color: Colors.black87,
          ),
        ),
        const SizedBox(height: 16),
        if (todayMood!.mood.isNotEmpty)
          Text(
            'You already recorded your mood today: ${todayMood!.mood}',
            style: const TextStyle(fontSize: 14, color: Colors.black54),
          ),
        const SizedBox(height: 8),
        Row(
          mainAxisAlignment: MainAxisAlignment.spaceBetween,
          children: [
            _buildMoodButton('Happy', Icons.emoji_emotions, Colors.green.shade100),
            _buildMoodButton('Good', Icons.thumb_up, Colors.blue.shade100),
            _buildMoodButton('Neutral', Icons.sentiment_neutral, Colors.grey.shade300),
            _buildMoodButton('Sad', Icons.sentiment_dissatisfied, Colors.blueGrey.shade100),
            _buildMoodButton('Angry', Icons.sentiment_very_dissatisfied, Colors.red.shade100),
          ],
        ),
      ],
    );
  }
}
