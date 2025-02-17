class User {
  final String id;
  final String username;
  final String? profileImageUrl;
  final List<String> interests;
  final bool isOnline;
  final DateTime lastActive;

  User({
    required this.id,
    required this.username,
    this.profileImageUrl,
    required this.interests,
    this.isOnline = false,
    required this.lastActive,
  });

  factory User.fromMap(Map<String, dynamic> map) {
    return User(
      id: map['id'],
      username: map['username'],
      profileImageUrl: map['profileImageUrl'],
      interests: List<String>.from(map['interests']),
      isOnline: map['isOnline'] ?? false,
      lastActive: DateTime.parse(map['lastActive']),
    );
  }

  Map<String, dynamic> toMap() {
    return {
      'id': id,
      'username': username,
      'profileImageUrl': profileImageUrl,
      'interests': interests,
      'isOnline': isOnline,
      'lastActive': lastActive.toIso8601String(),
    };
  }
}