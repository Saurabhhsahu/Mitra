import 'package:flutter/material.dart';
import 'dart:async';
import 'package:google_fonts/google_fonts.dart';
import 'package:mitra/core/utils/app_logger.dart'; // Added missing import
import 'package:mitra/features/auth/data/sources/local_auth_service.dart';
import 'package:mitra/injection_container.dart';
import 'package:mitra/screens/qrcode.dart';

class JivaMinimalistDashboard extends StatefulWidget {
  // Changed to StatefulWidget
  const JivaMinimalistDashboard({Key? key}) : super(key: key);

  @override
  State<JivaMinimalistDashboard> createState() =>
      _JivaMinimalistDashboardState();
}

class _JivaMinimalistDashboardState extends State<JivaMinimalistDashboard> {
  String _userName = ""; // Added state variable

  @override
  void initState() {
    super.initState();
    _loadUserData();
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

  void _showEmergencyQRCode(BuildContext context) {
    // Demo medical data (replace with actual user data in a real app)
    final demoMedicalData = {
      'name': _userName.isNotEmpty ? _userName : 'Sarah Johnson',
      'bloodType': 'O+',
      'dateOfBirth': '1990-05-15',
      'emergencyContact': '+1 (555) 123-4567',
      'allergies': ['Penicillin', 'Peanuts', 'Shellfish'],
      'medications': [
        {'name': 'Lisinopril', 'dosage': '10mg', 'frequency': 'once daily'},
        {'name': 'Metformin', 'dosage': '500mg', 'frequency': 'twice daily'}
      ],
      'conditions': 'Type 2 Diabetes, Hypertension',
      'weight': '68 kg',
      'height': '165 cm'
    };

    Navigator.push(
      context,
      MaterialPageRoute(
        builder: (context) => EmergencyQRCodeScreen(
          medicalData: demoMedicalData,
        ),
      ),
    );
  }

  @override
  Widget build(BuildContext context) {
    // Soft color palette inspired by the reference design
    const backgroundColor = Color(0xFFF7EDE6); // Soft beige background
    const cardColor = Color(0xFFF9F7FC); // Soft white for cards
    const primaryAccent = Color(0xFF9DB0A3); // Sage green accent
    const secondaryAccent = Color(0xFFE9C8B7); // Soft peach accent
    const tertiaryAccent = Color(0xFFC4C8E7); // Soft lavender accent
    const textColor = Color(0xFF2D2D2D); // Dark text for readability
    const subtitleColor = Color(0xFF777777); // Medium gray for subtitles

    return Scaffold(
      backgroundColor: backgroundColor,
      body: SafeArea(
        child: SingleChildScrollView(
          physics: const BouncingScrollPhysics(),
          child: Padding(
            padding: const EdgeInsets.symmetric(horizontal: 20.0),
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: [
                const SizedBox(height: 30),
                _buildHeader(textColor, subtitleColor),
                const SizedBox(height: 30),
                _buildGreeting(textColor),
                const SizedBox(height: 30),
                _buildHealthReflection(
                    cardColor, textColor, subtitleColor, primaryAccent),
                const SizedBox(height: 30),
                _buildMedicalRecords(cardColor, textColor, subtitleColor,
                    tertiaryAccent, secondaryAccent),
                const SizedBox(height: 30),
                _buildEmergencyAccess(cardColor, textColor, subtitleColor),
                const SizedBox(height: 30),
                _buildMoodTracker(cardColor, textColor, subtitleColor),
                const SizedBox(height: 80), // Extra space for bottom nav
              ],
            ),
          ),
        ),
      ),
    );
  }

  Widget _buildHeader(Color textColor, Color subtitleColor) {
    return Row(
      mainAxisAlignment: MainAxisAlignment.spaceBetween,
      children: [
        Row(
          children: [
            Container(
              width: 40,
              height: 40,
              decoration: BoxDecoration(
                color: Colors.white,
                borderRadius: BorderRadius.circular(12),
              ),
              child: const Icon(
                Icons.favorite,
                color: Color(0xFFE9C8B7),
              ),
            ),
            const SizedBox(width: 12),
            Text(
              'Jiva',
              style: GoogleFonts.poppins(
                fontSize: 24,
                fontWeight: FontWeight.w600,
                color: textColor,
              ),
            )
          ],
        ),
        Container(
          width: 40,
          height: 40,
          decoration: BoxDecoration(
            color: Colors.white,
            borderRadius: BorderRadius.circular(12),
          ),
          child: Icon(
            Icons.search,
            color: textColor.withOpacity(0.7),
          ),
        ),
      ],
    );
  }

  Widget _buildGreeting(Color textColor) {
    final displayName =
        _userName.isNotEmpty ? _userName.split(' ')[0] : 'Sarah';

    return Column(
      crossAxisAlignment: CrossAxisAlignment.start,
      children: [
        Text(
          'Hello, $displayName',
          style: GoogleFonts.poppins(
            fontSize: 28,
            fontWeight: FontWeight.w600,
            color: textColor,
          ),
        ),
        const SizedBox(height: 8),
        Text(
          'How are you feeling today?',
          style: GoogleFonts.poppins(
            fontSize: 16,
            fontWeight: FontWeight.w400,
            color: textColor,
          ),
        ),
      ],
    );
  }

  Widget _buildHealthReflection(Color cardColor, Color textColor,
      Color subtitleColor, Color accentColor) {
    return Container(
      width: double.infinity,
      padding: const EdgeInsets.all(24),
      decoration: BoxDecoration(
        color: cardColor,
        borderRadius: BorderRadius.circular(28),
      ),
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          Text(
            'Health Reflection',
            style: GoogleFonts.poppins(
              fontSize: 14,
              fontWeight: FontWeight.w500,
              color: subtitleColor,
            ),
          ),
          const SizedBox(height: 16),
          Row(
            children: [
              Expanded(
                child: Column(
                  crossAxisAlignment: CrossAxisAlignment.start,
                  children: [
                    Text(
                      'Your vitals look good',
                      style: GoogleFonts.poppins(
                        fontSize: 20,
                        fontWeight: FontWeight.w600,
                        color: textColor,
                      ),
                    ),
                    const SizedBox(height: 8),
                    Text(
                      'All parameters within normal range',
                      style: GoogleFonts.poppins(
                        fontSize: 14,
                        fontWeight: FontWeight.w400,
                        color: subtitleColor,
                      ),
                    ),
                  ],
                ),
              ),
              Container(
                width: 40,
                height: 40,
                decoration: BoxDecoration(
                  color: accentColor.withOpacity(0.2),
                  borderRadius: BorderRadius.circular(12),
                ),
                child: Icon(
                  Icons.arrow_forward_ios_rounded,
                  color: accentColor,
                  size: 16,
                ),
              ),
            ],
          ),
          const SizedBox(height: 24),
          Row(
            children: [
              _buildVitalIndicator('Heart Rate', '72', 'bpm', 0.72),
              const SizedBox(width: 18),
              _buildVitalIndicator('Blood Pressure', '120/80', 'mmHg', 0.85),
              const SizedBox(width: 18),
            ],
          ),
          const SizedBox(height: 24),
          Row(
            children: [
              _buildVitalIndicator('Blood Sugar', '110', 'mg/dL', 0.65),
              const SizedBox(width: 18),
            ],
          ),
        ],
      ),
    );
  }

  Widget _buildVitalIndicator(
      String title, String value, String unit, double percentage) {
    // Convert percentage to color (green for high percentage, amber for medium, red for low)
    Color indicatorColor = percentage > 0.7
        ? const Color(0xFF9DB0A3) // Green for good
        : percentage > 0.4
            ? const Color(0xFFE9C8B7) // Amber for warning
            : const Color(0xFFE78895); // Red for danger

    return Expanded(
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          Text(
            title,
            style: GoogleFonts.poppins(
              fontSize: 12,
              fontWeight: FontWeight.w500,
              color: const Color(0xFF777777),
            ),
            maxLines: 1,
            overflow: TextOverflow.ellipsis,
          ),
          const SizedBox(height: 8),
          Row(
            children: [
              Text(
                value,
                style: GoogleFonts.poppins(
                  fontSize: 16,
                  fontWeight: FontWeight.w600,
                  color: const Color(0xFF2D2D2D),
                ),
              ),
              const SizedBox(width: 4),
              Text(
                unit,
                style: GoogleFonts.poppins(
                  fontSize: 12,
                  fontWeight: FontWeight.w400,
                  color: const Color(0xFF777777),
                ),
              ),
            ],
          ),
          const SizedBox(height: 8),
          Container(
            height: 4,
            decoration: BoxDecoration(
              color: const Color(0xFFEEEEEE),
              borderRadius: BorderRadius.circular(2),
            ),
            child: Row(
              children: [
                Expanded(
                  flex: (percentage * 100).toInt(),
                  child: Container(
                    decoration: BoxDecoration(
                      color: indicatorColor,
                      borderRadius: BorderRadius.circular(2),
                    ),
                  ),
                ),
                Expanded(
                  flex: 100 - (percentage * 100).toInt(),
                  child: Container(),
                ),
              ],
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildMedicalRecords(Color cardColor, Color textColor,
      Color subtitleColor, Color accentColor1, Color accentColor2) {
    return Column(
      crossAxisAlignment: CrossAxisAlignment.start,
      children: [
        Row(
          mainAxisAlignment: MainAxisAlignment.spaceBetween,
          children: [
            Text(
              'Medical Records',
              style: GoogleFonts.poppins(
                fontSize: 18,
                fontWeight: FontWeight.w600,
                color: textColor,
              ),
            ),
            Text(
              'See all',
              style: GoogleFonts.poppins(
                fontSize: 14,
                fontWeight: FontWeight.w500,
                color: subtitleColor,
              ),
            ),
          ],
        ),
        const SizedBox(height: 16),
        Row(
          children: [
            Expanded(
              child: _buildRecordCard(
                'Reports',
                '3 new records',
                Icons.description_outlined,
                accentColor1,
                cardColor,
                textColor,
                subtitleColor,
              ),
            ),
            const SizedBox(width: 16),
            Expanded(
              child: _buildRecordCard(
                'Medications',
                '2 due today',
                Icons.medication_outlined,
                accentColor2,
                cardColor,
                textColor,
                subtitleColor,
              ),
            ),
          ],
        ),
      ],
    );
  }

  Widget _buildRecordCard(
      String title,
      String subtitle,
      IconData icon,
      Color accentColor,
      Color cardColor,
      Color textColor,
      Color subtitleColor) {
    return Container(
      padding: const EdgeInsets.all(20),
      decoration: BoxDecoration(
        color: cardColor,
        borderRadius: BorderRadius.circular(24),
      ),
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          Container(
            width: 40,
            height: 40,
            decoration: BoxDecoration(
              color: accentColor.withOpacity(0.2),
              borderRadius: BorderRadius.circular(12),
            ),
            child: Icon(
              icon,
              color: accentColor,
            ),
          ),
          const SizedBox(height: 16),
          Text(
            title,
            style: GoogleFonts.poppins(
              fontSize: 16,
              fontWeight: FontWeight.w600,
              color: textColor,
            ),
          ),
          const SizedBox(height: 4),
          Text(
            subtitle,
            style: GoogleFonts.poppins(
              fontSize: 12,
              fontWeight: FontWeight.w400,
              color: subtitleColor,
            ),
          ),
          const SizedBox(height: 12),
          Container(
            width: 32,
            height: 32,
            decoration: BoxDecoration(
              color: Colors.white,
              borderRadius: BorderRadius.circular(10),
            ),
            child: Icon(
              Icons.arrow_forward_ios_rounded,
              color: textColor,
              size: 14,
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildEmergencyAccess(
      Color cardColor, Color textColor, Color subtitleColor) {
    return Container(
      width: double.infinity,
      padding: const EdgeInsets.all(24),
      decoration: BoxDecoration(
        color: cardColor,
        borderRadius: BorderRadius.circular(24),
      ),
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          Row(
            children: [
              Container(
                width: 40,
                height: 40,
                decoration: BoxDecoration(
                  color: const Color(0xFFE78895).withOpacity(0.2),
                  borderRadius: BorderRadius.circular(12),
                ),
                child: const Icon(
                  Icons.qr_code_scanner,
                  color: Color(0xFFE78895),
                ),
              ),
              const SizedBox(width: 16),
              Expanded(
                child: Column(
                  crossAxisAlignment: CrossAxisAlignment.start,
                  children: [
                    Text(
                      'Emergency Access',
                      style: GoogleFonts.poppins(
                        fontSize: 16,
                        fontWeight: FontWeight.w600,
                        color: textColor,
                      ),
                    ),
                    Text(
                      'QR code for medical professionals',
                      style: GoogleFonts.poppins(
                        fontSize: 12,
                        fontWeight: FontWeight.w400,
                        color: subtitleColor,
                      ),
                    ),
                  ],
                ),
              ),
              GestureDetector(
                onTap: () => _showEmergencyQRCode(context),
                child: Container(
                  padding:
                      const EdgeInsets.symmetric(horizontal: 16, vertical: 10),
                  decoration: BoxDecoration(
                    color: const Color(0xFFE78895).withOpacity(0.2),
                    borderRadius: BorderRadius.circular(16),
                  ),
                  child: Text(
                    'Show QR',
                    style: GoogleFonts.poppins(
                      fontSize: 12,
                      fontWeight: FontWeight.w500,
                      color: const Color(0xFFE78895),
                    ),
                  ),
                ),
              ),
            ],
          ),
          const SizedBox(height: 16),
          Container(
            width: double.infinity,
            padding: const EdgeInsets.symmetric(vertical: 12),
            decoration: BoxDecoration(
              color: const Color(0xFF9DB0A3).withOpacity(0.1),
              borderRadius: BorderRadius.circular(12),
            ),
            child: Row(
              mainAxisAlignment: MainAxisAlignment.center,
              children: [
                const Icon(
                  Icons.check_circle_outline,
                  color: Color(0xFF9DB0A3),
                  size: 16,
                ),
                const SizedBox(width: 8),
                Text(
                  'Your emergency bracelet is active',
                  style: GoogleFonts.poppins(
                    fontSize: 12,
                    fontWeight: FontWeight.w500,
                    color: const Color(0xFF9DB0A3),
                  ),
                ),
              ],
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildMoodTracker(
      Color cardColor, Color textColor, Color subtitleColor) {
    return Column(
      crossAxisAlignment: CrossAxisAlignment.start,
      children: [
        Row(
          mainAxisAlignment: MainAxisAlignment.spaceBetween,
          children: [
            Text(
              'Daily Mood Log',
              style: GoogleFonts.poppins(
                fontSize: 18,
                fontWeight: FontWeight.w600,
                color: textColor,
              ),
            ),
            Icon(
              Icons.more_horiz,
              color: subtitleColor,
            ),
          ],
        ),
        const SizedBox(height: 16),
        Container(
          width: double.infinity,
          padding: const EdgeInsets.all(24),
          decoration: BoxDecoration(
            color: cardColor,
            borderRadius: BorderRadius.circular(24),
          ),
          child: Column(
            crossAxisAlignment: CrossAxisAlignment.start,
            children: [
              Text(
                'How are you feeling today?',
                style: GoogleFonts.poppins(
                  fontSize: 16,
                  fontWeight: FontWeight.w600,
                  color: textColor,
                ),
              ),
              const SizedBox(height: 20),
              Row(
                mainAxisAlignment: MainAxisAlignment.spaceAround,
                children: [
                  _buildEmotionButton('😊', 'Happy', true),
                  _buildEmotionButton('😌', 'Calm', false),
                  _buildEmotionButton('😔', 'Sad', false),
                  _buildEmotionButton('😟', 'Anxious', false),
                  _buildEmotionButton('😡', 'Angry', false),
                ],
              ),
              const SizedBox(height: 24),
              Container(
                padding: const EdgeInsets.all(16),
                decoration: BoxDecoration(
                  color: Colors.white,
                  borderRadius: BorderRadius.circular(16),
                  border: Border.all(
                    color: const Color(0xFFEEEEEE),
                  ),
                ),
                child: Row(
                  children: [
                    Expanded(
                      child: Text(
                        'Add a reflection...',
                        style: GoogleFonts.poppins(
                          fontSize: 14,
                          fontWeight: FontWeight.w400,
                          color: subtitleColor,
                        ),
                      ),
                    ),
                    const Icon(
                      Icons.arrow_forward,
                      color: Color(0xFF9DB0A3),
                    ),
                  ],
                ),
              ),
              const SizedBox(height: 20),
              Row(
                mainAxisAlignment: MainAxisAlignment.spaceBetween,
                children: [
                  Text(
                    'Your progress',
                    style: GoogleFonts.poppins(
                      fontSize: 14,
                      fontWeight: FontWeight.w500,
                      color: textColor,
                    ),
                  ),
                  Icon(
                    Icons.more_horiz,
                    color: subtitleColor,
                  ),
                ],
              ),
              const SizedBox(height: 16),
              Row(
                children: [
                  Text(
                    '89%',
                    style: GoogleFonts.poppins(
                      fontSize: 32,
                      fontWeight: FontWeight.w600,
                      color: textColor,
                    ),
                  ),
                  const SizedBox(width: 16),
                  Expanded(
                    child: Text(
                      'Of the weekly health plan completed',
                      style: GoogleFonts.poppins(
                        fontSize: 12,
                        fontWeight: FontWeight.w400,
                        color: subtitleColor,
                      ),
                    ),
                  ),
                ],
              ),
            ],
          ),
        ),
      ],
    );
  }

  Widget _buildEmotionButton(String emoji, String label, bool isSelected) {
    return Column(
      children: [
        Container(
          width: 48,
          height: 48,
          decoration: BoxDecoration(
            color: isSelected
                ? const Color(0xFF9DB0A3).withOpacity(0.2)
                : Colors.white,
            borderRadius: BorderRadius.circular(16),
            border: Border.all(
              color: isSelected
                  ? const Color(0xFF9DB0A3)
                  : const Color(0xFFEEEEEE),
            ),
          ),
          child: Center(
            child: Text(
              emoji,
              style: const TextStyle(fontSize: 24),
            ),
          ),
        ),
        const SizedBox(height: 8),
        Text(
          label,
          style: GoogleFonts.poppins(
            fontSize: 12,
            fontWeight: FontWeight.w400,
            color: const Color(0xFF777777),
          ),
        ),
      ],
    );
  }
}
