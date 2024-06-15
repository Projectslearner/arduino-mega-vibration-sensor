/*
    Project name : Vibration Sensor
    Modified Date: 15-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-vibration-sensor
*/

const int vibrationPin = 2; // Digital pin connected to vibration sensor OUT pin

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(vibrationPin, INPUT); // Set vibration sensor pin as INPUT
}

void loop() {
  int vibrationState = digitalRead(vibrationPin); // Read vibration sensor state

  // Check if vibration is detected
  if (vibrationState == HIGH) {
    Serial.println("Vibration detected!");
  }

  delay(100); // Add a small delay to debounce the sensor
}
