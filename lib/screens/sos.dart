import 'dart:async';
import 'package:flutter/material.dart';
import 'package:sensors_plus/sensors_plus.dart';
import 'package:url_launcher/url_launcher.dart';
import 'package:permission_handler/permission_handler.dart';

class SOSScreen extends StatefulWidget {
  const SOSScreen({Key? key}) : super(key: key);

  @override
  _SOSScreenState createState() => _SOSScreenState();
}

class _SOSScreenState extends State<SOSScreen> {
  // Configuration variables
  final double _fallThreshold =
      1000.0; // Lower value for fall detection (near freefall)
  final int _countdownSeconds = 15; // How long until call is made

  // Hardcoded emergency contact - replace with actual number
  final String _emergencyContact = '+917878156830'; // Replace with your number
  final String _emergencyMessage =
      'I may be in danger. My phone has detected a fall. This is an automated SOS message.';

  // State variables
  bool _isMonitoring = false;
  bool _sosTriggered = false;
  int _remainingSeconds = 0;
  late Timer _timer;
  late StreamSubscription<UserAccelerometerEvent>
      _userAccelerometerSubscription;

  // Fall detection variables
  bool _possibleFall = false;
  DateTime? _fallStartTime;
  final int _fallDurationThresholdMs =
      300; // Minimum duration for fall detection in milliseconds
  final double _postFallImpactThreshold = 1000.0; // Impact after fall detection

  @override
  void initState() {
    super.initState();
    _requestPermissions();
  }

  Future<void> _requestPermissions() async {
    await [
      Permission.sms,
      Permission.phone,
      Permission.sensors,
    ].request();
  }

  void _toggleMonitoring() {
    if (_isMonitoring) {
      _stopMonitoring();
    } else {
      _startMonitoring();
    }
  }

  void _startMonitoring() {
    setState(() {
      _isMonitoring = true;
      _possibleFall = false;
      _fallStartTime = null;
    });

    // Using userAccelerometerEvents to detect free fall (gravity compensated)
    _userAccelerometerSubscription =
        userAccelerometerEvents.listen((UserAccelerometerEvent event) {
      // Calculate magnitude of acceleration (excluding gravity)
      final double acceleration =
          _calculateMagnitude(event.x, event.y, event.z);

      // Fall detection algorithm
      _detectFall(acceleration);
    });
  }

  void _stopMonitoring() {
    setState(() {
      _isMonitoring = false;
    });
    _userAccelerometerSubscription.cancel();
  }

  double _calculateMagnitude(double x, double y, double z) {
    return (x * x + y * y + z * z);
  }

  void _detectFall(double acceleration) {
    if (!_isMonitoring || _sosTriggered) {
      return;
    }

    // Step 1: Detect the beginning of a possible fall (near zero acceleration)
    if (!_possibleFall && acceleration < _fallThreshold) {
      _possibleFall = true;
      _fallStartTime = DateTime.now();
      print('Possible fall detected: ${acceleration.toStringAsFixed(2)}');
    }
    // Step 2: If we're in a possible fall state, check for impact
    else if (_possibleFall && _fallStartTime != null) {
      final fallDuration =
          DateTime.now().difference(_fallStartTime!).inMilliseconds;

      // If fall is long enough and we detect an impact (high acceleration)
      if (fallDuration >= _fallDurationThresholdMs &&
          acceleration > _postFallImpactThreshold) {
        print(
            'Fall confirmed! Duration: ${fallDuration}ms, Impact: ${acceleration.toStringAsFixed(2)}');
        _triggerSOS();
      }
      // Reset fall detection if it's taking too long without impact
      else if (fallDuration > 1000) {
        _possibleFall = false;
        _fallStartTime = null;
      }
    }
  }

  void _triggerSOS() {
    setState(() {
      _sosTriggered = true;
      _remainingSeconds = _countdownSeconds;
      _possibleFall = false;
      _fallStartTime = null;
    });

    // Send SOS message
    _sendSOSMessage();

    // Start countdown timer
    _timer = Timer.periodic(const Duration(seconds: 1), (timer) {
      setState(() {
        if (_remainingSeconds > 0) {
          _remainingSeconds--;
        } else {
          _timer.cancel();
          _makeEmergencyCall();
        }
      });
    });
  }

  void _sendSOSMessage() {
    // Implementation would use a SMS sending plugin
    // For example with flutter_sms or telephony
    print('SOS Message sent to $_emergencyContact: $_emergencyMessage');

    // For actual SMS implementation:
    // Using URL launcher as a simple solution (though this opens the SMS app)
    _launchSMS();

    // For a background SMS solution, you would need a plugin like:
    // - flutter_sms
    // - telephony
    // - flutter_sms_inbox
  }

  Future<void> _launchSMS() async {
    final Uri smsUri = Uri(
      scheme: 'sms',
      path: _emergencyContact,
      queryParameters: {'body': _emergencyMessage},
    );

    if (await canLaunchUrl(smsUri)) {
      await launchUrl(smsUri);
    }
  }

  Future<void> _makeEmergencyCall() async {
    final Uri phoneUri = Uri(scheme: 'tel', path: _emergencyContact);

    if (await canLaunchUrl(phoneUri)) {
      await launchUrl(phoneUri);
    }
  }

  void _cancelSOS() {
    _timer.cancel();
    setState(() {
      _sosTriggered = false;
    });
  }

  @override
  void dispose() {
    if (_isMonitoring) {
      _userAccelerometerSubscription.cancel();
    }
    if (_sosTriggered) {
      _timer.cancel();
    }
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text('Fall Detection SOS'),
      ),
      body: SafeArea(
        child: Column(
          children: [
            // Status indicator
            Container(
              width: double.infinity,
              padding: const EdgeInsets.all(16.0),
              color: _sosTriggered
                  ? Colors.red
                  : _isMonitoring
                      ? Colors.green
                      : Colors.grey,
              child: Column(
                children: [
                  Text(
                    _sosTriggered
                        ? 'SOS ACTIVATED!'
                        : _isMonitoring
                            ? 'Fall Detection Active'
                            : 'Fall Detection Inactive',
                    style: const TextStyle(
                      color: Colors.white,
                      fontWeight: FontWeight.bold,
                      fontSize: 18,
                    ),
                  ),
                  if (_sosTriggered)
                    Text(
                      'Emergency call in $_remainingSeconds seconds',
                      style: const TextStyle(
                        color: Colors.white,
                        fontSize: 16,
                      ),
                    ),
                ],
              ),
            ),

            Expanded(
              child: Padding(
                padding: const EdgeInsets.all(24.0),
                child:
                    _sosTriggered ? _buildSOSActiveUI() : _buildMonitoringUI(),
              ),
            ),
          ],
        ),
      ),
    );
  }

  Widget _buildMonitoringUI() {
    return Column(
      mainAxisAlignment: MainAxisAlignment.center,
      children: [
        // Main activation button
        GestureDetector(
          onTap: _toggleMonitoring,
          child: Container(
            width: 200,
            height: 200,
            decoration: BoxDecoration(
              shape: BoxShape.circle,
              color:
                  _isMonitoring ? Colors.green.shade100 : Colors.grey.shade200,
              border: Border.all(
                color: _isMonitoring ? Colors.green : Colors.grey,
                width: 8,
              ),
            ),
            child: Center(
              child: Icon(
                _isMonitoring ? Icons.shield : Icons.shield_outlined,
                size: 80,
                color: _isMonitoring ? Colors.green : Colors.grey,
              ),
            ),
          ),
        ),
        const SizedBox(height: 32),
        Text(
          _isMonitoring ? 'Protection Active' : 'Tap to Activate',
          style: TextStyle(
            fontSize: 24,
            fontWeight: FontWeight.bold,
            color: _isMonitoring ? Colors.green : Colors.grey,
          ),
        ),
        const SizedBox(height: 16),
        Text(
          _isMonitoring
              ? 'SOS will trigger if a fall is detected'
              : 'When activated, SOS will trigger if phone falls',
          textAlign: TextAlign.center,
          style: const TextStyle(fontSize: 16),
        ),
        const SizedBox(height: 32),
        Text(
          'Emergency Contact: $_emergencyContact',
          style: const TextStyle(fontSize: 16),
        ),
      ],
    );
  }

  Widget _buildSOSActiveUI() {
    return Column(
      mainAxisAlignment: MainAxisAlignment.center,
      children: [
        const Text(
          'FALL DETECTED - SOS ACTIVATED',
          style: TextStyle(
            fontSize: 24,
            fontWeight: FontWeight.bold,
            color: Colors.red,
          ),
          textAlign: TextAlign.center,
        ),
        const SizedBox(height: 24),
        Text(
          'Emergency message sent to $_emergencyContact',
          textAlign: TextAlign.center,
          style: const TextStyle(fontSize: 18),
        ),
        const SizedBox(height: 32),
        Text(
          'Emergency call will be made in:',
          style: TextStyle(fontSize: 18),
        ),
        const SizedBox(height: 8),
        Text(
          '$_remainingSeconds seconds',
          style: const TextStyle(
            fontSize: 48,
            fontWeight: FontWeight.bold,
            color: Colors.red,
          ),
        ),
        const SizedBox(height: 48),
        ElevatedButton(
          onPressed: _cancelSOS,
          style: ElevatedButton.styleFrom(
            backgroundColor: Colors.white,
            foregroundColor: Colors.red,
            padding: const EdgeInsets.symmetric(horizontal: 32, vertical: 16),
            shape: RoundedRectangleBorder(
              borderRadius: BorderRadius.circular(30),
              side: const BorderSide(color: Colors.red, width: 2),
            ),
          ),
          child: const Text(
            'CANCEL SOS',
            style: TextStyle(fontSize: 20, fontWeight: FontWeight.bold),
          ),
        ),
      ],
    );
  }
}
