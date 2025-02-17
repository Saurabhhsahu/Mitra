class Doctor {
  final String name;
  final String qualifications;
  final String photoAsset;
  final double? rating; // Make rating nullable
  final int? reviews; // Make reviews nullable

  Doctor({
    required this.name,
    required this.qualifications,
    required this.photoAsset,
    this.rating, // Now optional
    this.reviews, // Now optional
  });

  // Convert JSON to Doctor
  factory Doctor.fromJson(Map<String, dynamic> json) {
    return Doctor(
      name: json['name'],
      qualifications: json['qualifications'],
      photoAsset: json['photoAsset'],
      rating: json['rating'] as double?, // Handle null
      reviews: json['reviews'] as int?, // Handle null
    );
  }

  // Convert Doctor to JSON
  Map<String, dynamic> toJson() {
    return {
      'name': name,
      'qualifications': qualifications,
      'photoAsset': photoAsset,
      'rating': rating,
      'reviews': reviews,
    };
  }
}