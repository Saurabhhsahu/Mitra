import 'package:flutter_bloc/flutter_bloc.dart';
import 'package:mitra/features/auth/domain/usecases/sign_up_usecase.dart';
import 'signup_event.dart';
import 'signup_state.dart';

class SignupBloc extends Bloc<SignupEvent, SignupState> {
  final SignUpUseCase _signUpUseCase;

  SignupBloc({
    required SignUpUseCase signUpUseCase,
  })  : _signUpUseCase = signUpUseCase,
        super(SignupInitial()) {
    on<SignupSubmitted>(_onSignupSubmitted);
  }

  Future<void> _onSignupSubmitted(
    SignupSubmitted event,
    Emitter<SignupState> emit,
  ) async {
    emit(SignupLoading());

    try {
      final result = await _signUpUseCase(
        firstName: event.firstName,
        lastName: event.lastName,
        email: event.email,
        password: event.password,
        phoneNumber: event.phoneNumber,
        interests: event.interests,
      );

      result.fold(
        (failure) => emit(SignupFailure(failure.toString())),
        (_) => emit(SignupSuccess()),
      );
    } catch (e) {
      emit(SignupFailure(e.toString()));
    }
  }
}
