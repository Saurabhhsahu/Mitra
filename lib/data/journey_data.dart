import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:mitra/models/journey_model.dart';

List<Journey> journeyPool = [];

Future<void> fetchCompletedJourneys() async {
  try {
    QuerySnapshot querySnapshot = await FirebaseFirestore.instance.collection('completed_journeys').get();

    journeyPool = querySnapshot.docs.map((doc) {
      return Journey(
        name: doc['name'],
        difficulty: doc['difficulty'],
        tasks: (doc['tasks'] as List<dynamic>).map((task) => Task(
          name: task['name'],
          description: task['description'],
          completed: task['completed'] ?? false,  // Ensure completed field is handled
        )).toList(),
      );
    }).toList();
  } catch (e) {
    print("Error fetching completed journeys: $e");
  }
}
