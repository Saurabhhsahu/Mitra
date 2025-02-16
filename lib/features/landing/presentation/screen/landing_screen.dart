import 'dart:async';
import 'package:flutter/material.dart';
import 'package:mitra/core/config/colors.dart';
import 'package:mitra/core/utils/time_utils.dart';
import 'package:mitra/core/utils/app_logger.dart';
import 'package:mitra/features/landing/presentation/widget/gradient_button.dart';
import 'package:mitra/features/landing/presentation/widget/greeting_card.dart';
import 'package:mitra/features/chatbot/presentation/chatbot_screen.dart';
import 'package:mitra/screens/profile_screen.dart';
import '../../../../screens/articles_screen.dart';
import '../../../../screens/journal_screen.dart';
import '../widget/mood_section.dart';
import '../../../../sections/bottom_navbar.dart';
import '../widget/session.dart';

class LandingScreen extends StatefulWidget {
  const LandingScreen({super.key});

  @override
  State<LandingScreen> createState() => _LandingScreenState();
}

class _LandingScreenState extends State<LandingScreen> {
  int _selectedIndex = 0;
  Timer? _timer;
  // ignore: unused_field
  late String _greeting;

  void _onNavBarTapped(int index) {
    setState(() {
      _selectedIndex = index;
    });
  }

  final List<Widget> _screens = [
    const HomeScreen(),
    const GeminiChatbot(),
    const JournalHomePage(),
    const ArticlesScreen(),
    const ProfileScreen(),
  ];

  @override
  void initState() {
    super.initState();
    _greeting = getGreeting();

    // Create periodic timer
    _timer = Timer.periodic(const Duration(minutes: 1), (timer) {
      if (mounted) {
        // Check if widget is mounted before setState
        setState(() {
          _greeting = getGreeting();
        });
      }
    });
  }

  @override
  void dispose() {
    _timer?.cancel(); // Cancel timer when widget is disposed
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: AppColors.background,
      body: SafeArea(
        child: Stack(
          children: [
            _screens[_selectedIndex],
            Positioned(
              left: 24,
              right: 24,
              bottom: 10,
              child: Container(
                decoration: BoxDecoration(
                  borderRadius: BorderRadius.circular(30),
                  // boxShadow: [
                  //   BoxShadow(
                  //     color: AppColors.primary.withOpacity(0.1),
                  //     blurRadius: 10,
                  //     offset: const Offset(0, -2),
                  //   ),
                  // ],
                ),
                child: BottomNavBar(
                  currentIndex: _selectedIndex,
                  onTap: _onNavBarTapped,
                ),
              ),
            ),
          ],
        ),
      ),
    );
  }
}

class HomeScreen extends StatefulWidget {
  const HomeScreen({super.key});

  @override
  State<HomeScreen> createState() => _HomeScreenState();
}

class _HomeScreenState extends State<HomeScreen>
    with SingleTickerProviderStateMixin {
  late String _greeting;

  late AnimationController _animationController;

  late Animation<double> _fadeAnimation;

  late Animation<Offset> _slideAnimation;

  @override
  void initState() {
    super.initState();
    _greeting = getGreeting();
    AppLogger.info('Initial greeting set to: $_greeting');

    _animationController = AnimationController(
      duration: const Duration(milliseconds: 1200),
      vsync: this,
    );

    _fadeAnimation = Tween<double>(begin: 0.0, end: 1.0).animate(
      CurvedAnimation(
        parent: _animationController,
        curve: const Interval(0.0, 0.5, curve: Curves.easeOut),
      ),
    );

    _slideAnimation = Tween<Offset>(
      begin: const Offset(0.0, 0.2),
      end: Offset.zero,
    ).animate(
      CurvedAnimation(
        parent: _animationController,
        curve: const Interval(0.0, 0.5, curve: Curves.easeOut),
      ),
    );

    _animationController.forward();

    Timer.periodic(const Duration(minutes: 1), (timer) {
      setState(() {
        _greeting = getGreeting();
        AppLogger.debug('Greeting updated at ${DateTime.now()}: $_greeting');
      });
    });
  }

  @override
  void dispose() {
    _animationController.dispose();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    final theme = Theme.of(context);
    return Stack(
      children: [
        SlideTransition(
          position: _slideAnimation,
          child: FadeTransition(
            opacity: _fadeAnimation,
            child: Padding(
              padding: const EdgeInsets.symmetric(horizontal: 24.0),
              child: CustomScrollView(
                slivers: [
                  SliverToBoxAdapter(
                    child: Column(
                      crossAxisAlignment: CrossAxisAlignment.start,
                      children: [
                        const SizedBox(height: 32),
                        GreetingCard(
                          greeting: _greeting,
                          userName: 'Saurabh Kumar',
                          lastLoginTime: 'Last login: Today at 9:00 AM',
                        ),
                        const SizedBox(height: 16),
                        const MoodSection(),
                        const SizedBox(height: 32),
                        Row(
                          children: [
                            Expanded(
                              child: GradientButton(
                                icon: Icons.edit_note,
                                label: 'Journal',
                                onPressed: () => Navigator.push(
                                  context,
                                  MaterialPageRoute(
                                    builder: (context) =>
                                        const JournalHomePage(),
                                  ),
                                ),
                              ),
                            ),
                            const SizedBox(width: 16),
                            Expanded(
                              child: GradientButton(
                                icon: Icons.article,
                                label: 'Articles',
                                onPressed: () => Navigator.push(
                                  context,
                                  MaterialPageRoute(
                                    builder: (context) =>
                                        const ArticlesScreen(),
                                  ),
                                ),
                              ),
                            ),
                          ],
                        ),
                        const SizedBox(height: 32),
                        Container(
                          padding: const EdgeInsets.all(24),
                          decoration: BoxDecoration(
                            gradient: LinearGradient(
                              colors: [
                                AppColors.secondary.withOpacity(0.2),
                                AppColors.surface,
                              ],
                              begin: Alignment.topLeft,
                              end: Alignment.bottomRight,
                            ),
                            borderRadius: BorderRadius.circular(20),
                            border: Border.all(
                              color: AppColors.secondary.withOpacity(0.3),
                              width: 1,
                            ),
                            boxShadow: [
                              BoxShadow(
                                color: AppColors.textPrimary.withOpacity(0.05),
                                spreadRadius: 0,
                                blurRadius: 10,
                                offset: const Offset(0, 4),
                              ),
                            ],
                          ),
                          child: Column(
                            crossAxisAlignment: CrossAxisAlignment.start,
                            children: [
                              Row(
                                children: [
                                  Icon(
                                    Icons.lightbulb_outline,
                                    color: AppColors.primary,
                                    size: 24,
                                  ),
                                  const SizedBox(width: 8),
                                  Text(
                                    "Daily Inspiration",
                                    style: theme.textTheme.bodyLarge?.copyWith(
                                      fontWeight: FontWeight.bold,
                                      color: AppColors.textPrimary,
                                    ),
                                  ),
                                ],
                              ),
                              const SizedBox(height: 12),
                              Text(
                                "Welcome to the app! Here's a motivational message to start your day.",
                                style: theme.textTheme.bodyLarge?.copyWith(
                                  color: AppColors.textSecondary,
                                ),
                              ),
                            ],
                          ),
                        ),
                        const SizedBox(height: 32),
                        Container(
                          decoration: BoxDecoration(
                            color: AppColors.primary,
                            borderRadius: BorderRadius.circular(20),
                            boxShadow: [
                              BoxShadow(
                                color: AppColors.primary.withOpacity(0.3),
                                blurRadius: 10,
                                offset: const Offset(0, 4),
                              ),
                            ],
                          ),
                          child: const SessionWidget(),
                        ),
                        const SizedBox(height: 100),
                      ],
                    ),
                  ),
                ],
              ),
            ),
          ),
        ),
      ],
    );
  }
}
