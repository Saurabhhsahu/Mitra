import 'package:dartz/dartz.dart';
import '../../domain/repositories/auth_repository.dart';
import '../sources/auth_service.dart';
import '../sources/local_auth_service.dart';
import '../../domain/entities/user.dart';
import '../models/user_model.dart';

class AuthRepositoryImpl implements AuthRepository {
  final AuthService authService;
  final LocalAuthService localAuthService;

  AuthRepositoryImpl(this.authService, this.localAuthService);

  @override
  Future<Either<String, User>> signUp({
    required String firstName,
    required String lastName,
    required String email,
    required String password,
    required String phoneNumber,
    required List<String> interests,
  }) async {
    try {
      final user = await authService.signUp(
        firstName: firstName,
        lastName: lastName,
        email: email,
        password: password,
        phoneNumber: phoneNumber,
        interests: interests,
      );
      await localAuthService.saveUser(user);
      return Right(user.toEntity());
    } catch (e) {
      return Left('Server Failure');
    }
  }

  @override
  Future<Either<String, User>> signIn({
    required String email,
    required String password,
  }) async {
    try {
      final userModel = await authService.signIn(
        email: email,
        password: password,
      );
      return Right(userModel.toEntity());
    } catch (e) {
      return Left('Server Failure');
    }
  }

  @override
  Future<Either<String, void>> signOut() async {
    try {
      await authService.signOut();
      await localAuthService.clearUser();
      return const Right(null);
    } catch (e) {
      return Left('Server Failure');
    }
  }

  @override
  Future<Either<String, bool>> isSignedIn() async {
    try {
      final isSignedIn = await authService.isSignedIn();
      return Right(isSignedIn);
    } catch (e) {
      return Left('Server Failure');
    }
  }

  @override
  Future<Either<String, User>> getCurrentUser() async {
    try {
      final userModel = await authService.getCurrentUser();
      return Right(userModel.toEntity());
    } catch (e) {
      return Left('Server Failure');
    }
  }
}
