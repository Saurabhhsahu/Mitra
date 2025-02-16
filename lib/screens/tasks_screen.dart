import 'package:flutter/material.dart';
import 'package:mitra/data/journey_data.dart';
import 'package:mitra/data/ongoing_journey_data.dart';
import 'package:mitra/models/journey_model.dart';

class JourneyListScreen extends StatefulWidget {
  const JourneyListScreen({super.key});

  @override
  _JourneyListScreenState createState() => _JourneyListScreenState();
}

class _JourneyListScreenState extends State<JourneyListScreen> {
  Map<int, bool> expandedJourneys = {}; // Track expanded journeys

  void toggleTaskCompletion(int index) {
    setState(() {
      ongoingJourney.tasks[index] =
          ongoingJourney.tasks[index].copyWith(completed: !ongoingJourney.tasks[index].completed);
    });
  }

  void toggleJourneyExpansion(int index) {
    setState(() {
      expandedJourneys[index] = !(expandedJourneys[index] ?? false);
    });
  }

  double calculateProgress() {
    int completedTasks = ongoingJourney.tasks.where((task) => task.completed).length;
    return completedTasks / ongoingJourney.tasks.length;
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
      ),
      body: Padding(
        padding: const EdgeInsets.all(16),
        child: ListView(
          children: [
            // Ongoing Journey Section
            Card(
              elevation: 4,
              margin: const EdgeInsets.only(bottom: 16),
              child: Padding(
                padding: const EdgeInsets.all(12),
                child: Column(
                  crossAxisAlignment: CrossAxisAlignment.start,
                  children: [
                    Text(
                      "Ongoing Journey: ${ongoingJourney.name}",
                      style: const TextStyle(fontSize: 20, fontWeight: FontWeight.bold),
                    ),
                    Text("Difficulty: ${ongoingJourney.difficulty}"),
                    const SizedBox(height: 10),

                    // Progress Bar
                    LinearProgressIndicator(
                      value: calculateProgress(),
                      backgroundColor: Colors.grey[300],
                      valueColor: const AlwaysStoppedAnimation<Color>(Colors.green),
                    ),
                    const SizedBox(height: 10),

                    // Checklist for Ongoing Journey
                    Column(
                      children: List.generate(
                        ongoingJourney.tasks.length,
                            (index) {
                          final task = ongoingJourney.tasks[index];
                          return CheckboxListTile(
                            title: Text(task.name),
                            subtitle: Text(task.description),
                            value: task.completed,
                            onChanged: (value) => toggleTaskCompletion(index),
                          );
                        },
                      ),
                    ),
                  ],
                ),
              ),
            ),

            // All Journeys List
            const Text(
              "All Journeys",
              style: TextStyle(fontSize: 22, fontWeight: FontWeight.bold),
            ),
            const SizedBox(height: 10),
            ListView.builder(
              shrinkWrap: true,
              physics: const NeverScrollableScrollPhysics(),
              itemCount: journeyPool.length,
              itemBuilder: (context, index) {
                final Journey journey = journeyPool[index];
                bool isExpanded = expandedJourneys[index] ?? false;

                return Card(
                  elevation: 3,
                  margin: const EdgeInsets.symmetric(vertical: 8),
                  child: Column(
                    children: [
                      ListTile(
                        title: Text(
                          journey.name,
                          style: const TextStyle(fontSize: 18, fontWeight: FontWeight.bold),
                        ),
                        subtitle: Text("Difficulty: ${journey.difficulty}"),
                        leading: const Icon(Icons.map, color: Colors.blue),
                        trailing: IconButton(
                          icon: Icon(isExpanded ? Icons.expand_less : Icons.expand_more),
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
                                  style: const TextStyle(fontSize: 16),
                                ),
                              );
                            }).toList(),
                          ),
                        ),
                    ],
                  ),
                );
              },
            ),
          ],
        ),
      ),
    );
  }
}
