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
  Map<int, bool> expandedJourneys = {}; // Track expanded journeys

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

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text(
          'All Journeys',
          style: TextStyle(color: Colors.white),
        ),
        backgroundColor: Colors.blue,
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
            List<Journey> journeys = snapshot.data ?? [];
            return ListView.builder(
              itemCount: journeys.length,
              itemBuilder: (context, index) {
                final Journey journey = journeys[index];
                bool isExpanded = expandedJourneys[index] ?? false;
                return AnimatedContainer(
                  duration: const Duration(milliseconds: 300),
                  margin: const EdgeInsets.only(bottom: 16),
                  decoration: BoxDecoration(
                    color: Colors.white,
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
                        title: Text(
                          journey.name,
                          style: const TextStyle(
                            fontSize: 18,
                            fontWeight: FontWeight.bold,
                            color: Colors.blue,
                          ),
                        ),
                        subtitle: Text(
                          "Difficulty: ${journey.difficulty}",
                          style: const TextStyle(fontSize: 14, color: Colors.black54),
                        ),
                        leading: const Icon(Icons.map, color: Colors.blue),
                        trailing: IconButton(
                          icon: Icon(
                            isExpanded ? Icons.expand_less : Icons.expand_more,
                            color: Colors.blue,
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
                                child: Text(
                                  "• ${task.name}: ${task.description}",
                                  style: const TextStyle(fontSize: 16, color: Colors.black87),
                                ),
                              );
                            }).toList(),
                          ),
                        ),
                    ],
                  ),
                );
              },
            );
          },
        ),
      ),
    );
  }
}
