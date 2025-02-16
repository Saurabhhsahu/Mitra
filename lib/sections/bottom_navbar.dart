import 'package:flutter/material.dart';
import 'package:mitra/core/config/colors.dart';

class BottomNavBar extends StatelessWidget {
  final int currentIndex;
  final Function(int) onTap;

  const BottomNavBar({
    super.key,
    required this.currentIndex,
    required this.onTap,
  });

  @override
  Widget build(BuildContext context) {
    final theme = Theme.of(context);

    return Container(
      margin: const EdgeInsets.symmetric(
        horizontal: 10,
        vertical: 8,
      ),
      padding: const EdgeInsets.symmetric(
        horizontal: 16,
        vertical: 8,
      ),
      decoration: BoxDecoration(
        color: AppColors.surface,
        borderRadius: BorderRadius.circular(28),
        border: Border.all(
          color: AppColors.primary.withOpacity(0.08),
          width: 1.5,
        ),
      ),
      child: Theme(
        data: Theme.of(context).copyWith(
          navigationBarTheme: NavigationBarThemeData(
            indicatorColor: const Color(0xFF2E7DD1).withOpacity(0.12),
            surfaceTintColor: Colors.transparent,
            backgroundColor: Colors.transparent,
            height: 50, // Reduced height since we removed labels
            labelBehavior:
                NavigationDestinationLabelBehavior.alwaysHide, // Hide labels
          ),
        ),
        child: NavigationBar(
          selectedIndex: currentIndex,
          onDestinationSelected: onTap,
          backgroundColor: Colors.transparent,
          elevation: 0,
          height: 50, // Reduced height
          labelBehavior:
              NavigationDestinationLabelBehavior.alwaysHide, // Hide labels
          animationDuration: const Duration(milliseconds: 400),
          destinations: [
            _buildNavDestination(
              icon: Icons.home_outlined,
              selectedIcon: Icons.home_rounded,
              label: '', // Empty label
              isSelected: currentIndex == 0,
              theme: theme,
            ),
            _buildNavDestination(
              icon: Icons.chat_bubble_outline_rounded,
              selectedIcon: Icons.chat_bubble_rounded,
              label: '', // Empty label
              isSelected: currentIndex == 1,
              theme: theme,
            ),
            _buildNavDestination(
              icon: Icons.edit_note_outlined,
              selectedIcon: Icons.edit_note,
              label: '', // Empty label
              isSelected: currentIndex == 2,
              theme: theme,
            ),
            _buildNavDestination(
              icon: Icons.article_outlined,
              selectedIcon: Icons.article,
              label: '', // Empty label
              isSelected: currentIndex == 3,
              theme: theme,
            ),
            _buildNavDestination(
              icon: Icons.person_outline,
              selectedIcon: Icons.person,
              label: '', // Empty label
              isSelected: currentIndex == 4,
              theme: theme,
            ),
          ],
        ),
      ),
    );
  }

  NavigationDestination _buildNavDestination({
    required IconData icon,
    required IconData selectedIcon,
    required String label,
    required bool isSelected,
    required ThemeData theme,
  }) {
    return NavigationDestination(
      icon: Padding(
        padding: const EdgeInsets.symmetric(
          horizontal: 12,
          vertical: 4,
        ),
        child: Icon(
          icon,
          color: isSelected
              ? const Color(0xFF2E7DD1)
              : const Color(0xFF94A3B8).withOpacity(0.8),
          size: 26,
        ),
      ),
      selectedIcon: Padding(
        padding: const EdgeInsets.symmetric(
          horizontal: 12,
          vertical: 4,
        ),
        child: Icon(
          selectedIcon,
          color: const Color(0xFF2E7DD1),
          size: 26,
        ),
      ),
      label: label,
      tooltip: label,
    );
  }
}
