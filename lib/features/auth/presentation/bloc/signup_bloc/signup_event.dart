abstract class SignupEvent {}

class SignupSubmitted extends SignupEvent {
  final String firstName;
  final String lastName;
  final String email;
  final String password;
  final String phoneNumber;
  final List<String> interests;

  SignupSubmitted({
    required this.firstName,
    required this.lastName,
    required this.email,
    required this.password,
    required this.phoneNumber,
    required this.interests,
  });
}
