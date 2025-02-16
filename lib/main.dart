import 'package:flutter/material.dart';
import 'package:mitra/core/config/theme.dart';
import 'package:mitra/features/auth/presentation/bloc/signup_bloc/signup_bloc.dart';
import 'package:mitra/features/auth/presentation/screens/signup.dart';
import 'package:mitra/features/landing/presentation/screen/landing_screen.dart';
import 'package:mitra/features/auth/data/sources/local_auth_service.dart';
import 'package:mitra/injection_container.dart' as di;
import 'firebase_options.dart';
import 'package:firebase_core/firebase_core.dart';
import 'package:flutter_bloc/flutter_bloc.dart';

void main() async {
  WidgetsFlutterBinding.ensureInitialized();
  await Firebase.initializeApp(
    options: DefaultFirebaseOptions.currentPlatform,
  );
  await di.init();

  // Check login status
  final localAuthService = di.sl<LocalAuthService>();
  final isLoggedIn = localAuthService.isLoggedIn;

  runApp(MyApp(isLoggedIn: isLoggedIn));
}

class MyApp extends StatelessWidget {
  final bool isLoggedIn;

  const MyApp({
    super.key,
    required this.isLoggedIn,
  });

  @override
  Widget build(BuildContext context) {
    return MultiBlocProvider(
      providers: [
        BlocProvider(
          create: (context) => di.sl<SignupBloc>(),
        ),
      ],
      child: MaterialApp(
        title: 'Depression Management App',
        theme: AppTheme.lightTheme,
        home: isLoggedIn ? const LandingScreen() : const SignupScreen(),
        debugShowCheckedModeBanner: false,
      ),
    );
  }
}
