// lib/screens/profile_screen.dart
import 'package:flutter/material.dart';
import 'package:fl_chart/fl_chart.dart';
import 'package:flutter_bloc/flutter_bloc.dart';
import 'package:intl/intl.dart';
import 'package:mitra/core/config/colors.dart';
import 'package:mitra/features/auth/domain/entities/user.dart';
import 'package:mitra/features/auth/presentation/screens/login.dart';
import 'package:mitra/features/profile/presentation/bloc/profile_bloc.dart';
import 'package:mitra/injection_container.dart';
import 'package:mitra/models/mood_entry.dart';
import 'package:mitra/sections/appointment.dart';

class ProfileScreen extends StatefulWidget {
  const ProfileScreen({super.key});

  @override
  State<ProfileScreen> createState() => _ProfileScreenState();
}

class _ProfileScreenState extends State<ProfileScreen> {
  @override
  Widget build(BuildContext context) {
    return BlocProvider(
      create: (context) => sl<ProfileBloc>()..add(LoadProfile()),
      child: BlocConsumer<ProfileBloc, ProfileState>(
        listener: (context, state) {
          if (state is LogoutSuccess) {
            Navigator.of(context).pushAndRemoveUntil(
              MaterialPageRoute(builder: (context) => const LoginScreen()),
              (route) => false,
            );
          }
        },
        builder: (context, state) {
          if (state is ProfileLoading) {
            return const Scaffold(
              body: Center(child: CircularProgressIndicator()),
            );
          }

          if (state is ProfileError) {
            return Scaffold(
              body: Center(
                child: Text(
                  state.message,
                  style: Theme.of(context).textTheme.bodyLarge?.copyWith(
                        color: AppColors.error,
                      ),
                ),
              ),
            );
          }

          if (state is ProfileLoaded) {
            return Scaffold(
              backgroundColor: AppColors.background,
              appBar: AppBar(
                automaticallyImplyLeading: false,
                title: Text(
                  'Profile',
                  style: Theme.of(context).textTheme.titleLarge?.copyWith(
                        color: AppColors.textPrimary,
                        fontWeight: FontWeight.w600,
                      ),
                ),
                actions: [
                  IconButton(
                    icon: Icon(
                      Icons.logout_rounded,
                      color: AppColors.error,
                    ),
                    onPressed: () {
                      final profileBloc = context.read<ProfileBloc>();
                      showDialog(
                        context: context,
                        builder: (dialogContext) => AlertDialog(
                          title: Text(
                            'Logout',
                            style: Theme.of(context)
                                .textTheme
                                .titleLarge
                                ?.copyWith(
                                  color: AppColors.textPrimary,
                                  fontWeight: FontWeight.w600,
                                ),
                          ),
                          content: Text(
                            'Are you sure you want to logout?',
                            style:
                                Theme.of(context).textTheme.bodyLarge?.copyWith(
                                      color: AppColors.textSecondary,
                                    ),
                          ),
                          actions: [
                            TextButton(
                              onPressed: () => Navigator.pop(dialogContext),
                              child: Text(
                                'Cancel',
                                style: Theme.of(context)
                                    .textTheme
                                    .bodyLarge
                                    ?.copyWith(
                                      color: AppColors.textSecondary,
                                    ),
                              ),
                            ),
                            ElevatedButton(
                              onPressed: () {
                                profileBloc.add(LogoutRequested());
                                Navigator.pop(dialogContext);
                              },
                              style: ElevatedButton.styleFrom(
                                backgroundColor: AppColors.error,
                                foregroundColor: AppColors.surface,
                                elevation: 0,
                                shape: RoundedRectangleBorder(
                                  borderRadius: BorderRadius.circular(8),
                                ),
                              ),
                              child: Text(
                                'Logout',
                                style: Theme.of(context)
                                    .textTheme
                                    .bodyLarge
                                    ?.copyWith(
                                      color: AppColors.surface,
                                      fontWeight: FontWeight.w600,
                                    ),
                              ),
                            ),
                          ],
                        ),
                      );
                    },
                  ),
                  const SizedBox(width: 8),
                ],
                backgroundColor: AppColors.surface,
                elevation: 0,
              ),
              body: SingleChildScrollView(
                child: Column(
                  children: [
                    _buildProfileHeader(state.user, Theme.of(context)),
                    buildMoodChart(state.moodEntries, Theme.of(context)),
                    _buildUpcomingAppointmentsSection(),
                    _buildUserInfoSection(state.user, Theme.of(context)),
                    _buildStatisticsSection(
                        state.moodEntries, Theme.of(context)),
                    const SizedBox(height: 70),
                  ],
                ),
              ),
            );
          }

          return const Scaffold(
            body: Center(child: CircularProgressIndicator()),
          );
        },
      ),
    );
  }

  Widget _buildProfileHeader(User user, ThemeData theme) {
    return Container(
      padding: const EdgeInsets.fromLTRB(24, 32, 24, 40),
      decoration: BoxDecoration(
        color: AppColors.surface,
        borderRadius: const BorderRadius.vertical(
          bottom: Radius.circular(32),
        ),
        boxShadow: [
          BoxShadow(
            color: AppColors.primary.withOpacity(0.08),
            blurRadius: 24,
            offset: const Offset(0, 8),
          ),
        ],
      ),
      child: Column(
        children: [
          Container(
            padding: const EdgeInsets.all(4),
            decoration: BoxDecoration(
              shape: BoxShape.circle,
              border: Border.all(
                color: AppColors.primary.withOpacity(0.2),
                width: 3,
              ),
              boxShadow: [
                BoxShadow(
                  color: AppColors.primary.withOpacity(0.1),
                  blurRadius: 20,
                  spreadRadius: 2,
                ),
              ],
            ),
            child: CircleAvatar(
              radius: 50,
              backgroundColor: AppColors.primary.withOpacity(0.1),
              child: Text(
                user.firstName[0] + user.lastName[0],
                style: theme.textTheme.headlineLarge?.copyWith(
                  color: AppColors.primary,
                  fontWeight: FontWeight.w600,
                ),
              ),
            ),
          ),
          const SizedBox(height: 20),
          Text(
            '${user.firstName} ${user.lastName}',
            style: theme.textTheme.headlineMedium?.copyWith(
              color: AppColors.textPrimary,
              fontWeight: FontWeight.bold,
              letterSpacing: 0.3,
            ),
          ),
          const SizedBox(height: 8),
          Row(
            mainAxisAlignment: MainAxisAlignment.center,
            children: [
              Icon(
                Icons.mail_outline_rounded,
                size: 16,
                color: AppColors.primary.withOpacity(0.7),
              ),
              const SizedBox(width: 8),
              Text(
                user.email,
                style: theme.textTheme.titleMedium?.copyWith(
                  color: AppColors.textSecondary,
                  letterSpacing: 0.2,
                ),
              ),
            ],
          ),
          const SizedBox(height: 24),
          Row(
            mainAxisAlignment: MainAxisAlignment.spaceEvenly,
            children: [
              _buildProfileStat('Interests', '${user.interests.length}', theme),
              Container(
                height: 24,
                width: 1,
                color: AppColors.primary.withOpacity(0.1),
              ),
              _buildProfileStat('Member Since',
                  DateFormat('MMM yyyy').format(user.createdAt), theme),
            ],
          ),
        ],
      ),
    );
  }

  Widget _buildProfileStat(String label, String value, ThemeData theme) {
    return Column(
      children: [
        Text(
          value,
          style: theme.textTheme.titleLarge?.copyWith(
            color: AppColors.primary,
            fontWeight: FontWeight.w600,
          ),
        ),
        const SizedBox(height: 4),
        Text(
          label,
          style: theme.textTheme.bodyMedium?.copyWith(
            color: AppColors.textSecondary,
            fontWeight: FontWeight.w500,
          ),
        ),
      ],
    );
  }

  Widget buildMoodChart(List<MoodEntry> entries, ThemeData theme) {
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

    Color getMoodColor(String mood) {
      switch (mood.toLowerCase()) {
        case 'angry':
          return AppColors.error;
        case 'sad':
          return AppColors.warning;
        case 'neutral':
          return AppColors.primary.withOpacity(0.5);
        case 'good':
          return AppColors.primary;
        case 'happy':
          return AppColors.success;
        default:
          return AppColors.textSecondary;
      }
    }

    return Container(
      margin: const EdgeInsets.all(16),
      decoration: BoxDecoration(
        color: AppColors.surface,
        borderRadius: BorderRadius.circular(24),
        border: Border.all(
          color: AppColors.primary.withOpacity(0.1),
        ),
        boxShadow: [
          BoxShadow(
            color: AppColors.primary.withOpacity(0.05),
            blurRadius: 20,
            offset: const Offset(0, 4),
          ),
        ],
      ),
      child: Padding(
        padding: const EdgeInsets.all(20),
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            Text(
              'Mood History',
              style: theme.textTheme.titleLarge?.copyWith(
                color: AppColors.textPrimary,
                fontWeight: FontWeight.w600,
              ),
            ),
            const SizedBox(height: 24),
            SizedBox(
              height: 200,
              child: displayDates.isEmpty
                  ? Center(
                      child: Text(
                        'No mood data available yet',
                        style: theme.textTheme.bodyLarge?.copyWith(
                          color: AppColors.textSecondary,
                        ),
                      ),
                    )
                  : LineChart(
                      LineChartData(
                        gridData: FlGridData(
                          show: true,
                          drawVerticalLine: false,
                          horizontalInterval: 1,
                          getDrawingHorizontalLine: (value) {
                            return FlLine(
                              color: AppColors.primary.withOpacity(0.1),
                              strokeWidth: 1,
                            );
                          },
                        ),
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
                            color: AppColors.primary,
                            barWidth: 3,
                            isStrokeCapRound: true,
                            dotData: FlDotData(
                              show: true,
                              getDotPainter: (spot, percent, barData, index) {
                                final date = displayDates[index];
                                final entry = entriesByDay[date]!;
                                final dotColor = getMoodColor(entry.mood);

                                return FlDotCirclePainter(
                                  radius: 6,
                                  color: dotColor,
                                  strokeWidth: 2,
                                  strokeColor: AppColors.surface,
                                );
                              },
                            ),
                            belowBarData: BarAreaData(
                              show: true,
                              color: AppColors.primary.withOpacity(0.1),
                            ),
                          ),
                        ],
                      ),
                    ),
            ),
            const SizedBox(height: 20),
            Row(
              mainAxisAlignment: MainAxisAlignment.spaceEvenly,
              children: [
                _buildMoodIndicator('Angry', AppColors.error, theme),
                _buildMoodIndicator('Sad', AppColors.warning, theme),
                _buildMoodIndicator(
                    'Neutral', AppColors.primary.withOpacity(0.5), theme),
                _buildMoodIndicator('Good', AppColors.primary, theme),
                _buildMoodIndicator('Happy', AppColors.success, theme),
              ],
            ),
          ],
        ),
      ),
    );
  }

 Widget _buildUpcomingAppointmentsSection() {
  return Padding(
    padding: const EdgeInsets.symmetric(horizontal: 16.0),
    child: Container(
      decoration: BoxDecoration(
        color: Colors.white,
        borderRadius: BorderRadius.circular(12),
        boxShadow: [
          BoxShadow(
            color: Colors.black.withOpacity(0.1),
            blurRadius: 10,
            offset: Offset(0, 4),
          ),
        ],
      ),
      child: ListTile(
        title: Text(
          'Upcoming Appointments',
          style: TextStyle(
            fontWeight: FontWeight.bold,
            fontSize: 18,
            color: Colors.black,
          ),
        ),
        subtitle: Text(
          'View your upcoming therapist appointments.',
          style: TextStyle(
            color: Colors.grey,
            fontSize: 14,
          ),
        ),
        trailing: IconButton(
          icon: Icon(Icons.arrow_forward),
          onPressed: () {
            // Navigate to the upcoming appointments screen
            Navigator.push(
              context,
              MaterialPageRoute(
                builder: (context) => UpcomingAppointmentsScreen(),
              ),
            );
          },
        ),
      ),
    ),
  );
}



  Widget _buildMoodIndicator(String label, Color color, ThemeData theme) {
    return Row(
      children: [
        Container(
          width: 8,
          height: 8,
          decoration: BoxDecoration(
            color: color,
            shape: BoxShape.circle,
          ),
        ),
        const SizedBox(width: 6),
        Text(
          label,
          style: theme.textTheme.bodySmall?.copyWith(
            color: AppColors.textSecondary,
          ),
        ),
      ],
    );
  }

  Widget _buildUserInfoSection(User user, ThemeData theme) {
    return Container(
      margin: const EdgeInsets.all(16),
      decoration: BoxDecoration(
        color: AppColors.surface,
        borderRadius: BorderRadius.circular(24),
        border: Border.all(
          color: AppColors.primary.withOpacity(0.1),
        ),
        boxShadow: [
          BoxShadow(
            color: AppColors.primary.withOpacity(0.05),
            blurRadius: 20,
            offset: const Offset(0, 4),
          ),
        ],
      ),
      child: Padding(
        padding: const EdgeInsets.all(20),
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            Row(
              children: [
                Icon(
                  Icons.person_outline_rounded,
                  color: AppColors.primary,
                  size: 24,
                ),
                const SizedBox(width: 12),
                Text(
                  'Personal Information',
                  style: theme.textTheme.titleLarge?.copyWith(
                    color: AppColors.textPrimary,
                    fontWeight: FontWeight.w600,
                  ),
                ),
              ],
            ),
            const SizedBox(height: 20),
            _buildInfoRow('Email', user.email, Icons.email_outlined, theme),
            _buildInfoRow(
                'Phone', user.phoneNumber, Icons.phone_outlined, theme),
            _buildInfoRow(
              'Member since',
              DateFormat('MMMM yyyy').format(user.createdAt),
              Icons.calendar_today_outlined,
              theme,
            ),
          ],
        ),
      ),
    );
  }

  Widget _buildInfoRow(
      String label, String value, IconData icon, ThemeData theme) {
    return Padding(
      padding: const EdgeInsets.symmetric(vertical: 12),
      child: Row(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          Icon(
            icon,
            size: 20,
            color: AppColors.primary.withOpacity(0.7),
          ),
          const SizedBox(width: 12),
          Expanded(
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: [
                Text(
                  label,
                  style: theme.textTheme.bodyMedium?.copyWith(
                    color: AppColors.textSecondary,
                  ),
                ),
                const SizedBox(height: 4),
                Text(
                  value,
                  style: theme.textTheme.bodyLarge?.copyWith(
                    color: AppColors.textPrimary,
                    height: 1.3,
                  ),
                ),
              ],
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildStatisticsSection(List<MoodEntry> entries, ThemeData theme) {
    final moodCounts = _calculateMoodStats(entries);

    return Container(
      margin: const EdgeInsets.all(16),
      decoration: BoxDecoration(
        color: AppColors.surface,
        borderRadius: BorderRadius.circular(24),
        border: Border.all(
          color: AppColors.primary.withOpacity(0.1),
        ),
        boxShadow: [
          BoxShadow(
            color: AppColors.primary.withOpacity(0.05),
            blurRadius: 20,
            offset: const Offset(0, 4),
          ),
        ],
      ),
      child: Padding(
        padding: const EdgeInsets.all(20),
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            Row(
              children: [
                Icon(
                  Icons.analytics_outlined,
                  color: AppColors.primary,
                  size: 24,
                ),
                const SizedBox(width: 12),
                Text(
                  'Mood Statistics',
                  style: theme.textTheme.titleLarge?.copyWith(
                    color: AppColors.textPrimary,
                    fontWeight: FontWeight.w600,
                  ),
                ),
              ],
            ),
            const SizedBox(height: 20),
            _buildStatRow(
                'Happy days', moodCounts['Happy']!, AppColors.success, theme),
            _buildStatRow(
                'Good days', moodCounts['Good']!, AppColors.primary, theme),
            _buildStatRow('Neutral days', moodCounts['Neutral']!,
                AppColors.primary.withOpacity(0.5), theme),
            _buildStatRow(
                'Sad days', moodCounts['Sad']!, AppColors.warning, theme),
            _buildStatRow(
                'Angry days', moodCounts['Angry']!, AppColors.error, theme),
            const SizedBox(height: 16),
            Divider(color: AppColors.primary.withOpacity(0.1)),
            const SizedBox(height: 16),
            _buildSummaryRow('Total entries', entries.length.toString(),
                Icons.backup_table_outlined, theme),
            _buildSummaryRow(
              'Most frequent mood',
              moodCounts.entries
                  .reduce((a, b) => a.value > b.value ? a : b)
                  .key,
              Icons.trending_up_rounded,
              theme,
            ),
          ],
        ),
      ),
    );
  }

  Widget _buildStatRow(String label, int count, Color color, ThemeData theme) {
    return Padding(
      padding: const EdgeInsets.symmetric(vertical: 8),
      child: Row(
        children: [
          Container(
            width: 10,
            height: 10,
            decoration: BoxDecoration(
              color: color,
              shape: BoxShape.circle,
            ),
          ),
          const SizedBox(width: 12),
          Text(
            label,
            style: theme.textTheme.bodyLarge?.copyWith(
              color: AppColors.textPrimary,
            ),
          ),
          const Spacer(),
          Container(
            padding: const EdgeInsets.symmetric(horizontal: 12, vertical: 4),
            decoration: BoxDecoration(
              color: color.withOpacity(0.1),
              borderRadius: BorderRadius.circular(12),
            ),
            child: Text(
              count.toString(),
              style: theme.textTheme.bodyMedium?.copyWith(
                color: color,
                fontWeight: FontWeight.w600,
              ),
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildSummaryRow(
      String label, String value, IconData icon, ThemeData theme) {
    return Padding(
      padding: const EdgeInsets.symmetric(vertical: 8),
      child: Row(
        children: [
          Icon(
            icon,
            size: 20,
            color: AppColors.primary.withOpacity(0.7),
          ),
          const SizedBox(width: 12),
          Text(
            label,
            style: theme.textTheme.bodyLarge?.copyWith(
              color: AppColors.textSecondary,
            ),
          ),
          const Spacer(),
          Text(
            value,
            style: theme.textTheme.bodyLarge?.copyWith(
              color: AppColors.textPrimary,
              fontWeight: FontWeight.w600,
            ),
          ),
        ],
      ),
    );
  }

  Map<String, int> _calculateMoodStats(List<MoodEntry> entries) {
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

    return moodCounts;
  }
}
