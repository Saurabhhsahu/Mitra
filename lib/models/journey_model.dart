class Task {
  final String name;
  final String description;
  final bool completed;

  Task({required this.name, required this.description, this.completed = false});

  Task copyWith({bool? completed}) {
    return Task(
      name: name,
      description: description,
      completed: completed ?? this.completed,
    );
  }
}

class Journey {
  final String name;
  final String difficulty;
  List<Task> tasks;

  Journey({required this.name, required this.difficulty, required this.tasks});

  bool get isCompleted => tasks.every((task) => task.completed);
}
