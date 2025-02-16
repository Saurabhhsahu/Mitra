// lib/screens/tasks_screen.dart
import 'package:flutter/material.dart';
import 'package:mitra/data/journey_data.dart';
import 'package:mitra/models/journey_model.dart';

class TasksScreen extends StatefulWidget {
  const TasksScreen({super.key});

  @override
  State<TasksScreen> createState() => _TasksScreenState();
}

class _TasksScreenState extends State<TasksScreen> {
  List<Journey> previousJourneys = [];
  Journey? currentJourney;

  @override
  void initState() {
    super.initState();
    if (journeyPool.isNotEmpty) {
      currentJourney = journeyPool.removeAt(0);
    }
  }

  void completeTask(int index) {
    setState(() {
      currentJourney!.tasks[index] =
          currentJourney!.tasks[index].copyWith(completed: true);

      if (currentJourney!.isCompleted) {
        previousJourneys.add(currentJourney!);
        currentJourney =
        journeyPool.isNotEmpty ? journeyPool.removeAt(0) : null;
      }
    });
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(title: const Text('My Journeys')),
      body: Padding(
        padding: const EdgeInsets.all(16),
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            if (currentJourney != null) ...[
              Text(
                'Current Journey: ${currentJourney!.name}',
                style:
                const TextStyle(fontSize: 20, fontWeight: FontWeight.bold),
              ),
              Expanded(
                child: ListView.builder(
                  itemCount: currentJourney!.tasks.length,
                  itemBuilder: (context, index) {
                    final task = currentJourney!.tasks[index];
                    return ListTile(
                      title: Text(task.name),
                      subtitle: Text(task.description),
                      trailing: Checkbox(
                        value: task.completed,
                        onChanged: (bool? value) {
                          if (!task.completed) {
                            completeTask(index);
                          }
                        },
                      ),
                    );
                  },
                ),
              ),
            ],
            if (previousJourneys.isNotEmpty) ...[
              const SizedBox(height: 20),
              const Text(
                "Completed Journeys:",
                style: TextStyle(fontSize: 18, fontWeight: FontWeight.bold),
              ),
              Expanded(
                child: ListView.builder(
                  itemCount: previousJourneys.length,
                  itemBuilder: (context, index) {
                    return ListTile(
                      title: Text(previousJourneys[index].name),
                      subtitle: Text(
                          "Difficulty: ${previousJourneys[index].difficulty}"),
                      trailing:
                      const Icon(Icons.check_circle, color: Colors.green),
                    );
                  },
                ),
              ),
            ],
          ],
        ),
      ),
    );
  }
}
