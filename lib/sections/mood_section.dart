import 'package:flutter/material.dart';
import '../services/database_service.dart';

class MoodSection extends StatelessWidget {
  const MoodSection({super.key});

  Future<void> _saveMood(String mood) async {
    await DatabaseService.insertData({
      "mood": mood,
      "timestamp": DateTime.now().toIso8601String()
    });
  }

  Widget _buildMoodButton(String label, IconData icon, Color backgroundColor) {
    return GestureDetector(
      onTap: () => _saveMood(label),  // Save mood on tap
      child: Column(
        children: [
          Container(
            width: 56,
            height: 56,
            decoration: BoxDecoration(
              color: backgroundColor,
              borderRadius: BorderRadius.circular(16),
            ),
            child: Icon(icon, color: Colors.black54, size: 28),
          ),
          const SizedBox(height: 8),
          Text(
            label,
            style: const TextStyle(fontSize: 12),
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
        Row(
          mainAxisAlignment: MainAxisAlignment.spaceBetween,
          children: [
            _buildMoodButton('Happy', Icons.emoji_emotions, Colors.green.shade100),
            _buildMoodButton('Calm', Icons.water, Colors.blue.shade100),
            _buildMoodButton('Manic', Icons.cyclone, Colors.pink.shade100),
            _buildMoodButton('Angry', Icons.sentiment_very_dissatisfied, Colors.orange.shade100),
          ],
        ),
      ],
    );
  }
}
