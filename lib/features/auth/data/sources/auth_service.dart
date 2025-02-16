import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:mitra/core/utils/app_logger.dart';
import 'package:mitra/features/auth/data/sources/local_auth_service.dart';
import 'package:mitra/injection_container.dart';

import '../models/user_model.dart';

abstract class AuthService {
  Future<UserModel> signUp({
    required String firstName,
    required String lastName,
    required String email,
    required String password,
    required String phoneNumber,
    required List<String> interests,
  });

  Future<UserModel> signIn({
    required String email,
    required String password,
  });

  Future<void> signOut();

  Future<bool> isSignedIn();

  Future<UserModel> getCurrentUser();
}

class FirebaseAuthService implements AuthService {
  final FirebaseAuth _auth;
  final FirebaseFirestore _firestore;

  FirebaseAuthService({
    FirebaseAuth? auth,
    FirebaseFirestore? firestore,
  })  : _auth = auth ?? FirebaseAuth.instance,
        _firestore = firestore ?? FirebaseFirestore.instance;

  @override
  Future<UserModel> signUp({
    required String firstName,
    required String lastName,
    required String email,
    required String password,
    required String phoneNumber,
    required List<String> interests,
  }) async {
    try {
      final userCredential = await _auth.createUserWithEmailAndPassword(
        email: email,
        password: password,
      );

      if (userCredential.user == null) {
        throw Exception('User creation failed');
      }

      final user = UserModel(
        id: userCredential.user!.uid,
        firstName: firstName,
        lastName: lastName,
        email: email,
        phoneNumber: phoneNumber,
        interests: interests,
        createdAt: DateTime.now(),
      );

      await _firestore.collection('users').doc(user.id).set(user.toJson());
      AppLogger.success('SignUp Service: SignUp Success');
      return user;
    } on FirebaseAuthException catch (e) {
      throw _handleFirebaseAuthError(e);
    } catch (e) {
      throw Exception('Sign up failed: $e');
    }
  }

  @override
  Future<UserModel> signIn({
    required String email,
    required String password,
  }) async {
    try {
      final userCredential = await _auth.signInWithEmailAndPassword(
        email: email,
        password: password,
      );

      if (userCredential.user == null) {
        throw Exception('Sign in failed: No user returned');
      }

      // Fetch user data from Firestore
      final userData = await _firestore
          .collection('users')
          .doc(userCredential.user!.uid)
          .get();

      if (!userData.exists) {
        throw Exception('User data not found');
      }

      AppLogger.success('SignIn Service: SignIn Success');
      return UserModel.fromJson(userData.data()!);
    } on FirebaseAuthException catch (e) {
      throw _handleFirebaseAuthError(e);
    } catch (e) {
      throw Exception('Sign in failed: $e');
    }
  }

  @override
  Future<void> signOut() async {
    try {
      final localAuthService = sl<LocalAuthService>();
      await localAuthService.clearUser();
      AppLogger.info('Local storage cleared');
      await _auth.signOut();
      AppLogger.success('SignOut Service: SignOut Success');
    } catch (e) {
      AppLogger.error('SignOut Service: SignOut Failed - $e');
      throw Exception('Sign out failed: $e');
    }
  }

  @override
  Future<bool> isSignedIn() async {
    return _auth.currentUser != null;
  }

  @override
  Future<UserModel> getCurrentUser() async {
    final user = _auth.currentUser;
    if (user == null) {
      throw Exception('No user signed in');
    }

    final userData = await _firestore.collection('users').doc(user.uid).get();

    if (!userData.exists) {
      throw Exception('User data not found');
    }

    return UserModel.fromJson(userData.data()!);
  }

  Exception _handleFirebaseAuthError(FirebaseAuthException e) {
    switch (e.code) {
      case 'email-already-in-use':
        return Exception('Email is already registered');
      case 'invalid-email':
        return Exception('Invalid email address');
      case 'operation-not-allowed':
        return Exception('Operation not allowed');
      case 'weak-password':
        return Exception('Password is too weak');
      case 'user-disabled':
        return Exception('User has been disabled');
      case 'user-not-found':
        return Exception('User not found');
      case 'wrong-password':
        return Exception('Incorrect password');
      default:
        return Exception('Authentication failed: ${e.message}');
    }
  }
}
