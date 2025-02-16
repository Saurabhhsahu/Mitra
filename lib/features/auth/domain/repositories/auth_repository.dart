import 'package:dartz/dartz.dart';
import '../entities/user.dart';

abstract class AuthRepository {
  Future<Either<String, User>> signUp({
    required String firstName,
    required String lastName,
    required String email,
    required String password,
    required String phoneNumber,
    required List<String> interests,
  });

  Future<Either<String, User>> signIn({
    required String email,
    required String password,
  });

  Future<Either<String, void>> signOut();

  Future<Either<String, bool>> isSignedIn();

  Future<Either<String, User>> getCurrentUser();
}
