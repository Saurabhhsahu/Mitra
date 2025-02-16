import 'package:dartz/dartz.dart';
import '../entities/user.dart';
import '../repositories/auth_repository.dart';

class SignInUseCase {
  final AuthRepository repository;

  SignInUseCase(this.repository);

  Future<Either<String, User>> call({
    required String email,
    required String password,
  }) async {
    return await repository.signIn(
      email: email,
      password: password,
    );
  }
}
