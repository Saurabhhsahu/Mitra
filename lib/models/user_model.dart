// lib/models/user.dart
class User {
  final String name;
  final String username;
  final String email;
  final String phone;
  final String location;
  final String bio;
  final DateTime joinDate;
  final String? profileImage;

  User({
    required this.name,
    required this.username,
    required this.email,
    required this.phone,
    required this.location,
    required this.bio,
    required this.joinDate,
    this.profileImage,
  });

  factory User.fromJson(Map<String, dynamic> json) {
    return User(
      name: json['name'] as String,
      username: json['username'] as String,
      email: json['email'] as String,
      phone: json['phone'] as String,
      location: json['location'] as String,
      bio: json['bio'] as String,
      joinDate: DateTime.parse(json['joinDate'] as String),
      profileImage: json['profileImage'] as String?,
    );
  }
}