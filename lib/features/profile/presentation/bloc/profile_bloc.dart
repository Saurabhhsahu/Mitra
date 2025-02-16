import 'package:flutter_bloc/flutter_bloc.dart';
import 'package:mitra/data/user_data.dart';
import 'package:mitra/features/auth/data/models/user_model.dart';
import 'package:mitra/models/mood_entry.dart';
import '../../../../core/utils/app_logger.dart';
import '../../../auth/data/sources/local_auth_service.dart';
import '../../../auth/domain/entities/user.dart';

// Events
abstract class ProfileEvent {}

class LoadProfile extends ProfileEvent {}

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

class ProfileBloc extends Bloc<ProfileEvent, ProfileState> {
  final LocalAuthService _localAuthService;

  ProfileBloc({required LocalAuthService localAuthService})
      : _localAuthService = localAuthService,
        super(ProfileInitial()) {
    on<LoadProfile>(_onLoadProfile);
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

      // Convert UserModel to User entity
      final userEntity = user.toEntity();

      // Get mood entries from local storage
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
}
