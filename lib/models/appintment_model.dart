// lib/models/appointment_model.dart

class Appointment {
  final String doctorName;
  final String patientName;
  final DateTime appointmentDate;
  final String doctorPhoto;

  Appointment({
    required this.doctorName,
    required this.patientName,
    required this.appointmentDate,
    required this.doctorPhoto,
  });
}
