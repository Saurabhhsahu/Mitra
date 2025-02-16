// lib/screens/profile_screen.dart
import 'package:flutter/material.dart';
import 'package:fl_chart/fl_chart.dart';
import 'package:intl/intl.dart';
import '../models/user_model.dart';
import '../models/mood_entry.dart';
import '../data/user_data.dart';

class ProfileScreen extends StatelessWidget {
  const ProfileScreen({super.key});

  @override
  Widget build(BuildContext context) {
    // Get user data from our data provider
    final user = UserData.getUser();
    final moodEntries = UserData.getMoodEntries();

    return Scaffold(
      backgroundColor: Colors.grey[50],
      appBar: AppBar(
        title: const Text('My Profile'),
        actions: [
          IconButton(
            icon: const Icon(Icons.settings),
            onPressed: () {
              // Navigate to settings
            },
          ),
        ],
      ),
      body: SingleChildScrollView(
        child: Column(
          children: [
            _buildProfileHeader(user),
            buildMoodChart(moodEntries),
            _buildUserInfoSection(user),
            _buildStatisticsSection(moodEntries),
          ],
        ),
      ),
      bottomNavigationBar: _buildBottomNav(context),
    );
  }

  Widget _buildProfileHeader(User user) {
    return Container(
      padding: const EdgeInsets.all(16),
      child: Column(
        children: [
          CircleAvatar(
            radius: 50,
            backgroundImage: user.profileImage != null
                ? AssetImage(user.profileImage!)
                : null,
            child: user.profileImage == null
                ? const Icon(Icons.person, size: 50)
                : null,
          ),
          const SizedBox(height: 16),
          Text(
            user.name,
            style: const TextStyle(
              fontSize: 24,
              fontWeight: FontWeight.bold,
            ),
          ),
          const SizedBox(height: 4),
          Text(
            '@${user.username}',
            style: TextStyle(
              fontSize: 16,
              color: Colors.grey[600],
            ),
          ),
          const SizedBox(height: 8),
          Text(
            user.bio,
            textAlign: TextAlign.center,
            style: TextStyle(
              fontSize: 14,
              color: Colors.grey[800],
            ),
          ),
        ],
      ),
    );
  }

  Widget buildMoodChart(List<MoodEntry> entries) {
    // Group entries by day for the chart
    final Map<DateTime, MoodEntry> entriesByDay = {};
    for (var entry in entries) {
      final date = DateTime(
        entry.date.year,
        entry.date.month,
        entry.date.day,
      );
      entriesByDay[date] = entry;
    }

    final sortedDates = entriesByDay.keys.toList()
      ..sort((a, b) => a.compareTo(b));

    // Only show last 7 days if we have enough data
    final daysToShow = sortedDates.length > 7 ? 7 : sortedDates.length;
    final displayDates = sortedDates.length > 7
        ? sortedDates.sublist(sortedDates.length - daysToShow)
        : sortedDates;

    // Convert mood string to numeric value for the chart
    double getMoodValue(String mood) {
      switch (mood.toLowerCase()) {
        case 'angry':
          return 0;
        case 'sad':
          return 1;
        case 'neutral':
          return 2;
        case 'good':
          return 3;
        case 'happy':
          return 4;
        default:
          return 2; // Default to neutral
      }
    }

    // Get color based on mood
    Color getMoodColor(String mood) {
      switch (mood.toLowerCase()) {
        case 'angry':
          return Colors.red;
        case 'sad':
          return Colors.orange;
        case 'neutral':
          return Colors.yellow;
        case 'good':
          return Colors.lightBlue;
        case 'happy':
          return Colors.green;
        default:
          return Colors.grey;
      }
    }

    return Card(
      margin: const EdgeInsets.all(16),
      elevation: 2,
      shape: RoundedRectangleBorder(
        borderRadius: BorderRadius.circular(16),
      ),
      child: Padding(
        padding: const EdgeInsets.all(16),
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            const Text(
              'Mood History',
              style: TextStyle(
                fontSize: 18,
                fontWeight: FontWeight.bold,
              ),
            ),
            const SizedBox(height: 24),
            SizedBox(
              height: 200,
              child: displayDates.isEmpty
                  ? const Center(child: Text('No mood data available yet'))
                  : LineChart(
                      LineChartData(
                        gridData: const FlGridData(show: false),
                        titlesData: FlTitlesData(
                          bottomTitles: AxisTitles(
                            sideTitles: SideTitles(
                              showTitles: true,
                              getTitlesWidget: (value, meta) {
                                if (value.toInt() >= 0 &&
                                    value.toInt() < displayDates.length) {
                                  final date = displayDates[value.toInt()];
                                  return Padding(
                                    padding: const EdgeInsets.only(top: 8.0),
                                    child: Text(
                                      DateFormat('MMM dd').format(date),
                                      style: const TextStyle(fontSize: 10),
                                    ),
                                  );
                                }
                                return const Text('');
                              },
                              reservedSize: 30,
                            ),
                          ),
                          leftTitles: AxisTitles(
                            sideTitles: SideTitles(
                              showTitles: true,
                              getTitlesWidget: (value, meta) {
                                const moodMap = {
                                  0: 'Angry',
                                  1: 'Sad',
                                  2: 'Neutral',
                                  3: 'Good',
                                  4: 'Happy',
                                };
                                if (moodMap.containsKey(value.toInt())) {
                                  return Text(
                                    moodMap[value.toInt()]!,
                                    style: const TextStyle(fontSize: 10),
                                  );
                                }
                                return const Text('');
                              },
                              reservedSize: 50,
                            ),
                          ),
                          topTitles: const AxisTitles(
                            sideTitles: SideTitles(showTitles: false),
                          ),
                          rightTitles: const AxisTitles(
                            sideTitles: SideTitles(showTitles: false),
                          ),
                        ),
                        borderData: FlBorderData(show: false),
                        minX: 0,
                        maxX: displayDates.length - 1.0,
                        minY: 0,
                        maxY: 4,
                        lineBarsData: [
                          LineChartBarData(
                            spots: List.generate(displayDates.length, (index) {
                              final date = displayDates[index];
                              final entry = entriesByDay[date]!;
                              final moodValue = getMoodValue(entry.mood);
                              return FlSpot(index.toDouble(), moodValue);
                            }),
                            isCurved: true,
                            color: Colors.blue,
                            barWidth: 3,
                            isStrokeCapRound: true,
                            dotData: FlDotData(
                              show: true,
                              getDotPainter: (spot, percent, barData, index) {
                                final date = displayDates[index];
                                final entry = entriesByDay[date]!;
                                final dotColor = getMoodColor(entry.mood);

                                return FlDotCirclePainter(
                                  radius: 5,
                                  color: dotColor,
                                  strokeWidth: 2,
                                  strokeColor: Colors.white,
                                );
                              },
                            ),
                            belowBarData: BarAreaData(show: false),
                          ),
                        ],
                      ),
                    ),
            ),
            const SizedBox(height: 16),
            Row(
              mainAxisAlignment: MainAxisAlignment.spaceEvenly,
              children: [
                _buildMoodIndicator('Angry', Colors.red),
                _buildMoodIndicator('Sad', Colors.orange),
                _buildMoodIndicator('Neutral', Colors.yellow),
                _buildMoodIndicator('Good', Colors.lightBlue),
                _buildMoodIndicator('Happy', Colors.green),
              ],
            ),
          ],
        ),
      ),
    );
  }

  Widget _buildMoodIndicator(String label, Color color) {
    return Row(
      children: [
        Container(
          width: 12,
          height: 12,
          decoration: BoxDecoration(
            color: color,
            shape: BoxShape.circle,
          ),
        ),
        const SizedBox(width: 4),
        Text(
          label,
          style: const TextStyle(fontSize: 12),
        ),
      ],
    );
  }

  Widget _buildUserInfoSection(User user) {
    return Card(
      margin: const EdgeInsets.all(16),
      elevation: 2,
      shape: RoundedRectangleBorder(
        borderRadius: BorderRadius.circular(16),
      ),
      child: Padding(
        padding: const EdgeInsets.all(16),
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            const Text(
              'Personal Information',
              style: TextStyle(
                fontSize: 18,
                fontWeight: FontWeight.bold,
              ),
            ),
            const SizedBox(height: 16),
            _buildInfoRow('Email', user.email),
            _buildInfoRow('Phone', user.phone),
            _buildInfoRow('Location', user.location),
            _buildInfoRow(
                'Member since', DateFormat('MMMM yyyy').format(user.joinDate)),
          ],
        ),
      ),
    );
  }

  Widget _buildInfoRow(String label, String value) {
    return Padding(
      padding: const EdgeInsets.symmetric(vertical: 8),
      child: Row(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          SizedBox(
            width: 100,
            child: Text(
              label,
              style: TextStyle(
                fontWeight: FontWeight.w500,
                color: Colors.grey[700],
              ),
            ),
          ),
          Expanded(
            child: Text(
              value,
              style: const TextStyle(
                color: Colors.black87,
              ),
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildStatisticsSection(List<MoodEntry> entries) {
    // Calculate mood statistics
    final moodCounts = {
      'Happy': 0,
      'Good': 0,
      'Neutral': 0,
      'Sad': 0,
      'Angry': 0,
    };

    for (var entry in entries) {
      final mood = entry.mood.toLowerCase();
      switch (mood) {
        case 'happy':
          moodCounts['Happy'] = (moodCounts['Happy'] ?? 0) + 1;
          break;
        case 'good':
          moodCounts['Good'] = (moodCounts['Good'] ?? 0) + 1;
          break;
        case 'neutral':
          moodCounts['Neutral'] = (moodCounts['Neutral'] ?? 0) + 1;
          break;
        case 'sad':
          moodCounts['Sad'] = (moodCounts['Sad'] ?? 0) + 1;
          break;
        case 'angry':
          moodCounts['Angry'] = (moodCounts['Angry'] ?? 0) + 1;
          break;
      }
    }

    return Card(
      margin: const EdgeInsets.all(16),
      elevation: 2,
      shape: RoundedRectangleBorder(
        borderRadius: BorderRadius.circular(16),
      ),
      child: Padding(
        padding: const EdgeInsets.all(16),
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            const Text(
              'Mood Statistics',
              style: TextStyle(
                fontSize: 18,
                fontWeight: FontWeight.bold,
              ),
            ),
            const SizedBox(height: 16),
            _buildStatRow('Happy days', moodCounts['Happy']!, Colors.green),
            _buildStatRow('Good days', moodCounts['Good']!, Colors.lightBlue),
            _buildStatRow(
                'Neutral days', moodCounts['Neutral']!, Colors.yellow),
            _buildStatRow('Sad days', moodCounts['Sad']!, Colors.orange),
            _buildStatRow('Angry days', moodCounts['Angry']!, Colors.red),
            const SizedBox(height: 8),
            const Divider(),
            const SizedBox(height: 8),
            _buildInfoRow('Total entries', entries.length.toString()),
            _buildInfoRow(
              'Most frequent mood',
              moodCounts.entries
                  .reduce((a, b) => a.value > b.value ? a : b)
                  .key,
            ),
          ],
        ),
      ),
    );
  }

  Widget _buildStatRow(String label, int count, Color color) {
    return Padding(
      padding: const EdgeInsets.symmetric(vertical: 6),
      child: Row(
        children: [
          Container(
            width: 12,
            height: 12,
            decoration: BoxDecoration(
              color: color,
              shape: BoxShape.circle,
            ),
          ),
          const SizedBox(width: 8),
          Text(
            label,
            style: TextStyle(
              color: Colors.grey[700],
            ),
          ),
          const Spacer(),
          Text(
            count.toString(),
            style: const TextStyle(
              fontWeight: FontWeight.bold,
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildBottomNav(BuildContext context) {
    return Container(
      height: 60,
      decoration: BoxDecoration(
        color: Colors.white,
        borderRadius: BorderRadius.circular(30),
        boxShadow: [
          BoxShadow(
            color: Colors.grey.withOpacity(0.2),
            spreadRadius: 1,
            blurRadius: 8,
            offset: const Offset(0, 3),
          ),
        ],
      ),
      margin: const EdgeInsets.symmetric(horizontal: 16, vertical: 8),
      child: Row(
        mainAxisAlignment: MainAxisAlignment.spaceEvenly,
        children: [
          IconButton(
            icon: const Icon(Icons.home_outlined, color: Colors.grey),
            onPressed: () {
              Navigator.pop(context);
            },
          ),
          IconButton(
            icon: const Icon(Icons.chat_bubble_outline, color: Colors.grey),
            onPressed: () {
              // Navigate to chat
            },
          ),
          IconButton(
            icon: const Icon(Icons.book_outlined, color: Colors.grey),
            onPressed: () {
              // Navigate to journal
            },
          ),
          IconButton(
            icon: const Icon(Icons.notifications_none, color: Colors.grey),
            onPressed: () {
              // Navigate to notifications
            },
          ),
          IconButton(
            icon: const Icon(Icons.person, color: Colors.blue),
            onPressed: () {
              // Already on profile
            },
          ),
        ],
      ),
    );
  }
}
