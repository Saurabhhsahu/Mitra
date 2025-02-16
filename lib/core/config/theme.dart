import 'package:flutter/material.dart';
import 'package:google_fonts/google_fonts.dart';
import 'colors.dart';

class AppTheme {
  static ThemeData get lightTheme {
    return ThemeData(
      useMaterial3: true,
      textTheme: TextTheme(
        displayLarge: GoogleFonts.nunito(
          fontSize: 32,
          fontWeight: FontWeight.bold,
          color: AppColors.textPrimary,
        ),
        displayMedium: GoogleFonts.nunito(
          fontSize: 28,
          fontWeight: FontWeight.w600,
          color: AppColors.textPrimary,
        ),
        bodyLarge: GoogleFonts.openSans(
          fontSize: 16,
          color: AppColors.textSecondary,
        ),
        bodyMedium: GoogleFonts.openSans(
          fontSize: 14,
          color: AppColors.textSecondary,
        ),
      ),
      // Other theme configurations will be added here
    );
  }
}
