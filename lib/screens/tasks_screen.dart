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
  final Color primaryColor = const Color(0xFFC66408);
  final Color backgroundColor = const Color(0xFFF5F5F5);
  List<Journey> completedJourneys = [];
  bool isLoading = true;
  String? errorMessage;

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

  @override
  void initState() {
    super.initState();
    _loadJourneys();
  }

  Future<void> _loadJourneys() async {
    try {
      final snapshot = await FirebaseFirestore.instance.collection('completed_journeys').get();
      setState(() {
        completedJourneys = snapshot.docs.map((doc) {
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
        isLoading = false;
      });
    } catch (e) {
      setState(() {
        errorMessage = e.toString();
        isLoading = false;
      });
    }
  }

  Widget buildProgressIndicator(Journey journey) {
    int total = journey.tasks.length;
    int completed = journey.tasks.where((task) => task.completed).length;
    double progress = total > 0 ? completed / total : 0.0;
    
    return Column(
      crossAxisAlignment: CrossAxisAlignment.start,
      children: [
        Row(
          children: [
            Text(
              "${(progress * 100).toInt()}% Complete",
              style: TextStyle(
                fontSize: 12,
                fontWeight: FontWeight.w500,
                color: primaryColor,
              ),
            ),
            const Spacer(),
            Text(
              "$completed/$total tasks",
              style: const TextStyle(
                fontSize: 12,
                color: Colors.black54,
              ),
            ),
          ],
        ),
        const SizedBox(height: 8),
        ClipRRect(
          borderRadius: BorderRadius.circular(10),
          child: LinearProgressIndicator(
            value: progress,
            backgroundColor: Colors.grey.shade200,
            valueColor: AlwaysStoppedAnimation<Color>(primaryColor),
            minHeight: 8,
          ),
        ),
      ],
    );
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: backgroundColor,
      appBar: AppBar(
        title: const Text(
          'My Journeys',
          style: TextStyle(
            color: Colors.white,
            fontWeight: FontWeight.bold,
          ),
        ),
        backgroundColor: primaryColor,
        centerTitle: true,
        elevation: 0,
        shape: const RoundedRectangleBorder(
          borderRadius: BorderRadius.only(
            bottomLeft: Radius.circular(20),
            bottomRight: Radius.circular(20),
          ),
        ),
        actions: [
          IconButton(
            icon: const Icon(Icons.search, color: Colors.white),
            onPressed: () {
              // Implement search functionality
            },
          ),
        ],
      ),
      body: SafeArea(
        child: Padding(
          padding: const EdgeInsets.all(16),
          child: Column(
            crossAxisAlignment: CrossAxisAlignment.start,
            children: [
              const Padding(
                padding: EdgeInsets.only(left: 4, bottom: 16),
                child: Text(
                  'Continue your learning path',
                  style: TextStyle(
                    fontSize: 18,
                    fontWeight: FontWeight.bold,
                    color: Colors.black87,
                  ),
                ),
              ),
              Expanded(
                child: _buildJourneyList(),
              ),
            ],
          ),
        ),
      ),
      floatingActionButton: FloatingActionButton(
        backgroundColor: primaryColor,
        child: const Icon(Icons.add, color: Colors.white),
        onPressed: () {
          // Implement adding new journey
        },
      ),
    );
  }

  Widget _buildJourneyList() {
    if (isLoading) {
      return const Center(child: CircularProgressIndicator());
    }
    
    if (errorMessage != null) {
      return Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            Icon(
              Icons.error_outline,
              size: 48,
              color: primaryColor.withOpacity(0.7),
            ),
            const SizedBox(height: 16),
            Text(
              'Oops! Something went wrong',
              style: TextStyle(
                fontSize: 16,
                fontWeight: FontWeight.w500,
                color: Colors.black87,
              ),
            ),
            const SizedBox(height: 8),
            Text(
              'Error: $errorMessage',
              style: TextStyle(
                fontSize: 14,
                color: Colors.black54,
              ),
            ),
          ],
        ),
      );
    }

    return ListView.builder(
      physics: const BouncingScrollPhysics(),
      itemCount: completedJourneys.length + 1, // +1 for ongoing journey
      itemBuilder: (context, index) {
        if (index == 0) {
          // Show ongoing journey first
          return ExpandableJourneyCard(
            journey: ongoingJourney,
            isOngoing: true,
            primaryColor: primaryColor,
          );
        } else {
          // Show completed journeys
          final Journey journey = completedJourneys[index - 1];
          return ExpandableJourneyCard(
            journey: journey,
            isOngoing: false,
            primaryColor: primaryColor,
          );
        }
      },
    );
  }
}

class ExpandableJourneyCard extends StatefulWidget {
  final Journey journey;
  final bool isOngoing;
  final Color primaryColor;

  const ExpandableJourneyCard({
    Key? key,
    required this.journey,
    required this.isOngoing,
    required this.primaryColor,
  }) : super(key: key);

  @override
  _ExpandableJourneyCardState createState() => _ExpandableJourneyCardState();
}

class _ExpandableJourneyCardState extends State<ExpandableJourneyCard> with SingleTickerProviderStateMixin {
  bool isExpanded = false;
  late AnimationController _animationController;
  late Animation<double> _iconTurns;
  
  @override
  void initState() {
    super.initState();
    _animationController = AnimationController(
      duration: const Duration(milliseconds: 300),
      vsync: this,
    );
    _iconTurns = Tween<double>(begin: 0.0, end: 0.5).animate(
      CurvedAnimation(
        parent: _animationController,
        curve: Curves.easeInOut,
      ),
    );
  }

  @override
  void dispose() {
    _animationController.dispose();
    super.dispose();
  }

  void _toggleExpanded() {
    setState(() {
      isExpanded = !isExpanded;
      if (isExpanded) {
        _animationController.forward();
      } else {
        _animationController.reverse();
      }
    });
  }

  Widget _buildProgressIndicator() {
    int total = widget.journey.tasks.length;
    int completed = widget.journey.tasks.where((task) => task.completed).length;
    double progress = total > 0 ? completed / total : 0.0;
    
    return Column(
      crossAxisAlignment: CrossAxisAlignment.start,
      children: [
        Row(
          children: [
            Text(
              "${(progress * 100).toInt()}% Complete",
              style: TextStyle(
                fontSize: 12,
                fontWeight: FontWeight.w500,
                color: widget.primaryColor,
              ),
            ),
            const Spacer(),
            Text(
              "$completed/$total tasks",
              style: const TextStyle(
                fontSize: 12,
                color: Colors.black54,
              ),
            ),
          ],
        ),
        const SizedBox(height: 8),
        ClipRRect(
          borderRadius: BorderRadius.circular(10),
          child: LinearProgressIndicator(
            value: progress,
            backgroundColor: Colors.grey.shade200,
            valueColor: AlwaysStoppedAnimation<Color>(widget.primaryColor),
            minHeight: 8,
          ),
        ),
      ],
    );
  }

  @override
  Widget build(BuildContext context) {
    return AnimatedContainer(
      duration: const Duration(milliseconds: 300),
      margin: const EdgeInsets.only(bottom: 16),
      decoration: BoxDecoration(
        color: Colors.white,
        borderRadius: BorderRadius.circular(16),
        boxShadow: [
          BoxShadow(
            color: Colors.black.withOpacity(0.05),
            spreadRadius: 1,
            blurRadius: 10,
            offset: const Offset(0, 2),
          ),
        ],
        border: widget.isOngoing
            ? Border.all(color: widget.primaryColor, width: 2)
            : Border.all(color: Colors.transparent),
      ),
      child: Column(
        children: [
          Padding(
            padding: const EdgeInsets.all(16.0),
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: [
                Row(
                  children: [
                    Container(
                      padding: const EdgeInsets.all(10),
                      decoration: BoxDecoration(
                        color: widget.primaryColor.withOpacity(0.1),
                        borderRadius: BorderRadius.circular(12),
                      ),
                      child: Icon(
                        widget.isOngoing ? Icons.play_circle_fill : Icons.check_circle,
                        color: widget.primaryColor,
                        size: 28,
                      ),
                    ),
                    const SizedBox(width: 12),
                    Expanded(
                      child: Column(
                        crossAxisAlignment: CrossAxisAlignment.start,
                        children: [
                          Row(
                            children: [
                              Expanded(
                                child: Text(
                                  widget.journey.name,
                                  style: const TextStyle(
                                    fontSize: 18,
                                    fontWeight: FontWeight.bold,
                                    color: Colors.black87,
                                  ),
                                ),
                              ),
                              if (widget.isOngoing)
                                Container(
                                  margin: const EdgeInsets.only(left: 8),
                                  padding: const EdgeInsets.symmetric(horizontal: 10, vertical: 4),
                                  decoration: BoxDecoration(
                                    color: widget.primaryColor,
                                    borderRadius: BorderRadius.circular(12),
                                  ),
                                  child: const Text(
                                    'Ongoing',
                                    style: TextStyle(
                                      color: Colors.white,
                                      fontSize: 12,
                                      fontWeight: FontWeight.w500,
                                    ),
                                  ),
                                ),
                            ],
                          ),
                          const SizedBox(height: 4),
                          Text(
                            "Difficulty: ${widget.journey.difficulty}",
                            style: const TextStyle(fontSize: 14, color: Colors.black54),
                          ),
                        ],
                      ),
                    ),
                    RotationTransition(
                      turns: _iconTurns,
                      child: IconButton(
                        icon: Icon(
                          Icons.keyboard_arrow_down,
                          color: widget.primaryColor,
                        ),
                        onPressed: _toggleExpanded,
                      ),
                    ),
                  ],
                ),
                if (widget.isOngoing)
                  Padding(
                    padding: const EdgeInsets.only(top: 16.0),
                    child: _buildProgressIndicator(),
                  ),
              ],
            ),
          ),
          AnimatedCrossFade(
            duration: const Duration(milliseconds: 300),
            crossFadeState: isExpanded ? CrossFadeState.showSecond : CrossFadeState.showFirst,
            firstChild: const SizedBox(height: 0),
            secondChild: Container(
              width: double.infinity,
              decoration: BoxDecoration(
                color: Colors.grey.shade50,
                borderRadius: const BorderRadius.only(
                  bottomLeft: Radius.circular(16),
                  bottomRight: Radius.circular(16),
                ),
              ),
              child: Padding(
                padding: const EdgeInsets.all(16.0),
                child: Column(
                  crossAxisAlignment: CrossAxisAlignment.start,
                  children: [
                    const Padding(
                      padding: EdgeInsets.only(bottom: 10.0),
                      child: Text(
                        "Tasks",
                        style: TextStyle(
                          fontSize: 16,
                          fontWeight: FontWeight.bold,
                          color: Colors.black87,
                        ),
                      ),
                    ),
                    ...widget.journey.tasks.asMap().entries.map((entry) {
                      final int taskIndex = entry.key;
                      final Task task = entry.value;
                      return Padding(
                        padding: const EdgeInsets.only(bottom: 12.0),
                        child: Row(
                          crossAxisAlignment: CrossAxisAlignment.start,
                          children: [
                            if (widget.isOngoing)
                              Padding(
                                padding: const EdgeInsets.only(top: 2.0),
                                child: Icon(
                                  task.completed ? Icons.check_circle : Icons.circle_outlined,
                                  size: 22,
                                  color: task.completed ? Colors.green : Colors.grey.shade400,
                                ),
                              ),
                            const SizedBox(width: 12),
                            Expanded(
                              child: Column(
                                crossAxisAlignment: CrossAxisAlignment.start,
                                children: [
                                  Text(
                                    "${taskIndex + 1}. ${task.name}",
                                    style: TextStyle(
                                      fontSize: 16,
                                      fontWeight: FontWeight.w500,
                                      color: Colors.black87,
                                      decoration: widget.isOngoing && task.completed ? TextDecoration.lineThrough : null,
                                    ),
                                  ),
                                  const SizedBox(height: 4),
                                  Text(
                                    task.description,
                                    style: TextStyle(
                                      fontSize: 14,
                                      color: Colors.black54,
                                      decoration: widget.isOngoing && task.completed ? TextDecoration.lineThrough : null,
                                    ),
                                  ),
                                ],
                              ),
                            ),
                          ],
                        ),
                      );
                    }).toList(),
                  ],
                ),
              ),
            ),
          ),
        ],
      ),
    );
  }
}