import 'dart:async';

import 'package:flutter/material.dart';
import 'package:mitra/core/config/colors.dart';
import 'package:mitra/core/utils/time_utils.dart';
import 'package:mitra/core/utils/app_logger.dart';
import 'articles_screen.dart';
import 'journal_screen.dart';
import '../sections/mood_section.dart';
import '../sections/bottom_navbar.dart';
import '../sections/session.dart'; // Import the session widget

class LandingScreen extends StatefulWidget {
  const LandingScreen({super.key});

  @override
  State<LandingScreen> createState() => _LandingScreenState();
}

class _LandingScreenState extends State<LandingScreen> {
  int _selectedIndex = 0;
  late String _greeting;

  @override
  void initState() {
    super.initState();
    _greeting = getGreeting();
    AppLogger.info('Initial greeting set to: $_greeting');

    // Update greeting every minute
    Timer.periodic(const Duration(minutes: 1), (timer) {
      setState(() {
        _greeting = getGreeting();
        AppLogger.debug('Greeting updated at ${DateTime.now()}: $_greeting');
      });
    });
  }

  void _onNavBarTapped(int index) {
    setState(() {
      _selectedIndex = index;
    });
  }

  @override
  Widget build(BuildContext context) {
    final theme = Theme.of(context);

    return Scaffold(
      backgroundColor: AppColors.background,
      body: SafeArea(
        child: Stack(
          children: [
            Padding(
              padding: const EdgeInsets.all(24.0),
              child: SingleChildScrollView(
                child: Column(
                  crossAxisAlignment: CrossAxisAlignment.start,
                  children: [
                    // Useless Container
                    // Profile Container
                    // Container(
                    //   padding: const EdgeInsets.symmetric(
                    //       horizontal: 16, vertical: 12),
                    //   decoration: BoxDecoration(
                    //     color: AppColors.primary,
                    //     borderRadius: BorderRadius.circular(12),
                    //   ),
                    //   child: Row(
                    //     mainAxisAlignment: MainAxisAlignment.spaceBetween,
                    //     children: [
                    //       const CircleAvatar(
                    //         backgroundColor: AppColors.secondary,
                    //         child: Icon(Icons.person, color: AppColors.surface),
                    //       ),
                    //       IconButton(
                    //         icon: Icon(Icons.logout, color: AppColors.surface),
                    //         onPressed: () {},
                    //       ),
                    //     ],
                    //   ),
                    // ),

                    const SizedBox(height: 20),

                    // Greeting section
                    Text(
                      _greeting,
                      style: theme.textTheme.displayMedium,
                    ),
                    Text(
                      'User!',
                      style: theme.textTheme.displayMedium,
                    ),

                    const SizedBox(height: 20),

                    const MoodSection(),

                    const SizedBox(height: 24),

                    // Journal and Articles buttons
                    Row(
                      children: [
                        Expanded(
                          child: OutlinedButton.icon(
                            onPressed: () {
                              Navigator.push(
                                context,
                                MaterialPageRoute(
                                    builder: (context) =>
                                        const JournalHomePage()),
                              );
                            },
                            icon: Icon(Icons.play_arrow,
                                size: 18, color: AppColors.primary),
                            label: Text('Journal',
                                style: theme.textTheme.bodyLarge),
                            style: OutlinedButton.styleFrom(
                              padding: const EdgeInsets.symmetric(
                                  vertical: 12, horizontal: 16),
                              shape: RoundedRectangleBorder(
                                borderRadius: BorderRadius.circular(30),
                              ),
                              side: BorderSide(
                                  color: AppColors.primary.withOpacity(0.3)),
                              backgroundColor: AppColors.surface,
                            ),
                          ),
                        ),
                        const SizedBox(width: 16),
                        Expanded(
                          child: OutlinedButton.icon(
                            onPressed: () {
                              Navigator.push(
                                context,
                                MaterialPageRoute(
                                    builder: (context) =>
                                        const ArticlesScreen()),
                              );
                            },
                            icon: Icon(Icons.article,
                                size: 18, color: AppColors.primary),
                            label: Text('Articles',
                                style: theme.textTheme.bodyLarge),
                            style: OutlinedButton.styleFrom(
                              padding: const EdgeInsets.symmetric(
                                  vertical: 12, horizontal: 16),
                              shape: RoundedRectangleBorder(
                                borderRadius: BorderRadius.circular(30),
                              ),
                              side: BorderSide(
                                  color: AppColors.primary.withOpacity(0.3)),
                              backgroundColor: AppColors.surface,
                            ),
                          ),
                        ),
                      ],
                    ),

                    const SizedBox(height: 24),

                    // Message Box
                    Container(
                      padding: const EdgeInsets.all(16),
                      decoration: BoxDecoration(
                        color: AppColors.secondary.withOpacity(0.1),
                        borderRadius: BorderRadius.circular(12),
                        border: Border.all(
                          color: AppColors.secondary.withOpacity(0.3),
                          width: 1,
                        ),
                        boxShadow: [
                          BoxShadow(
                            color: AppColors.textPrimary.withOpacity(0.1),
                            spreadRadius: 2,
                            blurRadius: 5,
                            offset: const Offset(2, 2),
                          ),
                        ],
                      ),
                      child: Text(
                        "Welcome to the app! Here's a motivational message to start your day.",
                        style: theme.textTheme.bodyLarge,
                      ),
                    ),

                    const SizedBox(height: 24),

                    const SessionWidget(),

                    const SizedBox(height: 80),
                  ],
                ),
              ),
            ),

            // BottomNavBar
            Positioned(
              left: 24,
              right: 24,
              bottom: 10,
              child: BottomNavBar(
                currentIndex: _selectedIndex,
                onTap: _onNavBarTapped,
              ),
            ),
          ],
        ),
      ),
    );
  }
}
