import 'package:mitra/models/journey_model.dart';

List<Journey> journeyPool = [
  Journey(
    name: "Mountain Expedition",
    difficulty: "Hard",
    tasks: [
      Task(name: "Gather Equipment", description: "Collect all the necessary gear."),
      Task(name: "Train for High Altitude", description: "Practice for extreme conditions."),
      Task(name: "Reach Base Camp", description: "Arrive at the designated base camp."),
      Task(name: "Summit the Peak", description: "Climb to the top of the mountain."),
    ],
  ),
  Journey(
    name: "Desert Survival",
    difficulty: "Medium",
    tasks: [
      Task(name: "Find Water Source", description: "Locate and store drinking water."),
      Task(name: "Build Shelter", description: "Create a shaded area for rest."),
      Task(name: "Navigate to Safe Zone", description: "Use GPS or stars for navigation."),
    ],
  ),
  Journey(
    name: "Jungle Exploration",
    difficulty: "Hard",
    tasks: [
      Task(name: "Map the Route", description: "Plan the journey through the jungle."),
      Task(name: "Set Up Camp", description: "Find a safe place to stay overnight."),
      Task(name: "Cross the River", description: "Safely navigate the river crossing."),
    ],
  ),
  Journey(
    name: "City Adventure",
    difficulty: "Easy",
    tasks: [
      Task(name: "Visit Historical Sites", description: "Explore cultural landmarks."),
      Task(name: "Try Local Food", description: "Experience the local cuisine."),
      Task(name: "Complete a Scavenger Hunt", description: "Find hidden gems in the city."),
    ],
  ),
  Journey(
    name: "Space Mission",
    difficulty: "Very Hard",
    tasks: [
      Task(name: "Undergo Astronaut Training", description: "Complete zero-gravity training."),
      Task(name: "Launch into Orbit", description: "Successfully take off from Earth."),
      Task(name: "Conduct Space Research", description: "Perform scientific experiments."),
      Task(name: "Return to Earth Safely", description: "Execute a successful re-entry."),
    ],
  ),
];
