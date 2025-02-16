import 'dart:convert';
import 'package:flutter/material.dart';
import 'package:table_calendar/table_calendar.dart';
import 'package:shared_preferences/shared_preferences.dart';

void main() {
  runApp(const JournalApp());
}

class JournalApp extends StatelessWidget {
  const JournalApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      title: 'Daily Journal',
      theme: ThemeData(primarySwatch: Colors.blue),
      home: const JournalHomePage(),
    );
  }
}

class JournalHomePage extends StatefulWidget {
  const JournalHomePage({super.key});

  @override
  _JournalHomePageState createState() => _JournalHomePageState();
}

class _JournalHomePageState extends State<JournalHomePage> {
  DateTime _selectedDate = DateTime.now();
  Map<String, String> _journalEntries = {};
  TextEditingController _entryController = TextEditingController();

  @override
  void initState() {
    super.initState();
    _loadEntries();
  }

  /// Load journal entries from SharedPreferences
  Future<void> _loadEntries() async {
    final prefs = await SharedPreferences.getInstance();
    final String? storedData = prefs.getString('journalEntries');

    if (storedData != null) {
      setState(() {
        _journalEntries = Map<String, String>.from(jsonDecode(storedData));
      });
    }

    _updateTextField();
  }

  /// Save the journal entry to SharedPreferences
  Future<void> _saveEntry() async {
    final prefs = await SharedPreferences.getInstance();
    _journalEntries[_formatDate(_selectedDate)] = _entryController.text.trim();

    await prefs.setString('journalEntries', jsonEncode(_journalEntries));

    ScaffoldMessenger.of(context).showSnackBar(
      const SnackBar(content: Text('Journal Entry Saved!')),
    );

    setState(() {}); // Refresh UI to show red dot
  }

  /// Update text field when a date is selected
  void _updateTextField() {
    _entryController.text = _journalEntries[_formatDate(_selectedDate)] ?? "";
  }

  /// Format date as YYYY-MM-DD
  String _formatDate(DateTime date) {
    return "${date.year}-${date.month}-${date.day}";
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(title: const Text('Daily Journal')),
      body: Padding(
        padding: const EdgeInsets.all(16.0),
        child: Column(
          children: [
            // Calendar Widget with Red Dot Indicator
            TableCalendar(
              focusedDay: _selectedDate,
              firstDay: DateTime(2000),
              lastDay: DateTime(2100),
              calendarFormat: CalendarFormat.month,
              selectedDayPredicate: (day) {
                return isSameDay(_selectedDate, day);
              },
              onDaySelected: (selectedDay, focusedDay) {
                setState(() {
                  _selectedDate = selectedDay;
                  _updateTextField();
                });
              },
              calendarBuilders: CalendarBuilders(
                markerBuilder: (context, date, events) {
                  if (_journalEntries.containsKey(_formatDate(date))) {
                    return Positioned(
                      bottom: 1,
                      child: Container(
                        width: 6,
                        height: 6,
                        decoration: const BoxDecoration(
                          color: Colors.red,
                          shape: BoxShape.circle,
                        ),
                      ),
                    );
                  }
                  return null;
                },
              ),
            ),
            const SizedBox(height: 20),

            // Journal Entry Text Field
            Expanded(
              child: TextField(
                controller: _entryController,
                maxLines: 8,
                decoration: const InputDecoration(
                  hintText: "Write your daily note...",
                  border: OutlineInputBorder(),
                ),
              ),
            ),
            const SizedBox(height: 10),

            // Save Button
            ElevatedButton(
              onPressed: _saveEntry,
              child: const Text("Save Entry"),
            ),
          ],
        ),
      ),
    );
  }
}
