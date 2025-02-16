import 'package:flutter/material.dart';
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

  void _onNavBarTapped(int index) {
    setState(() {
      _selectedIndex = index;
    });
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.grey[50],
      appBar: null,
      body: SafeArea(
        child: Padding(
          padding: const EdgeInsets.all(24.0),
          child: Column(
            crossAxisAlignment: CrossAxisAlignment.start,
            children: [
              // Top bar
              Container(
                padding: const EdgeInsets.symmetric(horizontal: 16, vertical: 12),
                decoration: BoxDecoration(
                  color: Colors.blue,
                  borderRadius: BorderRadius.circular(12),
                ),
                child: Row(
                  mainAxisAlignment: MainAxisAlignment.spaceBetween,
                  children: [
                    const CircleAvatar(
                      backgroundColor: Colors.grey,
                      child: Icon(Icons.person, color: Colors.white),
                    ),
                    IconButton(
                      icon: const Icon(Icons.logout),
                      onPressed: () {},
                    ),
                  ],
                ),
              ),

              const SizedBox(height: 20),

              // Greeting section
              const Text(
                'Good Night,',
                style: TextStyle(fontSize: 24, fontWeight: FontWeight.w500),
              ),
              const Text(
                'User!',
                style: TextStyle(fontSize: 24, fontWeight: FontWeight.bold),
              ),

              const SizedBox(height: 20),

              // Mood Section
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
                          MaterialPageRoute(builder: (context) => const JournalHomePage()),
                        );
                      },
                      icon: const Icon(Icons.play_arrow, size: 18),
                      label: const Text('Journal'),
                      style: OutlinedButton.styleFrom(
                        padding: const EdgeInsets.symmetric(vertical: 12, horizontal: 16),
                        shape: RoundedRectangleBorder(
                          borderRadius: BorderRadius.circular(30),
                        ),
                        side: const BorderSide(color: Colors.black12),
                        backgroundColor: Colors.white,
                      ),
                    ),
                  ),
                  const SizedBox(width: 16),
                  Expanded(
                    child: OutlinedButton.icon(
                      onPressed: () {
                        Navigator.push(
                          context,
                          MaterialPageRoute(builder: (context) => const ArticlesScreen()),
                        );
                      },
                      icon: const Icon(Icons.article, size: 18),
                      label: const Text('Articles'),
                      style: OutlinedButton.styleFrom(
                        padding: const EdgeInsets.symmetric(vertical: 12, horizontal: 16),
                        shape: RoundedRectangleBorder(
                          borderRadius: BorderRadius.circular(30),
                        ),
                        side: const BorderSide(color: Colors.black12),
                        backgroundColor: Colors.white,
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
                  color: Colors.blueAccent.withOpacity(0.1), // Light background color
                  borderRadius: BorderRadius.circular(12), // Rounded corners
                  border: Border.all(
                    color: Colors.blueAccent.withOpacity(0.3), // Border color
                    width: 1, // Border width
                  ),
                  boxShadow: [
                    BoxShadow(
                      color: Colors.black.withOpacity(0.1),
                      spreadRadius: 2,
                      blurRadius: 5,
                      offset: const Offset(2, 2), // Shadow at the bottom-right
                    ),
                  ],
                ),
                child: const Text(
                  "Welcome to the Mitra! Here's a motivational message to start your day.",
                  style: TextStyle(
                    fontSize: 16,
                    color: Colors.black87,
                  ),
                ),
              ),

              const SizedBox(height: 24),

              // 1 on 1 Sessions Widget
              const SessionWidget(),

              const Spacer(),

              // Bottom Navigation Bar
              BottomNavBar(
                currentIndex: _selectedIndex,
                onTap: _onNavBarTapped,
              ),
            ],
          ),
        ),
      ),
    );
  }
}