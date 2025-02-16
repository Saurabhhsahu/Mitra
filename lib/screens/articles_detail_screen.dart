import 'package:flutter/material.dart';
import '../data/articles_data.dart';
import '../core/config/colors.dart';

class ArticleDetailScreen extends StatelessWidget {
  final Article article;

  const ArticleDetailScreen({super.key, required this.article});

  @override
  Widget build(BuildContext context) {
    final theme = Theme.of(context);

    return Scaffold(
      backgroundColor: AppColors.background,
      appBar: AppBar(
        title: Text(
          'Article',
          style: theme.textTheme.titleLarge?.copyWith(
            color: AppColors.textPrimary,
            fontWeight: FontWeight.w600,
          ),
        ),
        backgroundColor: AppColors.surface,
        elevation: 0,
        leading: IconButton(
          icon: Icon(
            Icons.arrow_back_ios_rounded,
            color: AppColors.primary,
            size: 20,
          ),
          onPressed: () => Navigator.pop(context),
        ),
      ),
      body: SingleChildScrollView(
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            Hero(
              tag: article.title,
              child: Container(
                height: 240,
                width: double.infinity,
                decoration: BoxDecoration(
                  color: AppColors.surface,
                  boxShadow: [
                    BoxShadow(
                      color: AppColors.primary.withOpacity(0.08),
                      blurRadius: 24,
                      offset: const Offset(0, 8),
                    ),
                  ],
                ),
                child: Image.asset(
                  article.imageAsset,
                  fit: BoxFit.cover,
                ),
              ),
            ),
            Padding(
              padding: const EdgeInsets.all(24),
              child: Column(
                crossAxisAlignment: CrossAxisAlignment.start,
                children: [
                  Row(
                    children: [
                      Container(
                        padding: const EdgeInsets.symmetric(
                          horizontal: 12,
                          vertical: 6,
                        ),
                        decoration: BoxDecoration(
                          color: AppColors.primary.withOpacity(0.1),
                          borderRadius: BorderRadius.circular(20),
                        ),
                        child: Row(
                          mainAxisSize: MainAxisSize.min,
                          children: [
                            Icon(
                              Icons.timer_outlined,
                              size: 16,
                              color: AppColors.primary,
                            ),
                            const SizedBox(width: 4),
                            Text(
                              '5 min read',
                              style: theme.textTheme.bodySmall?.copyWith(
                                color: AppColors.primary,
                                fontWeight: FontWeight.w500,
                              ),
                            ),
                          ],
                        ),
                      ),
                      const Spacer(),
                      IconButton(
                        icon: Icon(
                          Icons.bookmark_outline_rounded,
                          color: AppColors.primary,
                        ),
                        onPressed: () {
                          // Add bookmark functionality
                        },
                      ),
                      IconButton(
                        icon: Icon(
                          Icons.share_rounded,
                          color: AppColors.primary,
                        ),
                        onPressed: () {
                          // Add share functionality
                        },
                      ),
                    ],
                  ),
                  const SizedBox(height: 16),
                  Text(
                    article.title,
                    style: theme.textTheme.headlineSmall?.copyWith(
                      color: AppColors.textPrimary,
                      fontWeight: FontWeight.bold,
                      height: 1.3,
                      letterSpacing: 0.3,
                    ),
                  ),
                  const SizedBox(height: 16),
                  Text(
                    article.content,
                    style: theme.textTheme.bodyLarge?.copyWith(
                      color: AppColors.textSecondary,
                      height: 1.6,
                      letterSpacing: 0.2,
                    ),
                  ),
                  const SizedBox(height: 32),
                  Container(
                    padding: const EdgeInsets.all(16),
                    decoration: BoxDecoration(
                      color: AppColors.primary.withOpacity(0.05),
                      borderRadius: BorderRadius.circular(16),
                      border: Border.all(
                        color: AppColors.primary.withOpacity(0.1),
                      ),
                    ),
                    child: Row(
                      children: [
                        Icon(
                          Icons.lightbulb_outline_rounded,
                          color: AppColors.primary,
                        ),
                        const SizedBox(width: 12),
                        Expanded(
                          child: Text(
                            'Pro tip: Save this article to read it later!',
                            style: theme.textTheme.bodyMedium?.copyWith(
                              color: AppColors.textPrimary,
                              fontWeight: FontWeight.w500,
                            ),
                          ),
                        ),
                      ],
                    ),
                  ),
                ],
              ),
            ),
          ],
        ),
      ),
    );
  }
}
