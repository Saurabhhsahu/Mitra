import 'package:flutter_bloc/flutter_bloc.dart';
import 'package:mitra/data/user_data.dart';
import 'package:mitra/features/auth/data/models/user_model.dart';
import 'package:mitra/features/auth/domain/repositories/auth_repository.dart';
import 'package:mitra/models/mood_entry.dart';
import '../../../../core/utils/app_logger.dart';
import '../../../auth/data/sources/local_auth_service.dart';
import '../../../auth/domain/entities/user.dart';

// Events
abstract class ProfileEvent {}

class LoadProfile extends ProfileEvent {}

class LogoutRequested extends ProfileEvent {}

// States
abstract class ProfileState {}

class ProfileInitial extends ProfileState {}

class ProfileLoading extends ProfileState {}

class ProfileLoaded extends ProfileState {
  final User user;
  final List<MoodEntry> moodEntries;

  ProfileLoaded({required this.user, required this.moodEntries});
}

class ProfileError extends ProfileState {
  final String message;
  ProfileError(this.message);
}

class LogoutSuccess extends ProfileState {}

class ProfileBloc extends Bloc<ProfileEvent, ProfileState> {
  final AuthRepository _authRepository;
  final LocalAuthService _localAuthService;

  ProfileBloc({
    required AuthRepository authRepository,
    required LocalAuthService localAuthService,
  })  : _authRepository = authRepository,
        _localAuthService = localAuthService,
        super(ProfileInitial()) {
    on<LoadProfile>(_onLoadProfile);
    on<LogoutRequested>(_onLogoutRequested);
  }

  Future<void> _onLoadProfile(
    LoadProfile event,
    Emitter<ProfileState> emit,
  ) async {
    try {
      emit(ProfileLoading());

      final user = _localAuthService.getUser();
      if (user == null) {
        emit(ProfileError('User not found'));
        return;
      }
      final userEntity = user.toEntity();
      final moodEntries = UserData.getMoodEntries();

      emit(ProfileLoaded(
        user: userEntity,
        moodEntries: moodEntries,
      ));
    } catch (e) {
      AppLogger.error('Failed to load profile: $e');
      emit(ProfileError('Failed to load profile'));
    }
  }

  Future<void> _onLogoutRequested(
    LogoutRequested event,
    Emitter<ProfileState> emit,
  ) async {
    try {
      final result = await _authRepository.signOut();
      await _localAuthService.clearUser();

      result.fold(
        (failure) => emit(ProfileError(failure)),
        (_) => emit(LogoutSuccess()),
      );
    } catch (e) {
      emit(ProfileError(e.toString()));
    }
  }
}
