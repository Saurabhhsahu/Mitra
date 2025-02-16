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
        elevation: 0,
      ),
      body: Padding(
        padding: const EdgeInsets.all(16),
        child: ListView(
          children: [
            // Ongoing Journey Section
            AnimatedContainer(
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
              child: Padding(
                padding: const EdgeInsets.all(16),
                child: Column(
                  crossAxisAlignment: CrossAxisAlignment.start,
                  children: [
                    Text(
                      "Ongoing Journey: ${ongoingJourney.name}",
                      style: const TextStyle(
                        fontSize: 20,
                        fontWeight: FontWeight.bold,
                        color: Colors.blue,
                      ),
                    ),
                    const SizedBox(height: 8),
                    Text(
                      "Difficulty: ${ongoingJourney.difficulty}",
                      style: const TextStyle(fontSize: 16, color: Colors.black54),
                    ),
                    const SizedBox(height: 16),

                    // Progress Bar
                    ClipRRect(
                      borderRadius: BorderRadius.circular(10),
                      child: LinearProgressIndicator(
                        value: calculateProgress(),
                        backgroundColor: Colors.grey[200],
                        valueColor: const AlwaysStoppedAnimation<Color>(Colors.blue),
                      ),
                    ),
                    const SizedBox(height: 16),

                    // Checklist for Ongoing Journey
                    Column(
                      children: List.generate(
                        ongoingJourney.tasks.length,
                            (index) {
                          final task = ongoingJourney.tasks[index];
                          return AnimatedContainer(
                            duration: const Duration(milliseconds: 200),
                            margin: const EdgeInsets.only(bottom: 8),
                            decoration: BoxDecoration(
                              color: Colors.white,
                              borderRadius: BorderRadius.circular(8),
                              boxShadow: [
                                BoxShadow(
                                  color: Colors.black.withOpacity(0.05),
                                  spreadRadius: 1,
                                  blurRadius: 3,
                                  offset: const Offset(1, 1),
                                ),
                              ],
                            ),
                            child: CheckboxListTile(
                              title: Text(
                                task.name,
                                style: TextStyle(
                                  fontSize: 16,
                                  fontWeight: FontWeight.w500,
                                  decoration: task.completed ? TextDecoration.lineThrough : null,
                                  color: task.completed ? Colors.grey : Colors.black87,
                                ),
                              ),
                              subtitle: Text(
                                task.description,
                                style: TextStyle(
                                  fontSize: 14,
                                  color: task.completed ? Colors.grey : Colors.black54,
                                ),
                              ),
                              value: task.completed,
                              onChanged: (value) => toggleTaskCompletion(index),
                              activeColor: Colors.blue,
                              shape: RoundedRectangleBorder(
                                borderRadius: BorderRadius.circular(8),
                              ),
                            ),
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
              style: TextStyle(
                fontSize: 22,
                fontWeight: FontWeight.bold,
                color: Colors.blue,
              ),
            ),
            const SizedBox(height: 16),
            ListView.builder(
              shrinkWrap: true,
              physics: const NeverScrollableScrollPhysics(),
              itemCount: journeyPool.length,
              itemBuilder: (context, index) {
                final Journey journey = journeyPool[index];
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
            ),
          ],
        ),
      ),
    );
  }
}
