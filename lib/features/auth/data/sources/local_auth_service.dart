import 'package:hive_flutter/hive_flutter.dart';
import 'package:shared_preferences/shared_preferences.dart';
import '../models/user_model.dart';

class LocalAuthService {
  static const String _userBoxName = 'user_box';
  static const String _isLoggedInKey = 'is_logged_in';

  final Box<UserModel> _userBox;
  final SharedPreferences _prefs;

  LocalAuthService({
    required Box<UserModel> userBox,
    required SharedPreferences prefs,
  })  : _userBox = userBox,
        _prefs = prefs;

  static Future<LocalAuthService> init() async {
    await Hive.initFlutter();
    Hive.registerAdapter(UserModelAdapter());

    final userBox = await Hive.openBox<UserModel>(_userBoxName);
    final prefs = await SharedPreferences.getInstance();

    return LocalAuthService(
      userBox: userBox,
      prefs: prefs,
    );
  }

  Future<void> saveUser(UserModel user) async {
    await _userBox.put('current_user', user);
    await _prefs.setBool(_isLoggedInKey, true);
  }

  Future<void> clearUser() async {
    await _userBox.clear();
    await _prefs.setBool(_isLoggedInKey, false);
  }

  bool get isLoggedIn => _prefs.getBool(_isLoggedInKey) ?? false;

  UserModel? getUser() => _userBox.get('current_user');
}
