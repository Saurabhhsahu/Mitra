import 'package:dartz/dartz.dart';
import 'package:mitra/core/utils/app_logger.dart';
import '../entities/user.dart';
import '../repositories/auth_repository.dart';

class SignUpUseCase {
  final AuthRepository repository;

  SignUpUseCase(this.repository);

  Future<Either<String, User>> call({
    required String firstName,
    required String lastName,
    required String email,
    required String password,
    required String phoneNumber,
    required List<String> interests,
  }) async {
    AppLogger.info('SignUpUseCase called: Starting SignUp process');
    return await repository.signUp(
      firstName: firstName,
      lastName: lastName,
      email: email,
      password: password,
      phoneNumber: phoneNumber,
      interests: interests,
    );
    AppLogger.info('SignUpUseCase called: Starting SignUp process');
  }
}
