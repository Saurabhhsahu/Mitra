import 'package:flutter/material.dart';
import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_core/firebase_core.dart';
import 'package:mitra/models/journey_model.dart';

class JourneyListScreen extends StatefulWidget {
  const JourneyListScreen({super.key});

  @override
  _JourneyListScreenState createState() => _JourneyListScreenState();
}

class _JourneyListScreenState extends State<JourneyListScreen> {
  Map<int, bool> expandedJourneys = {};

  // Hardcoded ongoing journey
  final Journey ongoingJourney = Journey(
    name: "Learning Flutter",
    difficulty: "Intermediate",
    tasks: [
      Task(
        name: "Widget Basics",
        description: "Learn about different types of widgets",
        completed: true,
      ),
      Task(
        name: "State Management",
        description: "Understanding state management in Flutter",
        completed: false,
      ),
      Task(
        name: "Navigation",
        description: "Implementing navigation and routing",
        completed: false,
      ),
    ],
  );

  Future<List<Journey>> fetchJourneys() async {
    QuerySnapshot snapshot = await FirebaseFirestore.instance.collection('completed_journeys').get();
    return snapshot.docs.map((doc) {
      return Journey(
        name: doc['name'],
        difficulty: doc['difficulty'],
        tasks: (doc['tasks'] as List).map((task) => Task(
          name: task['name'],
          description: task['description'],
          completed: task['completed'] ?? false,
        )).toList(),
      );
    }).toList();
  }

  void toggleJourneyExpansion(int index) {
    setState(() {
      expandedJourneys[index] = !(expandedJourneys[index] ?? false);
    });
  }

  Widget buildJourneyCard(Journey journey, int index, {bool isOngoing = false}) {
    bool isExpanded = expandedJourneys[index] ?? false;
    return AnimatedContainer(
      duration: const Duration(milliseconds: 300),
      margin: const EdgeInsets.only(bottom: 16),
      decoration: BoxDecoration(
        color: isOngoing ? const Color(0xFFC66408).withOpacity(0.1) : Colors.white,
        borderRadius: BorderRadius.circular(12),
        boxShadow: [
          BoxShadow(
            color: Colors.black.withOpacity(0.1),
            spreadRadius: 2,
            blurRadius: 5,
            offset: const Offset(2, 2),
          ),
        ],
      ),
      child: Column(
        children: [
          ListTile(
            title: Row(
              children: [
                Text(
                  journey.name,
                  style: TextStyle(
                    fontSize: 18,
                    fontWeight: FontWeight.bold,
                    color: isOngoing ? const Color(0xFFC66408) : const Color(0xFFC66408),
                  ),
                ),
                if (isOngoing)
                  Container(
                    margin: const EdgeInsets.only(left: 8),
                    padding: const EdgeInsets.symmetric(horizontal: 8, vertical: 4),
                    decoration: BoxDecoration(
                      color: const Color(0xFFC66408),
                      borderRadius: BorderRadius.circular(12),
                    ),
                    child: const Text(
                      'Ongoing',
                      style: TextStyle(
                        color: Colors.white,
                        fontSize: 12,
                      ),
                    ),
                  ),
              ],
            ),
            subtitle: Text(
              "Difficulty: ${journey.difficulty}",
              style: const TextStyle(fontSize: 14, color: Colors.black54),
            ),
            leading: Icon(
              isOngoing ? Icons.play_circle : Icons.map,
              color: isOngoing ? const Color(0xFFC66408) : const Color(0xFFC66408),
            ),
            trailing: IconButton(
              icon: Icon(
                isExpanded ? Icons.expand_less : Icons.expand_more,
                color: isOngoing ? const Color(0xFFC66408) : const Color(0xFFC66408),
              ),
              onPressed: () => toggleJourneyExpansion(index),
            ),
          ),
          if (isExpanded)
            Padding(
              padding: const EdgeInsets.symmetric(horizontal: 16, vertical: 8),
              child: Column(
                crossAxisAlignment: CrossAxisAlignment.start,
                children: journey.tasks.map((task) {
                  return Padding(
                    padding: const EdgeInsets.symmetric(vertical: 4),
                    child: Row(
                      children: [
                        if (isOngoing)
                          Icon(
                            task.completed ? Icons.check_circle : Icons.radio_button_unchecked,
                            size: 20,
                            color: task.completed ? Colors.green : Colors.grey,
                          ),
                        if (isOngoing) const SizedBox(width: 8),
                        Expanded(
                          child: Text(
                            "• ${task.name}: ${task.description}",
                            style: TextStyle(
                              fontSize: 16,
                              color: Colors.black87,
                              decoration: isOngoing && task.completed ? TextDecoration.lineThrough : null,
                            ),
                          ),
                        ),
                      ],
                    ),
                  );
                }).toList(),
              ),
            ),
        ],
      ),
    );
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text(
          'All Journeys',
          style: TextStyle(color: Colors.white),
        ),
        backgroundColor: const Color(0xFFC66408),
        centerTitle: true,
        elevation: 0,
      ),
      body: Padding(
        padding: const EdgeInsets.all(16),
        child: FutureBuilder<List<Journey>>(
          future: fetchJourneys(),
          builder: (context, snapshot) {
            if (snapshot.connectionState == ConnectionState.waiting) {
              return const Center(child: CircularProgressIndicator());
            }
            if (snapshot.hasError) {
              return Center(child: Text('Error: ${snapshot.error}'));
            }
            List<Journey> completedJourneys = snapshot.data ?? [];
            
            return ListView.builder(
              itemCount: completedJourneys.length + 1, // +1 for ongoing journey
              itemBuilder: (context, index) {
                if (index == 0) {
                  // Show ongoing journey first
                  return buildJourneyCard(ongoingJourney, index, isOngoing: true);
                } else {
                  // Show completed journeys
                  final Journey journey = completedJourneys[index - 1];
                  return buildJourneyCard(journey, index);
                }
              },
            );
          },
        ),
      ),
    );
  }
}