import 'package:flutter/material.dart';
import '../models/task_model.dart';
import '../data/dummy_tasks.dart';

class TasksScreen extends StatelessWidget {
  const TasksScreen({super.key});

  @override
  Widget build(BuildContext context) {
    final tasks = dummyTasks.map((json) => Task.fromJson(json)).toList();

    return Scaffold(
      appBar: AppBar(
        title: const Text('My Tasks'),
        leading: IconButton(
          icon: const Icon(Icons.arrow_back),
          onPressed: () => Navigator.pop(context),
        ),
      ),
      body: ListView.builder(
        padding: const EdgeInsets.all(16),
        itemCount: tasks.length,
        itemBuilder: (context, index) {
          final task = tasks[index];
          return Card(
            elevation: 2,
            margin: const EdgeInsets.only(bottom: 16),
            child: ListTile(
              title: Text(
                task.name,
                style: const TextStyle(
                  fontSize: 18,
                  fontWeight: FontWeight.bold,
                ),
              ),
              subtitle: Padding(
                padding: const EdgeInsets.only(top: 8),
                child: Text(
                  task.description,
                  style: const TextStyle(fontSize: 16),
                ),
              ),
              contentPadding: const EdgeInsets.all(16),
            ),
          );
        },
      ),
    );
  }
}