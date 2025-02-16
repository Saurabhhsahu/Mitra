// lib/models/journey_model.dart
class Task {
  final String name;
  final String description;
  bool completed;

  Task({
    required this.name,
    required this.description,
    this.completed = false,
  });

  Task copyWith({String? name, String? description, bool? completed}) {
    return Task(
      name: name ?? this.name,
      description: description ?? this.description,
      completed: completed ?? this.completed,
    );
  }
}

class Journey {
  final String name;
  final String difficulty;
  List<Task> tasks;

  Journey({
    required this.name,
    required this.difficulty,
    required this.tasks,
  });

  bool get isCompleted => tasks.every((task) => task.completed);
}
