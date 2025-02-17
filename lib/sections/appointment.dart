// lib/screens/upcoming_appointments_screen.dart

import 'package:flutter/material.dart';
import '../data/appointment_data.dart';
import '../models/appintment_model.dart';
import 'package:intl/intl.dart';

class UpcomingAppointmentsScreen extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(title: Text('Upcoming Appointments')),
      body: ListView.builder(
        itemCount: upcomingAppointments.length,
        itemBuilder: (context, index) {
          Appointment appointment = upcomingAppointments[index];
          return Card(
            margin: EdgeInsets.symmetric(vertical: 10, horizontal: 15),
            elevation: 4,
            shape: RoundedRectangleBorder(
              borderRadius: BorderRadius.circular(12),
            ),
            child: ListTile(
              contentPadding: EdgeInsets.all(16),
              leading: CircleAvatar(
                backgroundImage: AssetImage(appointment.doctorPhoto), // Doctor's photo
                radius: 30,
              ),
              title: Text(
                appointment.doctorName,
                style: TextStyle(fontWeight: FontWeight.bold),
              ),
              subtitle: Text('Patient: ${appointment.patientName}'),
              trailing: Text(
                DateFormat('MMM dd, yyyy hh:mm a').format(appointment.appointmentDate), // Format the date
                style: TextStyle(fontWeight: FontWeight.bold),
              ),
            ),
          );
        },
      ),
    );
  }
}
