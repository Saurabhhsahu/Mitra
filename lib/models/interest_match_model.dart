import 'dummy_user_model.dart';

class InterestMatch {
  final User user;
  final double matchPercentage;
  final List<String> commonInterests;

  InterestMatch({
    required this.user,
    required this.matchPercentage,
    required this.commonInterests,
  });

  factory InterestMatch.fromMap(Map<String, dynamic> map) {
    return InterestMatch(
      user: User.fromMap(map['user']),
      matchPercentage: map['matchPercentage'],
      commonInterests: List<String>.from(map['commonInterests']),
    );
  }

  Map<String, dynamic> toMap() {
    return {
      'user': user.toMap(),
      'matchPercentage': matchPercentage,
      'commonInterests': commonInterests,
    };
  }
}