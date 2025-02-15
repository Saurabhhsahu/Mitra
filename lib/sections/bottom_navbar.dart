import 'package:flutter/material.dart';
import '../screens/chatbot_screen.dart';
import '../screens/tasks_screen.dart';

class BottomNavBar extends StatelessWidget {
  final int currentIndex;
  final Function(int) onTap;

  const BottomNavBar(
      {super.key, required this.currentIndex, required this.onTap});

  @override
  Widget build(BuildContext context) {
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
      child: Row(
        mainAxisAlignment: MainAxisAlignment.spaceEvenly,
        children: [
          _buildNavBarItem(Icons.home, 0, context),
          _buildNavBarItem(Icons.chat_bubble_outline, 1, context),
          _buildNavBarItem(Icons.book, 2, context),
          _buildNavBarItem(Icons.notifications_none, 3, context),
          _buildNavBarItem(Icons.person_outline, 4, context),
        ],
      ),
    );
  }

  Widget _buildNavBarItem(IconData icon, int index, BuildContext context) {
    return IconButton(
      icon: Icon(
        icon,
        color: currentIndex == index ? Colors.blue : Colors.grey,
      ),
      onPressed: () {
        onTap(index);
        if (index == 1) {
          Navigator.push(
            context,
            MaterialPageRoute(builder: (context) => const GeminiChatbot()),
          );
        } else if (index == 2) {
          Navigator.push(
            context,
            MaterialPageRoute(builder: (context) => const TasksScreen()),
          );
        }
      },
    );
  }
}
