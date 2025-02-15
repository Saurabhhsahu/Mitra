class Article {
  final String title;
  final String imageAsset;
  final String content;

  Article({required this.title, required this.imageAsset, required this.content});
}

final List<Article> articles = [
  Article(
    title: "Understanding Anxiety: Causes, Symptoms, and Management",
    imageAsset: "assets/anxiety.jpg",
    content: "Anxiety is a natural response to stress, but excessive anxiety can interfere with daily life. Common causes include genetics, trauma, and prolonged stress. Symptoms include restlessness, rapid heartbeat, and difficulty concentrating. To manage anxiety, practice mindfulness, engage in physical activity, maintain a balanced diet, and seek professional support if necessary.",
  ),
  Article(
    title: "The Impact of Social Media on Mental Health",
    imageAsset: "assets/anxiety.jpg",
    content: "Social media can both positively and negatively impact mental health. Excessive use may lead to anxiety, depression, and low self-esteem due to unrealistic comparisons. On the other hand, social media can foster connection and support. To maintain balance, set time limits, engage in offline activities, and curate a positive digital environment.",
  ),
  Article(
    title: "How to Overcome Burnout and Restore Energy",
    imageAsset: "assets/anxiety.jpg",
    content: "Burnout occurs due to prolonged stress, often from work or academic pressure. Symptoms include exhaustion, lack of motivation, and irritability. Recovery strategies include setting boundaries, taking breaks, practicing self-care, and ensuring a healthy work-life balance. Seeking support from friends, family, or professionals can also aid recovery.",
  ),
  Article(
    title: "The Power of Mindfulness for Mental Well-being",
    imageAsset: "assets/anxiety.jpg",
    content: "Mindfulness is the practice of being fully present in the moment. It helps reduce stress, improve focus, and enhance emotional regulation. Techniques include deep breathing, meditation, and mindful observation of thoughts and surroundings. Regular mindfulness practice leads to a calmer and more balanced mind.",
  ),
  Article(
    title: "The Connection Between Sleep and Mental Health",
    imageAsset: "assets/anxiety.jpg",
    content: "Sleep plays a crucial role in mental health, affecting mood, memory, and overall well-being. Poor sleep can contribute to anxiety, depression, and cognitive difficulties. To improve sleep, maintain a consistent sleep schedule, reduce screen time before bed, and create a relaxing nighttime routine."
  ),

  // Add more articles here
];
