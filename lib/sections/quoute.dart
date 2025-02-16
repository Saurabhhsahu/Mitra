import 'package:flutter/material.dart';

class MessageBox extends StatelessWidget {
  final String message;

  const MessageBox({super.key, required this.message});

  @override
  Widget build(BuildContext context) {
    return Container(
      padding: const EdgeInsets.all(16),
      decoration: BoxDecoration(
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
      child: Text(
        message,
        style: const TextStyle(
          fontSize: 16,
          color: Colors.black87,
        ),
      ),
    );
  }
}
