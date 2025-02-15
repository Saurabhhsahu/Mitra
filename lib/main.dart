import 'package:flutter/material.dart';
import 'screens/landing_screen.dart';
// import 'services/database_service.dart';
import 'package:firebase_core/firebase_core.dart';
// import 'package:mitra-aab99/firebase_options.dart';


void main() async{
  // WidgetsFlutterBinding.ensureInitialized();
  // await DatabaseService.connect();  // Initialize MongoDB

  // WidgetsFlutterBinding.ensureInitialized(); // Ensure Flutter is initialized
  // await Firebase.initializeApp(
  //   options: DefaultFirebaseOptions.currentPlatform,
  // );
  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Depression Management App',
      theme: ThemeData(
        primarySwatch: Colors.blue,
        scaffoldBackgroundColor: Colors.white,
      ),
      home: const LandingScreen(),
    );
  }
}