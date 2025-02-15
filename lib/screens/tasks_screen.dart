import 'package:flutter/material.dart';
import '../models/task_model.dart';
import '../data/dummy_tasks.dart';
import 'chatbot_screen.dart';

class TasksScreen extends StatefulWidget {
  const TasksScreen({super.key});

  @override
  State<TasksScreen> createState() => _TasksScreenState();
}

class _TasksScreenState extends State<TasksScreen> {
  late List<Task> tasks;
  late List<bool> checkedTasks;
  Set<int> expandedTasks = {}; // Track expanded tasks

  @override
  void initState() {
    super.initState();
    tasks = dummyTasks.map((json) => Task.fromJson(json)).toList();
    checkedTasks = List.generate(tasks.length, (index) => false);
  }

  double getProgress() {
    if (checkedTasks.isEmpty) return 0.0;
    int completedTasks = checkedTasks.where((checked) => checked).length;
    return completedTasks / checkedTasks.length;
  }

  bool get allTasksCompleted {
    return checkedTasks.every((checked) => checked);
  }

  void _navigateToChatbotScreen(BuildContext context) {
    Navigator.pushNamed(context, '/chatbot'); // Redirect to existing chatbot screen
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
                        '${checkedTasks.where((checked) => checked).length}/${tasks.length} Tasks',
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
                  return MouseRegion(
                    onEnter: (_) => setState(() => expandedTasks.add(index)),
                    onExit: (_) => setState(() => expandedTasks.remove(index)),
                    child: GestureDetector(
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
                              leading: Checkbox(
                                value: checkedTasks[index],
                                onChanged: (bool? value) {
                                  setState(() {
                                    checkedTasks[index] = value ?? false;
                                  });
                                },
                                activeColor: Colors.blue,
                              ),
                              title: AnimatedDefaultTextStyle(
                                duration: const Duration(milliseconds: 200),
                                style: TextStyle(
                                  fontSize: 18,
                                  fontWeight: FontWeight.bold,
                                  decoration: checkedTasks[index] ? TextDecoration.lineThrough : null,
                                  color: checkedTasks[index] ? Colors.grey : Colors.black87,
                                ),
                                child: Text(task.name),
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
                                child: Text(
                                  task.description,
                                  style: TextStyle(fontSize: 16, color: checkedTasks[index] ? Colors.grey : Colors.black54),
                                ),
                              ),
                            ),
                          ],
                        ),
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
                  onPressed: () {
                    Navigator.push(
                      context,
                      MaterialPageRoute(builder: (context) => const ChatbotScreen()),
                    );
                  },
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
