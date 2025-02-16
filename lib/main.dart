import 'package:flutter/material.dart';
import 'package:mitra/core/config/theme.dart';
import 'features/landing/presentation/screen/landing_screen.dart';
import 'firebase_options.dart';
import 'package:firebase_core/firebase_core.dart';

void main() async {
  WidgetsFlutterBinding.ensureInitialized();
  await Firebase.initializeApp(
    options: DefaultFirebaseOptions.currentPlatform,
  );

  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Depression Management App',
      theme: AppTheme.lightTheme,
      home: const LandingScreen(),
    );
  }
}
