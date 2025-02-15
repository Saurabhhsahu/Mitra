import 'package:flutter/material.dart';
import '../data/articles_data.dart';
import 'articles_detail_screen.dart';

class ArticlesScreen extends StatelessWidget {
  const ArticlesScreen({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text('Articles'),
      ),
      body: ListView.builder(
        itemCount: articles.length,
        itemBuilder: (context, index) {
          final article = articles[index];
          return Card(
            margin: const EdgeInsets.symmetric(horizontal: 15, vertical: 8),
            child: ListTile(
              leading: Image.asset(article.imageAsset, width: 50, height: 50, fit: BoxFit.cover),
              title: Text(article.title),
              subtitle: const Text('Click to read more...'),
              onTap: () {
                Navigator.push(
                  context,
                  MaterialPageRoute(
                    builder: (context) => ArticleDetailScreen(article: article),
                  ),
                );
              },
            ),
          );
        },
      ),
    );
  }
}
