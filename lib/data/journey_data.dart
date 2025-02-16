// lib/data/journey_data.dart
import '../models/journey_model.dart';

List<Journey> journeyPool = [
  Journey(
    name: "Morning Routine",
    difficulty: "Easy",
    tasks: [
      Task(name: "Morning Walk", description: "Take a 15-minute walk"),
      Task(name: "Meditation", description: "Practice meditation for 10 mins"),
      Task(name: "Journaling", description: "Write down daily thoughts"),
    ],
  ),
  Journey(
    name: "Healthy Habits",
    difficulty: "Medium",
    tasks: [
      Task(name: "Drink Water", description: "Drink at least 2 liters of water"),
      Task(name: "Eat Fruits", description: "Eat fresh fruits"),
      Task(name: "No Junk Food", description: "Avoid junk food for a day"),
    ],
  ),
];
