import 'dart:convert';
import 'package:flutter/material.dart';
import 'package:table_calendar/table_calendar.dart';
import 'package:shared_preferences/shared_preferences.dart';
import 'package:mitra/core/config/colors.dart';

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
    final theme = Theme.of(context);

    return Scaffold(
      backgroundColor: AppColors.background,
      appBar: AppBar(
        title: Text(
          'Journal',
          style: theme.textTheme.titleLarge?.copyWith(
            color: AppColors.textPrimary,
            fontWeight: FontWeight.w600,
          ),
        ),
        backgroundColor: AppColors.surface,
        elevation: 0,
        automaticallyImplyLeading: false,
      ),
      body: SafeArea(
        child: Padding(
          padding: const EdgeInsets.all(16.0),
          child: Column(
            children: [
              Container(
                decoration: BoxDecoration(
                  color: AppColors.surface,
                  borderRadius: BorderRadius.circular(24),
                  boxShadow: [
                    BoxShadow(
                      color: AppColors.primary.withOpacity(0.08),
                      blurRadius: 24,
                      offset: const Offset(0, 4),
                    ),
                  ],
                ),
                child: TableCalendar(
                  focusedDay: _selectedDate,
                  firstDay: DateTime(2000),
                  lastDay: DateTime(2100),
                  calendarFormat: CalendarFormat.month,
                  selectedDayPredicate: (day) => isSameDay(_selectedDate, day),
                  onDaySelected: (selectedDay, focusedDay) {
                    setState(() {
                      _selectedDate = selectedDay;
                      _updateTextField();
                    });
                  },
                  headerStyle: HeaderStyle(
                    titleCentered: true,
                    formatButtonVisible: false,
                    titleTextStyle: theme.textTheme.titleMedium!.copyWith(
                      color: AppColors.textPrimary,
                      fontWeight: FontWeight.w600,
                    ),
                  ),
                  calendarStyle: CalendarStyle(
                    selectedDecoration: BoxDecoration(
                      color: AppColors.primary,
                      shape: BoxShape.circle,
                    ),
                    todayDecoration: BoxDecoration(
                      color: AppColors.primary.withOpacity(0.2),
                      shape: BoxShape.circle,
                    ),
                    markersMaxCount: 1,
                    markerDecoration: BoxDecoration(
                      color: AppColors.accent,
                      shape: BoxShape.circle,
                    ),
                  ),
                  calendarBuilders: CalendarBuilders(
                    markerBuilder: (context, date, events) {
                      if (_journalEntries.containsKey(_formatDate(date))) {
                        return Positioned(
                          bottom: 1,
                          child: Container(
                            width: 6,
                            height: 6,
                            decoration: BoxDecoration(
                              color: AppColors.accent,
                              shape: BoxShape.circle,
                            ),
                          ),
                        );
                      }
                      return null;
                    },
                  ),
                ),
              ),
              const SizedBox(height: 20),
              Expanded(
                child: Container(
                  decoration: BoxDecoration(
                    color: AppColors.surface,
                    borderRadius: BorderRadius.circular(24),
                    boxShadow: [
                      BoxShadow(
                        color: AppColors.primary.withOpacity(0.08),
                        blurRadius: 24,
                        offset: const Offset(0, 4),
                      ),
                    ],
                  ),
                  padding: const EdgeInsets.all(16),
                  child: TextField(
                    controller: _entryController,
                    maxLines: null,
                    decoration: InputDecoration(
                      hintText: "Write your thoughts for the day...",
                      hintStyle: theme.textTheme.bodyLarge?.copyWith(
                        color: AppColors.textSecondary.withOpacity(0.5),
                      ),
                      border: InputBorder.none,
                    ),
                    style: theme.textTheme.bodyLarge?.copyWith(
                      color: AppColors.textPrimary,
                      height: 1.5,
                    ),
                  ),
                ),
              ),
              const SizedBox(height: 16),
              SizedBox(
                width: double.infinity,
                child: ElevatedButton(
                  onPressed: _saveEntry,
                  style: ElevatedButton.styleFrom(
                    backgroundColor: AppColors.primary,
                    foregroundColor: AppColors.surface,
                    padding: const EdgeInsets.symmetric(vertical: 16),
                    shape: RoundedRectangleBorder(
                      borderRadius: BorderRadius.circular(16),
                    ),
                    elevation: 0,
                  ),
                  child: Text(
                    "Save Entry",
                    style: theme.textTheme.labelLarge?.copyWith(
                      color: AppColors.surface,
                      fontWeight: FontWeight.w600,
                    ),
                  ),
                ),
              ),
              const SizedBox(height: 100),
            ],
          ),
        ),
      ),
    );
  }
}
