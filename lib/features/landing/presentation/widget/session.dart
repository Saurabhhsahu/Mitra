import 'package:flutter/material.dart';
import 'package:mitra/screens/book_session.dart'; // Import DoctorsScreen

class SessionWidget extends StatelessWidget {
  const SessionWidget({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    final theme = Theme.of(context);

    // Define the base color (0xFFC66408)
    final Color baseColor = const Color(0xFFC66408);

    // Define darker and lighter shades of the base color
    final Color darkerColor = Color.alphaBlend(Colors.black.withOpacity(0.2), baseColor);
    final Color lighterColor = Color.alphaBlend(Colors.white.withOpacity(0.3), baseColor);

    return Container(
      width: double.infinity,
      padding: const EdgeInsets.all(24),
      decoration: BoxDecoration(
        gradient: LinearGradient(
          colors: [
            darkerColor, // Darker shade on the left
            lighterColor, // Lighter shade on the right
          ],
          begin: Alignment.centerLeft, // Gradient starts from the left
          end: Alignment.centerRight, // Gradient ends on the right
        ),
        borderRadius: BorderRadius.circular(28),
        boxShadow: [
          BoxShadow(
            color: Colors.orange.withOpacity(0.2),
            blurRadius: 20,
            offset: const Offset(0, 4),
            spreadRadius: 2,
          ),
        ],
      ),
      child: Row(
        crossAxisAlignment: CrossAxisAlignment.center,
        children: [
          Expanded(
            flex: 3,
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              mainAxisSize: MainAxisSize.min,
              children: [
                Text(
                  '1-on-1 Sessions',
                  style: theme.textTheme.titleLarge?.copyWith(
                    color: Colors.white,
                    fontWeight: FontWeight.bold,
                    height: 1.2,
                  ),
                ),
                const SizedBox(height: 8),
                Text(
                  "Let's open up to the things that matter most to you",
                  style: theme.textTheme.bodyMedium?.copyWith(
                    color: Colors.white.withOpacity(0.9),
                    height: 1.4,
                  ),
                ),
                const SizedBox(height: 20),
                ElevatedButton.icon(
                  onPressed: () => Navigator.push(
                    context,
                    MaterialPageRoute(
                      builder: (context) => DoctorsScreen(),
                    ),
                  ),
                  icon: Icon(
                    Icons.calendar_today_rounded,
                    size: 20,
                    color: baseColor, // Use the base color for the icon
                  ),
                  label: Text(
                    'Book Session',
                    style: theme.textTheme.labelLarge?.copyWith(
                      color: baseColor, // Use the base color for the text
                      fontWeight: FontWeight.w600,
                      letterSpacing: 0.5,
                    ),
                  ),
                  style: ElevatedButton.styleFrom(
                    backgroundColor: Colors.white, // White button background
                    foregroundColor: baseColor, // Base color for text and icon
                    elevation: 0,
                    padding: const EdgeInsets.symmetric(
                      horizontal: 24,
                      vertical: 16,
                    ),
                    shape: RoundedRectangleBorder(
                      borderRadius: BorderRadius.circular(16),
                    ),
                    shadowColor: Colors.orange.withOpacity(0.3),
                    surfaceTintColor: Colors.transparent,
                  ).copyWith(
                    overlayColor: MaterialStateProperty.resolveWith<Color?>(
                      (Set<MaterialState> states) {
                        if (states.contains(MaterialState.hovered)) {
                          return Colors.orange.withOpacity(0.04);
                        }
                        if (states.contains(MaterialState.pressed)) {
                          return Colors.orange.withOpacity(0.12);
                        }
                        return null;
                      },
                    ),
                  ),
                ),
              ],
            ),
          ),
          const SizedBox(width: 24),
        ],
      ),
    );
  }
}