import 'dart:convert';
import 'package:flutter/material.dart';
import 'package:google_fonts/google_fonts.dart';
import 'package:local_auth/local_auth.dart';
import 'package:flutter/services.dart';

// Add this to your pubspec.yaml:
// dependencies:
//   local_auth: ^2.1.6

class BiometricAuthUtil {
  static final LocalAuthentication _localAuth = LocalAuthentication();

  // Check if device supports biometric authentication
  static Future<bool> isBiometricAvailable() async {
    bool canCheckBiometrics = false;
    try {
      canCheckBiometrics = await _localAuth.canCheckBiometrics;
    } on PlatformException catch (e) {
      print('Biometric check error: $e');
    }
    return canCheckBiometrics;
  }

  // Get available biometric types
  static Future<List<BiometricType>> getAvailableBiometrics() async {
    List<BiometricType> availableBiometrics = [];
    try {
      availableBiometrics = await _localAuth.getAvailableBiometrics();
    } on PlatformException catch (e) {
      print('Error getting available biometrics: $e');
    }
    return availableBiometrics;
  }

  // Authenticate with biometrics
  static Future<bool> authenticateWithBiometrics(String reason) async {
    bool authenticated = false;
    try {
      authenticated = await _localAuth.authenticate(
        localizedReason: reason,
        options: const AuthenticationOptions(
          stickyAuth: true,
          biometricOnly: true,
        ),
      );
    } on PlatformException catch (e) {
      print('Authentication error: $e');
    }
    return authenticated;
  }
}
