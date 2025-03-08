import 'dart:convert';
import 'package:flutter/material.dart';
import 'package:google_fonts/google_fonts.dart';
import 'package:qr_flutter/qr_flutter.dart';

// Add this to your pubspec.yaml:
// dependencies:
//   qr_flutter: ^4.1.0

class EmergencyQRCodeScreen extends StatelessWidget {
  final Map<String, dynamic> medicalData;

  const EmergencyQRCodeScreen({Key? key, required this.medicalData})
      : super(key: key);

  @override
  Widget build(BuildContext context) {
    // Convert medical data to JSON string
    final String qrData = jsonEncode(medicalData);

    return Scaffold(
      backgroundColor: const Color(0xFFF7EDE6),
      appBar: AppBar(
        backgroundColor: Colors.transparent,
        elevation: 0,
        leading: IconButton(
          icon: Container(
            padding: const EdgeInsets.all(8),
            decoration: BoxDecoration(
              color: Colors.white,
              borderRadius: BorderRadius.circular(12),
            ),
            child: const Icon(
              Icons.arrow_back_ios_new,
              color: Color(0xFF2D2D2D),
              size: 16,
            ),
          ),
          onPressed: () => Navigator.pop(context),
        ),
        title: Text(
          "Emergency QR Code",
          style: GoogleFonts.poppins(
            fontSize: 18,
            fontWeight: FontWeight.w600,
            color: const Color(0xFF2D2D2D),
          ),
        ),
        centerTitle: true,
      ),
      body: SingleChildScrollView(
        physics: const BouncingScrollPhysics(),
        child: Padding(
          padding: const EdgeInsets.all(24.0),
          child: Column(
            children: [
              Container(
                padding: const EdgeInsets.all(24),
                decoration: BoxDecoration(
                  color: Colors.white,
                  borderRadius: BorderRadius.circular(24),
                  boxShadow: [
                    BoxShadow(
                      color: Colors.black.withOpacity(0.05),
                      blurRadius: 10,
                      offset: const Offset(0, 4),
                    ),
                  ],
                ),
                child: Column(
                  children: [
                    Text(
                      "Medical Information QR",
                      style: GoogleFonts.poppins(
                        fontSize: 16,
                        fontWeight: FontWeight.w600,
                        color: const Color(0xFF2D2D2D),
                      ),
                    ),
                    const SizedBox(height: 8),
                    Text(
                      "Scan this QR code to access vital medical information in case of emergency",
                      textAlign: TextAlign.center,
                      style: GoogleFonts.poppins(
                        fontSize: 12,
                        color: const Color(0xFF777777),
                      ),
                    ),
                    const SizedBox(height: 32),
                    Container(
                      padding: const EdgeInsets.all(16),
                      decoration: BoxDecoration(
                        color: Colors.white,
                        borderRadius: BorderRadius.circular(16),
                        border: Border.all(
                          color: const Color(0xFFE9C8B7),
                          width: 2,
                        ),
                      ),
                      child: QrImageView(
                        data: qrData,
                        version: QrVersions.auto,
                        size: 200,
                        backgroundColor: Colors.white,
                        errorStateBuilder: (context, error) {
                          return Center(
                            child: Text(
                              "Error generating QR code",
                              style: GoogleFonts.poppins(
                                color: Colors.red,
                              ),
                            ),
                          );
                        },
                      ),
                    ),
                    const SizedBox(height: 24),
                    Container(
                      padding: const EdgeInsets.all(12),
                      decoration: BoxDecoration(
                        color: const Color(0xFFF8F8F8),
                        borderRadius: BorderRadius.circular(12),
                      ),
                      child: Row(
                        children: [
                          const Icon(
                            Icons.info_outline,
                            color: Color(0xFF9DB0A3),
                            size: 20,
                          ),
                          const SizedBox(width: 8),
                          Expanded(
                            child: Text(
                              "This QR code contains your vital information that can be accessed by medical professionals in case of emergency",
                              style: GoogleFonts.poppins(
                                fontSize: 12,
                                color: const Color(0xFF777777),
                              ),
                            ),
                          ),
                        ],
                      ),
                    ),
                  ],
                ),
              ),
              const SizedBox(height: 24),
              _buildMedicalInfoPreview(medicalData),
            ],
          ),
        ),
      ),
    );
  }

  Widget _buildMedicalInfoPreview(Map<String, dynamic> data) {
    return Container(
      padding: const EdgeInsets.all(24),
      decoration: BoxDecoration(
        color: Colors.white,
        borderRadius: BorderRadius.circular(24),
        boxShadow: [
          BoxShadow(
            color: Colors.black.withOpacity(0.05),
            blurRadius: 10,
            offset: const Offset(0, 4),
          ),
        ],
      ),
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          Text(
            "Information Preview",
            style: GoogleFonts.poppins(
              fontSize: 16,
              fontWeight: FontWeight.w600,
              color: const Color(0xFF2D2D2D),
            ),
          ),
          const SizedBox(height: 16),
          ...data.entries.map((entry) {
            // Special case for allergies which is a list
            if (entry.key == 'allergies' && entry.value is List) {
              return Column(
                crossAxisAlignment: CrossAxisAlignment.start,
                children: [
                  _buildInfoRow(entry.key, ''),
                  ...List<String>.from(entry.value).map(
                    (allergy) => Padding(
                      padding: const EdgeInsets.only(left: 16.0, top: 4.0),
                      child: Row(
                        children: [
                          const Icon(
                            Icons.circle,
                            size: 6,
                            color: Color(0xFF9DB0A3),
                          ),
                          const SizedBox(width: 8),
                          Text(
                            allergy,
                            style: GoogleFonts.poppins(
                              fontSize: 14,
                              color: const Color(0xFF2D2D2D),
                            ),
                          ),
                        ],
                      ),
                    ),
                  ),
                  const SizedBox(height: 8),
                ],
              );
            }

            // Special case for medications which is a list
            if (entry.key == 'medications' && entry.value is List) {
              return Column(
                crossAxisAlignment: CrossAxisAlignment.start,
                children: [
                  _buildInfoRow(entry.key, ''),
                  ...List<Map<String, dynamic>>.from(entry.value).map(
                    (med) => Padding(
                      padding: const EdgeInsets.only(left: 16.0, top: 4.0),
                      child: Row(
                        crossAxisAlignment: CrossAxisAlignment.start,
                        children: [
                          const Icon(
                            Icons.circle,
                            size: 6,
                            color: Color(0xFF9DB0A3),
                          ),
                          const SizedBox(width: 8),
                          Expanded(
                            child: Text(
                              "${med['name']} - ${med['dosage']} ${med['frequency']}",
                              style: GoogleFonts.poppins(
                                fontSize: 14,
                                color: const Color(0xFF2D2D2D),
                              ),
                            ),
                          ),
                        ],
                      ),
                    ),
                  ),
                  const SizedBox(height: 8),
                ],
              );
            }

            // Default case for simple key-value pairs
            return _buildInfoRow(entry.key, entry.value.toString());
          }).toList(),
          const SizedBox(height: 16),
          InkWell(
            onTap: () {
              // This would ideally open a screen to edit the information
            },
            child: Container(
              width: double.infinity,
              padding: const EdgeInsets.symmetric(vertical: 12),
              decoration: BoxDecoration(
                color: const Color(0xFF9DB0A3).withOpacity(0.1),
                borderRadius: BorderRadius.circular(12),
              ),
              child: Center(
                child: Text(
                  "Update Information",
                  style: GoogleFonts.poppins(
                    fontSize: 14,
                    fontWeight: FontWeight.w500,
                    color: const Color(0xFF9DB0A3),
                  ),
                ),
              ),
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildInfoRow(String label, String value) {
    return Padding(
      padding: const EdgeInsets.only(bottom: 12.0),
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          Text(
            _formatLabel(label),
            style: GoogleFonts.poppins(
              fontSize: 12,
              fontWeight: FontWeight.w500,
              color: const Color(0xFF777777),
            ),
          ),
          if (value.isNotEmpty)
            Text(
              value,
              style: GoogleFonts.poppins(
                fontSize: 14,
                fontWeight: FontWeight.w500,
                color: const Color(0xFF2D2D2D),
              ),
            ),
        ],
      ),
    );
  }

  String _formatLabel(String label) {
    // Convert snake_case or camelCase to Title Case
    final words = label
        .replaceAllMapped(
          RegExp(r'([A-Z])'),
          (match) => ' ${match.group(0)}',
        )
        .split('_')
        .join(' ')
        .split(' ');

    return words
        .map((word) => word.isNotEmpty
            ? '${word[0].toUpperCase()}${word.substring(1)}'
            : '')
        .join(' ');
  }
}

// Implement this in your _buildEmergencyAccess method:
void _showEmergencyQRCode(BuildContext context) {
  // Demo medical data (replace with actual user data in a real app)
  final demoMedicalData = {
    'name': 'Sarah Johnson',
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
