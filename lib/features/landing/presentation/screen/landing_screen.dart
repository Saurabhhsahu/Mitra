import 'dart:async';
import 'package:flutter/material.dart';
import 'package:mitra/screens/dashboard.dart';
import 'package:mitra/screens/heartrate.dart';
import 'package:mitra/screens/sos.dart';
import 'package:url_launcher/url_launcher.dart'; // For launching phone calls
import 'package:mitra/core/config/colors.dart';
import 'package:mitra/core/utils/time_utils.dart';
import 'package:mitra/core/utils/app_logger.dart';
import 'package:mitra/features/auth/data/sources/local_auth_service.dart';
import 'package:mitra/features/landing/presentation/widget/gradient_button.dart';
import 'package:mitra/features/landing/presentation/widget/greeting_card.dart';
import 'package:mitra/features/chatbot/presentation/chatbot_screen.dart';
import 'package:mitra/features/profile/presentation/screens/profile_screen.dart';
import 'package:mitra/injection_container.dart';
import '../../../../screens/articles_screen.dart';
import '../../../../screens/journal_screen.dart';
import '../../../../screens/tasks_screen.dart';
import '../../../../screens/user_discovery.dart';
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
  late String _greeting;

  void _onNavBarTapped(int index) {
    if (index == 1) {
      // Navigate to chatbot screen when the chat icon is tapped
      Navigator.push(
        context,
        MaterialPageRoute(
          builder: (context) => const JivaAssistant(),
        ),
      );
      // Don't update the selected index so that when the user returns,
      // they'll be on the previously selected tab
      return;
    }

    setState(() {
      _selectedIndex = index;
    });
  }

  final List<Widget> _screens = [
    const JivaMinimalistDashboard(),
    const JivaAssistant(),
    HeartBPMDemo(),
    const SOSScreen(),
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
      backgroundColor: const Color.fromRGBO(255, 255, 255, 1),
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
  late String _userName = '';
  late String _lastLogin = 'Last login: Today at 9:00 AM';

  late AnimationController _animationController;
  late Animation<double> _fadeAnimation;
  late Animation<Offset> _slideAnimation;

  @override
  void initState() {
    super.initState();
    _greeting = getGreeting();
    _loadUserData();

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

  Future<void> _loadUserData() async {
    final localAuthService = sl<LocalAuthService>();
    final user = localAuthService.getUser();

    if (user != null) {
      setState(() {
        _userName = '${user.firstName} ${user.lastName}';
      });
      AppLogger.debug('Loaded user name: $_userName');
    }
  }

  // Method to call emergency number or show alert
  Future<void> _launchEmergencySOS() async {
    const emergencyNumber =
        'tel:112'; // Example number, change it to the appropriate emergency number
    if (await canLaunch(emergencyNumber)) {
      await launch(
          emergencyNumber); // Launch the phone dialer with emergency number
    } else {
      // If the dialer cannot be launched, show an alert
      showDialog(
        context: context,
        builder: (BuildContext context) {
          return AlertDialog(
            title: Text('Emergency SOS'),
            content: Text('Unable to place a call at this time.'),
            actions: <Widget>[
              TextButton(
                onPressed: () => Navigator.of(context).pop(),
                child: Text('OK'),
              ),
            ],
          );
        },
      );
    }
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
                          userName: _userName,
                          lastLoginTime: _lastLogin,
                        ),
                        const SizedBox(height: 16),
                        const MoodSection(),
                        const SizedBox(height: 32),
                        Row(
                          mainAxisAlignment: MainAxisAlignment.spaceBetween,
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
                                label: 'Journeys',
                                onPressed: () => Navigator.push(
                                  context,
                                  MaterialPageRoute(
                                    builder: (context) =>
                                        const JourneyListScreen(),
                                  ),
                                ),
                              ),
                            ),
                            const SizedBox(width: 16),
                            Expanded(
                              flex:
                                  0, // Make sure the FloatingActionButton doesn't stretch
                              child: FloatingActionButton(
                                onPressed: _launchEmergencySOS,
                                backgroundColor: Colors.red,
                                child: Icon(
                                  Icons.emergency,
                                  size: 30,
                                  color: Colors.white,
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
                                    Icons.chat_bubble_outline,
                                    color: AppColors.primary,
                                    size: 24,
                                  ),
                                  const SizedBox(width: 8),
                                  Text(
                                    "Feeling Low? Chat with Mitra",
                                    style: theme.textTheme.bodyLarge?.copyWith(
                                      fontWeight: FontWeight.bold,
                                      color: AppColors.textPrimary,
                                    ),
                                  ),
                                ],
                              ),
                              const SizedBox(height: 12),
                              Text(
                                "If you're feeling down or need someone to talk to, click below to chat with Mitra.",
                                style: theme.textTheme.bodyLarge?.copyWith(
                                  color: AppColors.textSecondary,
                                ),
                              ),
                              const SizedBox(height: 20),
                              Row(
                                mainAxisAlignment:
                                    MainAxisAlignment.spaceBetween,
                                children: [
                                  Expanded(
                                    child: ElevatedButton(
                                      onPressed: () {
                                        // Navigate to the chatbot screen
                                        Navigator.push(
                                          context,
                                          MaterialPageRoute(
                                            builder: (context) =>
                                                JivaAssistant(),
                                          ),
                                        );
                                      },
                                      child: const Text('Chat Now'),
                                      style: ElevatedButton.styleFrom(
                                        backgroundColor: AppColors.primary,
                                        foregroundColor: Colors.white,
                                        shape: RoundedRectangleBorder(
                                          borderRadius:
                                              BorderRadius.circular(8),
                                        ),
                                      ),
                                    ),
                                  ),
                                  const SizedBox(
                                      width: 10), // Space between buttons
                                  Expanded(
                                    child: ElevatedButton(
                                      onPressed: () {
                                        // Navigate to the chatbot screen
                                        Navigator.push(
                                          context,
                                          MaterialPageRoute(
                                            builder: (context) =>
                                                UserDiscoveryScreen(
                                              userId: 'currentUser',
                                            ),
                                          ),
                                        );
                                      },
                                      child: const Text('Chat with friends'),
                                      style: ElevatedButton.styleFrom(
                                        backgroundColor: AppColors.primary,
                                        foregroundColor: Colors.white,
                                        shape: RoundedRectangleBorder(
                                          borderRadius:
                                              BorderRadius.circular(8),
                                        ),
                                      ),
                                    ),
                                  ),
                                ],
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

                        // SOS Emergency Button
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
