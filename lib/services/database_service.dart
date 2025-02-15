import 'package:mongo_dart/mongo_dart.dart';
import 'dart:convert';
import 'dart:io';

class DatabaseService {
  static late Db db;
  static late DbCollection collection;

  static Future<void> connect() async {
    final file = File('config/secrets.json');
    final contents = await file.readAsString();
    final jsonData = jsonDecode(contents);

    final mongoUrl = jsonData['MONGO_URL'];

    // const String mongoUrl = "mongodb+srv://username:password@cluster.mongodb.net/db_name";
    const String collectionName = "Mood";

    db = await Db.create(mongoUrl);
    await db.open();
    collection = db.collection(collectionName);
    print("Connected to MongoDB");
  }

  static Future<void> insertData(Map<String, dynamic> data) async {
    await collection.insertOne(data);
    print("Data inserted successfully!");
  }
}
