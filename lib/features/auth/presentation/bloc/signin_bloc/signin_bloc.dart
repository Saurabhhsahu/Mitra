import 'package:flutter_bloc/flutter_bloc.dart';
import 'package:mitra/core/utils/app_logger.dart';
import '../../../domain/usecases/sign_in_usecase.dart';

// Events
abstract class SignInEvent {}

class SignInSubmitted extends SignInEvent {
  final String email;
  final String password;

  SignInSubmitted({
    required this.email,
    required this.password,
  });
}

// States
abstract class SignInState {}

class SignInInitial extends SignInState {}

class SignInLoading extends SignInState {}

class SignInSuccess extends SignInState {}

class SignInFailure extends SignInState {
  final String error;
  SignInFailure(this.error);
}

class SignInBloc extends Bloc<SignInEvent, SignInState> {
  final SignInUseCase _signInUseCase;

  SignInBloc({required SignInUseCase signInUseCase})
      : _signInUseCase = signInUseCase,
        super(SignInInitial()) {
    on<SignInSubmitted>(_onSignInSubmitted);
  }

  Future<void> _onSignInSubmitted(
    SignInSubmitted event,
    Emitter<SignInState> emit,
  ) async {
    try {
      emit(SignInLoading());
      AppLogger.info('SignIn Bloc: Attempting signin');

      final result = await _signInUseCase(
        email: event.email,
        password: event.password,
      );

      result.fold(
        (failure) {
          AppLogger.error('SignIn Bloc: SignIn Failed - $failure');
          emit(SignInFailure(failure));
        },
        (user) {
          AppLogger.success('SignIn Bloc: SignIn Success');
          emit(SignInSuccess());
        },
      );
    } catch (e) {
      AppLogger.error('SignIn Bloc: SignIn Failed - $e');
      emit(SignInFailure(e.toString()));
    }
  }
}
