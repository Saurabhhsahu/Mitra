// lib/data/appointment_data.dart

import 'package:intl/intl.dart';
import '../models/appintment_model.dart';

List<Appointment> upcomingAppointments = [
  Appointment(
    doctorName: 'Dr. John Smith',
    patientName: 'Alice Johnson',
    appointmentDate: DateTime(2025, 3, 10, 14, 30),
    doctorPhoto: 'assets/human1.jpg', // Example path for doctor's photo
  ),
  Appointment(
    doctorName: 'Dr. Emily Davis',
    patientName: 'Robert Brown',
    appointmentDate: DateTime(2025, 3, 12, 9, 00),
    doctorPhoto: 'assets/human2.jpg',
  ),
  Appointment(
    doctorName: 'Dr. Michael Wilson',
    patientName: 'Mary Clark',
    appointmentDate: DateTime(2025, 3, 15, 16, 45),
    doctorPhoto: 'assets/human1.jpg',
  ),
];
