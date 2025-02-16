import 'package:flutter/material.dart';
import 'package:mitra/data/user_data.dart';
import 'package:mitra/models/mood_entry.dart';
import 'package:mitra/services/database_service.dart';
import 'package:mitra/core/config/colors.dart';

class MoodSection extends StatefulWidget {
  const MoodSection({super.key});

  @override
  State<MoodSection> createState() => _MoodSectionState();
}

class _MoodSectionState extends State<MoodSection>
    with SingleTickerProviderStateMixin {
  MoodEntry? todayMood;
  late AnimationController _controller;
  late List<Animation<double>> _scaleAnimations;

  final List<MoodOption> _moods = [
    MoodOption(
      label: 'Happy',
      emoji: '😊',
      color: Color(0xFF7FC8A9),
      gradient: [Color(0xFF7FC8A9), Color(0xFF9DDFC2)],
    ),
    MoodOption(
      label: 'Good',
      emoji: '👍',
      color: AppColors.primary,
      gradient: [AppColors.primary, Color(0xFF8CB5D4)],
    ),
    MoodOption(
      label: 'Neutral',
      emoji: '😐',
      color: Color(0xFF95A5A6),
      gradient: [Color(0xFF95A5A6), Color(0xFFB4C0C1)],
    ),
    MoodOption(
      label: 'Sad',
      emoji: '😔',
      color: AppColors.secondary,
      gradient: [AppColors.secondary, Color(0xFFB1D1E3)],
    ),
    MoodOption(
      label: 'Angry',
      emoji: '😠',
      color: AppColors.error,
      gradient: [AppColors.error, Color(0xFFF0A5A5)],
    ),
  ];

  @override
  void initState() {
    super.initState();
    _checkTodayMood();

    _controller = AnimationController(
      duration: const Duration(milliseconds: 400),
      vsync: this,
    );

    _scaleAnimations = List.generate(
      _moods.length,
      (index) => Tween<double>(begin: 0.0, end: 1.0).animate(
        CurvedAnimation(
          parent: _controller,
          curve: Interval(
            index * 0.1,
            0.6 + (index * 0.1),
            curve: Curves.easeOutBack,
          ),
        ),
      ),
    );

    _controller.forward();
  }

  @override
  void dispose() {
    _controller.dispose();
    super.dispose();
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
        orElse: () => MoodEntry(date: DateTime(2000), mood: ''),
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

    await DatabaseService.insertData(
        {"mood": mood, "timestamp": DateTime.now().toIso8601String()});

    UserData.addMoodEntry(newMood);
    setState(() {
      todayMood = newMood;
    });
  }

  @override
  Widget build(BuildContext context) {
    return Column(
      crossAxisAlignment: CrossAxisAlignment.start,
      children: [
        Padding(
          padding: const EdgeInsets.symmetric(horizontal: 4, vertical: 16),
          child: Column(
            crossAxisAlignment: CrossAxisAlignment.start,
            children: [
              Text(
                'How are you feeling today?',
                style: Theme.of(context).textTheme.headlineLarge?.copyWith(
                      fontWeight: FontWeight.bold,
                      color: AppColors.textPrimary,
                    ),
              ),
              if (todayMood!.mood.isNotEmpty)
                Padding(
                  padding: const EdgeInsets.only(top: 8),
                  child: Container(
                    padding:
                        const EdgeInsets.symmetric(horizontal: 12, vertical: 8),
                    decoration: BoxDecoration(
                      color: AppColors.primary.withOpacity(0.1),
                      borderRadius: BorderRadius.circular(12),
                      border: Border.all(
                        color: AppColors.primary.withOpacity(0.2),
                      ),
                    ),
                    child: Text(
                      'You\'re feeling ${todayMood!.mood} today',
                      style: Theme.of(context).textTheme.bodyMedium?.copyWith(
                            color: AppColors.primary,
                            fontWeight: FontWeight.w500,
                          ),
                    ),
                  ),
                ),
            ],
          ),
        ),
        SizedBox(
          height: 120,
          child: ListView.builder(
            scrollDirection: Axis.horizontal,
            itemCount: _moods.length,
            itemBuilder: (context, index) {
              final mood = _moods[index];
              final isDisabled = todayMood!.mood.isNotEmpty;

              return ScaleTransition(
                scale: _scaleAnimations[index],
                child: Padding(
                  padding: EdgeInsets.only(
                    left: index == 0 ? 4 : 8,
                    right: index == _moods.length - 1 ? 4 : 8,
                  ),
                  child: MoodCard(
                    mood: mood,
                    isSelected: todayMood!.mood == mood.label,
                    isDisabled: isDisabled,
                    onTap: isDisabled ? null : () => _saveMood(mood.label),
                  ),
                ),
              );
            },
          ),
        ),
      ],
    );
  }
}

class MoodOption {
  final String emoji;
  final String label;
  final Color color;
  final List<Color> gradient;

  MoodOption({
    required this.emoji,
    required this.label,
    required this.color,
    required this.gradient,
  });
}

class MoodCard extends StatefulWidget {
  final MoodOption mood;
  final bool isSelected;
  final bool isDisabled;
  final VoidCallback? onTap;

  const MoodCard({
    super.key,
    required this.mood,
    required this.isSelected,
    required this.isDisabled,
    required this.onTap,
  });

  @override
  State<MoodCard> createState() => _MoodCardState();
}

class _MoodCardState extends State<MoodCard>
    with SingleTickerProviderStateMixin {
  late AnimationController _bounceController;
  late Animation<double> _bounceAnimation;

  @override
  void initState() {
    super.initState();
    _bounceController = AnimationController(
      duration: const Duration(milliseconds: 200),
      vsync: this,
    );

    _bounceAnimation = Tween<double>(begin: 1.0, end: 0.95).animate(
      CurvedAnimation(
        parent: _bounceController,
        curve: Curves.easeInOut,
      ),
    );
  }

  @override
  void dispose() {
    _bounceController.dispose();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    return GestureDetector(
      onTapDown: widget.isDisabled ? null : (_) => _bounceController.forward(),
      onTapUp: widget.isDisabled ? null : (_) => _bounceController.reverse(),
      onTapCancel: widget.isDisabled ? null : () => _bounceController.reverse(),
      onTap: widget.onTap,
      child: ScaleTransition(
        scale: _bounceAnimation,
        child: Container(
          width: 80,
          margin: const EdgeInsets.symmetric(vertical: 8),
          decoration: BoxDecoration(
            gradient: LinearGradient(
              begin: Alignment.topLeft,
              end: Alignment.bottomRight,
              colors: widget.isSelected
                  ? widget.mood.gradient
                  : [Colors.white, Colors.white],
            ),
            borderRadius: BorderRadius.circular(20),
            border: Border.all(
              color: widget.isDisabled
                  ? Colors.grey.withOpacity(0.3)
                  : widget.isSelected
                      ? Colors.transparent
                      : widget.mood.color.withOpacity(0.3),
              width: 2,
            ),
            boxShadow: [
              BoxShadow(
                color: widget.isDisabled
                    ? Colors.grey.withOpacity(0.1)
                    : widget.mood.color.withOpacity(0.2),
                blurRadius: widget.isSelected ? 12 : 8,
                offset: const Offset(0, 4),
                spreadRadius: widget.isSelected ? 2 : 0,
              ),
            ],
          ),
          child: Opacity(
            opacity: widget.isDisabled ? 0.5 : 1.0,
            child: Column(
              mainAxisAlignment: MainAxisAlignment.center,
              children: [
                Text(
                  widget.mood.emoji,
                  style: const TextStyle(fontSize: 28),
                ),
                const SizedBox(height: 8),
                Text(
                  widget.mood.label,
                  style: Theme.of(context).textTheme.bodyLarge?.copyWith(
                        color: widget.isSelected
                            ? Colors.white
                            : AppColors.textPrimary,
                        fontWeight: widget.isSelected
                            ? FontWeight.bold
                            : FontWeight.normal,
                      ),
                ),
              ],
            ),
          ),
        ),
      ),
    );
  }
}
