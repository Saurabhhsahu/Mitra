class User {
  final String id;
  final String username;
  final String? profileImageAsset; // Use asset path instead of URL
  final List<String> interests;
  final bool isOnline;
  final DateTime lastActive;

  User({
    required this.id,
    required this.username,
    this.profileImageAsset,
    required this.interests,
    this.isOnline = false,
    required this.lastActive,
  });

  factory User.fromMap(Map<String, dynamic> map) {
    return User(
      id: map['id'],
      username: map['username'],
      profileImageAsset: map['profileImageAsset'] as String?, // Use asset path
      interests: List<String>.from(map['interests']),
      isOnline: map['isOnline'] ?? false,
      lastActive: DateTime.parse(map['lastActive']),
    );
  }

  Map<String, dynamic> toMap() {
    return {
      'id': id,
      'username': username,
      'profileImageAsset': profileImageAsset, // Use asset path
      'interests': interests,
      'isOnline': isOnline,
      'lastActive': lastActive.toIso8601String(),
    };
  }
}