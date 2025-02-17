import 'package:fl_chart/fl_chart.dart';
import 'package:flutter/material.dart';
import 'package:intl/intl.dart';
import '../models/mood_entry.dart';

class MoodChart extends StatelessWidget {
  final List<MoodEntry> entries;

  const MoodChart({super.key, required this.entries});

  @override
  Widget build(BuildContext context) {
    final Map<DateTime, MoodEntry> entriesByDay = {};
    for (var entry in entries) {
      final date = DateTime(entry.date.year, entry.date.month, entry.date.day);
      entriesByDay[date] = entry;
    }

    final sortedDates = entriesByDay.keys.toList()..sort((a, b) => a.compareTo(b));
    final daysToShow = sortedDates.length > 7 ? 7 : sortedDates.length;
    final displayDates = sortedDates.length > 7
        ? sortedDates.sublist(sortedDates.length - daysToShow)
        : sortedDates;

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
              style: TextStyle(fontSize: 18, fontWeight: FontWeight.bold),
            ),
            const SizedBox(height: 24),
            SizedBox(
              height: 200,
              child: LineChart(
                LineChartData(
                  gridData: FlGridData(show: false),
                  titlesData: FlTitlesData(
                    bottomTitles: AxisTitles(
                      sideTitles: SideTitles(
                        showTitles: true,
                        getTitlesWidget: (value, meta) {
                          if (value.toInt() >= 0 && value.toInt() < displayDates.length) {
                            final date = displayDates[value.toInt()];
                            return Padding(
                              padding: const EdgeInsets.only(top: 8.0),
                              child: Text(DateFormat('MMM dd').format(date),
                                  style: const TextStyle(fontSize: 10)),
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
                          return moodMap.containsKey(value.toInt())
                              ? Text(moodMap[value.toInt()]!, style: const TextStyle(fontSize: 10))
                              : const Text('');
                        },
                        reservedSize: 50,
                      ),
                    ),
                    topTitles: AxisTitles(sideTitles: SideTitles(showTitles: false)),
                    rightTitles: AxisTitles(sideTitles: SideTitles(showTitles: false)),
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

                        final moodMap = {
                          'angry': 0.0,
                          'sad': 1.0,
                          'neutral': 2.0,
                          'good': 3.0,
                          'happy': 4.0,
                        };

                        return FlSpot(index.toDouble(), moodMap[entry.mood.toLowerCase()] ?? 2.0);
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

                          final moodColors = {
                            'angry': Colors.red,
                            'sad': Colors.orange,
                            'neutral': Colors.yellow,
                            'good': Colors.lightBlue,
                            'happy': Colors.green,
                          };

                          return FlDotCirclePainter(
                            radius: 5,
                            color: moodColors[entry.mood.toLowerCase()] ?? Colors.grey,
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
          decoration: BoxDecoration(color: color, shape: BoxShape.circle),
        ),
        const SizedBox(width: 4),
        Text(label, style: const TextStyle(fontSize: 12)),
      ],
    );
  }
}
