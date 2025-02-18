import 'package:flutter/material.dart';
import '../models/user_model.dart';
import '../models/interest_match_model.dart';
import '../data/dummy_user.dart';
import 'chat_screen.dart';

class UserDiscoveryScreen extends StatefulWidget {
  final String userId;

  const UserDiscoveryScreen({Key? key, required this.userId}) : super(key: key);

  @override
  State<UserDiscoveryScreen> createState() => _UserDiscoveryScreenState();
}

class _UserDiscoveryScreenState extends State<UserDiscoveryScreen> {
  late Future<List<InterestMatch>> _matchesFuture;
  final UserRepository _userRepository = UserRepository();

  @override
  void initState() {
    super.initState();
    _matchesFuture = _userRepository.getSimilarUsers(widget.userId);
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text(
          'People With Similar Interests',
          style: TextStyle(fontWeight: FontWeight.bold),
        ),
        backgroundColor: const Color(0xFFC66408),
        foregroundColor: Colors.white,
        elevation: 3,
        centerTitle: true,
      ),
      body: FutureBuilder<List<InterestMatch>>(
        future: _matchesFuture,
        builder: (context, snapshot) {
          if (snapshot.connectionState == ConnectionState.waiting) {
            return const Center(child: CircularProgressIndicator());
          } else if (snapshot.hasError) {
            return Center(
                child: Text(
              'Error: ${snapshot.error}',
              style: const TextStyle(color: Colors.red),
            ));
          } else if (!snapshot.hasData || snapshot.data!.isEmpty) {
            return const Center(
              child: Column(
                mainAxisAlignment: MainAxisAlignment.center,
                children: [
                  Icon(Icons.person_search, size: 72, color: Colors.grey),
                  SizedBox(height: 16),
                  Text(
                    'No matches found yet',
                    style: TextStyle(fontSize: 18, fontWeight: FontWeight.w600),
                  ),
                  SizedBox(height: 8),
                  Text(
                    'Add more interests to find people',
                    style: TextStyle(fontSize: 14, color: Colors.grey),
                  ),
                ],
              ),
            );
          }

          return ListView.builder(
            padding: const EdgeInsets.all(16),
            itemCount: snapshot.data!.length,
            itemBuilder: (context, index) {
              final match = snapshot.data![index];
              return _buildUserCard(match);
            },
          );
        },
      ),
    );
  }

  Widget _buildUserCard(InterestMatch match) {
    return Card(
      elevation: 3,
      margin: const EdgeInsets.only(bottom: 16),
      shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(16)),
      child: Container(
        padding: const EdgeInsets.all(16),
        decoration: BoxDecoration(
          borderRadius: BorderRadius.circular(16),
          gradient: LinearGradient(
            colors: [Color(0xFFC66408).withOpacity(0.1), Colors.white],
            begin: Alignment.topLeft,
            end: Alignment.bottomRight,
          ),
          boxShadow: [
            BoxShadow(
              color: const Color.fromARGB(31, 252, 186, 186),
              blurRadius: 4,
              spreadRadius: 1,
              offset: const Offset(2, 3),
            ),
          ],
        ),
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            Row(
              children: [
                CircleAvatar(
                  radius: 30,
                  backgroundColor: const Color(0xFFC66408),
                  backgroundImage: match.user.profileImageAsset != null
                      ? NetworkImage(match.user.profileImageAsset!)
                      : null,
                  child: match.user.profileImageAsset == null
                      ? Text(
                          match.user.username.substring(0, 1).toUpperCase(),
                          style: const TextStyle(
                              fontSize: 26, color: Colors.white),
                        )
                      : null,
                ),
                const SizedBox(width: 16),
                Expanded(
                  child: Column(
                    crossAxisAlignment: CrossAxisAlignment.start,
                    children: [
                      Text(
                        match.user.username,
                        style: const TextStyle(
                          fontSize: 18,
                          fontWeight: FontWeight.bold,
                        ),
                      ),
                      const SizedBox(height: 4),
                      Text(
                        'Match strength: ${(match.matchPercentage * 100).round()}%',
                        style: const TextStyle(
                          color: Color(0xFFC66408),
                          fontWeight: FontWeight.w600,
                        ),
                      ),
                    ],
                  ),
                ),
              ],
            ),
            const SizedBox(height: 16),
            const Text(
              'Common Interests:',
              style: TextStyle(fontWeight: FontWeight.bold),
            ),
            const SizedBox(height: 8),
            Wrap(
              spacing: 8,
              runSpacing: 8,
              children: match.commonInterests
                  .map(
                    (interest) => Chip(
                      label: Text(
                        interest,
                        style: const TextStyle(
                            fontWeight: FontWeight.w500, fontSize: 14),
                      ),
                      padding: const EdgeInsets.symmetric(horizontal: 8),
                      shape: RoundedRectangleBorder(
                        borderRadius: BorderRadius.circular(12),
                      ),
                      backgroundColor: Colors.orange.shade50,
                      labelStyle: TextStyle(color: Colors.orange.shade700),
                    ),
                  )
                  .toList(),
            ),
            const SizedBox(height: 16),
            SizedBox(
              width: double.infinity,
              child: ElevatedButton.icon(
                onPressed: () {
                  Navigator.push(
                    context,
                    MaterialPageRoute(
                      builder: (context) => ChatScreen(
                        currentUserId: widget.userId,
                        otherUser: match.user,
                      ),
                    ),
                  );
                },
                icon: const Icon(Icons.message, color: Colors.white),
                label: const Text(
                  'Start Conversation',
                  style: TextStyle(fontWeight: FontWeight.bold),
                ),
                style: ElevatedButton.styleFrom(
                  backgroundColor: const Color(0xFFC66408),
                  foregroundColor: Colors.white,
                  padding: const EdgeInsets.symmetric(vertical: 14),
                  shape: RoundedRectangleBorder(
                    borderRadius: BorderRadius.circular(12),
                  ),
                  elevation: 3,
                ),
              ),
            ),
          ],
        ),
      ),
    );
  }
}
