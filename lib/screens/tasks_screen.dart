import 'package:flutter/material.dart';
import 'chatbot_screen.dart';

class Task {
  final String taskName;
  final String taskType;
  final String difficulty;
  final bool completed;
  final int? totalCount;
  final int? completedCount;
  final String taskReason;

  Task({
    required this.taskName,
    required this.taskType,
    required this.difficulty,
    required this.completed,
    this.totalCount,
    this.completedCount,
    required this.taskReason,
  });

  // Add a copyWith method to update task properties
  Task copyWith({
    String? taskName,
    String? taskType,
    String? difficulty,
    bool? completed,
    int? totalCount,
    int? completedCount,
    String? taskReason,
  }) {
    return Task(
      taskName: taskName ?? this.taskName,
      taskType: taskType ?? this.taskType,
      difficulty: difficulty ?? this.difficulty,
      completed: completed ?? this.completed,
      totalCount: totalCount ?? this.totalCount,
      completedCount: completedCount ?? this.completedCount,
      taskReason: taskReason ?? this.taskReason,
    );
  }
}

class TasksScreen extends StatefulWidget {
  const TasksScreen({super.key});

  @override
  State<TasksScreen> createState() => _TasksScreenState();
}

class _TasksScreenState extends State<TasksScreen> {
  List<Task> tasks = [
    Task(
      taskName: "Morning Gratitude Check-in",
      taskType: "checkmark",
      difficulty: "easy",
      completed: false,
      taskReason: "To encourage the user to start the day with positive thoughts.",
    ),
    Task(
      taskName: "Complete a 5-minute mindfulness exercise",
      taskType: "checkmark",
      difficulty: "easy",
      completed: false,
      taskReason: "To help the user focus and relax through mindfulness.",
    ),
    Task(
      taskName: "Talk to 5 people",
      taskType: "discrete",
      difficulty: "medium",
      completed: false,
      totalCount: 5,
      completedCount: 2,
      taskReason: "Reduce fear of social interactions.",
    ),
  ];

  Set<int> expandedTasks = {}; // Track expanded tasks

  double getProgress() {
    int totalTasks = tasks.length;
    if (totalTasks == 0) return 0.0;

    int completedTasks = tasks.where((task) {
      if (task.taskType == "checkmark") {
        return task.completed;
      } else if (task.taskType == "discrete") {
        return task.completedCount == task.totalCount;
      }
      return false;
    }).length;

    return completedTasks / totalTasks;
  }

  bool get allTasksCompleted {
    return tasks.every((task) {
      if (task.taskType == "checkmark") {
        return task.completed;
      } else if (task.taskType == "discrete") {
        return task.completedCount == task.totalCount;
      }
      return false;
    });
  }

  void _navigateToChatbotScreen(BuildContext context) {
    Navigator.push(
      context,
      MaterialPageRoute(builder: (context) => const ChatbotScreen()),
    );
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text(
          'My Tasks',
          style: TextStyle(fontSize: 24, fontWeight: FontWeight.bold, color: Colors.black87),
        ),
        leading: IconButton(
          icon: const Icon(Icons.arrow_back, color: Colors.black87),
          onPressed: () => Navigator.pop(context),
        ),
        backgroundColor: Colors.transparent,
        elevation: 0,
      ),
      body: Container(
        color: Colors.white,
        child: Column(
          children: [
            // Progress Bar
            Container(
              padding: const EdgeInsets.all(16),
              decoration: BoxDecoration(
                color: Colors.white,
                boxShadow: [
                  BoxShadow(color: Colors.black.withOpacity(0.1), blurRadius: 10, offset: const Offset(0, 5)),
                ],
              ),
              child: Column(
                children: [
                  Row(
                    mainAxisAlignment: MainAxisAlignment.spaceBetween,
                    children: [
                      Text(
                        'Progress: ${(getProgress() * 100).toInt()}%',
                        style: const TextStyle(fontSize: 18, fontWeight: FontWeight.bold, color: Colors.black87),
                      ),
                      Text(
                        '${tasks.where((task) => task.completed).length}/${tasks.length} Tasks',
                        style: const TextStyle(fontSize: 16, color: Colors.black54),
                      ),
                    ],
                  ),
                  const SizedBox(height: 8),
                  ClipRRect(
                    borderRadius: BorderRadius.circular(10),
                    child: LinearProgressIndicator(
                      value: getProgress(),
                      minHeight: 10,
                      backgroundColor: Colors.grey[200],
                      valueColor: const AlwaysStoppedAnimation<Color>(Colors.blue),
                    ),
                  ),
                ],
              ),
            ),
            // Tasks List
            Expanded(
              child: ListView.builder(
                padding: const EdgeInsets.all(16),
                itemCount: tasks.length,
                itemBuilder: (context, index) {
                  final task = tasks[index];
                  final isExpanded = expandedTasks.contains(index);
                  return GestureDetector(
                    onTap: () {
                      setState(() {
                        if (isExpanded) {
                          expandedTasks.remove(index);
                        } else {
                          expandedTasks.add(index);
                        }
                      });
                    },
                    child: AnimatedContainer(
                      duration: const Duration(milliseconds: 300),
                      margin: const EdgeInsets.only(bottom: 16),
                      decoration: BoxDecoration(
                        color: Colors.white,
                        borderRadius: BorderRadius.circular(10),
                        boxShadow: [
                          BoxShadow(color: Colors.black.withOpacity(0.1), blurRadius: 10, offset: const Offset(0, 5)),
                        ],
                      ),
                      child: Column(
                        children: [
                          ListTile(
                            leading: task.taskType == "checkmark"
                                ? Checkbox(
                              value: task.completed,
                              onChanged: (bool? value) {
                                setState(() {
                                  tasks[index] = task.copyWith(completed: value ?? false);
                                });
                              },
                              activeColor: Colors.blue,
                            )
                                : CircularProgressIndicator(
                              value: task.completedCount! / task.totalCount!,
                              backgroundColor: Colors.grey[200],
                              valueColor: const AlwaysStoppedAnimation<Color>(Colors.blue),
                            ),
                            title: AnimatedDefaultTextStyle(
                              duration: const Duration(milliseconds: 200),
                              style: TextStyle(
                                fontSize: 18,
                                fontWeight: FontWeight.bold,
                                decoration: task.completed ? TextDecoration.lineThrough : null,
                                color: task.completed ? Colors.grey : Colors.black87,
                              ),
                              child: Text(task.taskName),
                            ),
                            trailing: AnimatedRotation(
                              duration: const Duration(milliseconds: 200),
                              turns: isExpanded ? 0.5 : 0, // Rotate 180° when expanded
                              child: const Icon(Icons.expand_more, color: Colors.black54),
                            ),
                          ),
                          AnimatedCrossFade(
                            duration: const Duration(milliseconds: 200),
                            crossFadeState: isExpanded ? CrossFadeState.showSecond : CrossFadeState.showFirst,
                            firstChild: const SizedBox.shrink(),
                            secondChild: Padding(
                              padding: const EdgeInsets.only(left: 16, right: 16, bottom: 16),
                              child: Column(
                                crossAxisAlignment: CrossAxisAlignment.start,
                                children: [
                                  Text(
                                    task.taskReason,
                                    style: TextStyle(fontSize: 16, color: task.completed ? Colors.grey : Colors.black54),
                                  ),
                                  if (task.taskType == "discrete")
                                    const SizedBox(height: 8),
                                  Text(
                                    'Completed: ${task.completedCount}/${task.totalCount}',
                                    style: TextStyle(fontSize: 14, color: Colors.blue),
                                  ),
                                ],
                              ),
                            ),
                          ),
                        ],
                      ),
                    ),
                  );
                },
              ),
            ),
            // Button to navigate to chatbot if all tasks are completed
            if (allTasksCompleted)
              Padding(
                padding: const EdgeInsets.all(16),
                child: ElevatedButton(
                  onPressed: () => _navigateToChatbotScreen(context),
                  style: ElevatedButton.styleFrom(
                    backgroundColor: Colors.blue,
                    padding: const EdgeInsets.symmetric(horizontal: 32, vertical: 16),
                    shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(10)),
                  ),
                  child: const Text(
                    'New Task',
                    style: TextStyle(fontSize: 18, fontWeight: FontWeight.bold, color: Colors.white),
                  ),
                ),
              ),
          ],
        ),
      ),
    );
  }
}