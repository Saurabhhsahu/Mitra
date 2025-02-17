import 'package:get_it/get_it.dart';
import 'package:mitra/features/auth/data/repositories/auth_repository_impl.dart';
import 'package:mitra/features/auth/data/sources/auth_service.dart';
import 'package:mitra/features/auth/data/sources/local_auth_service.dart';
import 'package:mitra/features/auth/domain/repositories/auth_repository.dart';
import 'package:mitra/features/auth/domain/usecases/sign_in_usecase.dart';
import 'package:mitra/features/auth/domain/usecases/sign_up_usecase.dart';
import 'package:mitra/features/auth/presentation/bloc/signin_bloc/signin_bloc.dart';
import 'package:mitra/features/auth/presentation/bloc/signup_bloc/signup_bloc.dart';
import 'package:mitra/features/profile/presentation/bloc/profile_bloc.dart';

final sl = GetIt.instance;

Future<void> init() async {
  // Local Storage
  final localAuthService = await LocalAuthService.init();
  sl.registerLazySingleton(() => localAuthService);

  // Services
  sl.registerLazySingleton<AuthService>(
    () => FirebaseAuthService(),
  );

  // Repositories
  sl.registerLazySingleton<AuthRepository>(
    () => AuthRepositoryImpl(sl(), sl()),
  );

  // Usecases
  sl.registerLazySingleton(
    () => SignUpUseCase(sl()),
  );

  // Usecases
  sl.registerLazySingleton(
    () => SignInUseCase(sl()),
  );

  // BLoCs
  sl.registerFactory(
    () => SignupBloc(signUpUseCase: sl()),
  );

  // BLoCs
  sl.registerFactory(
    () => ProfileBloc(localAuthService: sl(), authRepository: sl()),
  );

  // BLoCs
  sl.registerFactory(
    () => SignInBloc(signInUseCase: sl()),
  );
}
