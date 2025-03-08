import 'package:flutter/material.dart';
import 'package:heart_bpm/heart_bpm.dart';

class HeartBPMDemo extends StatefulWidget {
  @override
  _HeartBPMDemoState createState() => _HeartBPMDemoState();
}

class _HeartBPMDemoState extends State<HeartBPMDemo> {
  /// List to store raw values
  List<SensorValue> data = [];

  /// Variable to store measured BPM value
  int bpmValue = 0;

  /// Toggle for enabling/disabling BPM measurement
  bool isBPMEnabled = false;

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('Heart BPM Demo'),
      ),
      body: Column(
        mainAxisAlignment: MainAxisAlignment.center,
        children: [
          if (isBPMEnabled)
            HeartBPMDialog(
              context: context,
              sampleDelay: 1000 ~/ 30, // 30 fps
              // cameraResolution: CameraResolution.high,
              onRawData: (SensorValue value) {
                setState(() {
                  // Add raw data points to the list
                  // with a maximum length of 100
                  if (data.length == 100) data.removeAt(0);
                  data.add(value);
                });
              },
              onBPM: (int value) => setState(() {
                bpmValue = value;
              }),
            ),
          SizedBox(height: 20),
          // Display BPM value
          Text(
            'Current BPM: $bpmValue',
            style: TextStyle(fontSize: 20, fontWeight: FontWeight.bold),
          ),
          SizedBox(height: 20),
          Center(
            child: ElevatedButton.icon(
              icon: Icon(Icons.favorite_rounded),
              label: Text(isBPMEnabled ? "Stop measurement" : "Measure BPM"),
              onPressed: () => setState(() => isBPMEnabled = !isBPMEnabled),
            ),
          ),
        ],
      ),
    );
  }
}
