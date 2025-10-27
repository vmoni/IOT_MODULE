unsigned long duration;
float distance;

void setup() {
  Serial.begin(115200);
  Serial.println("Ultrasonic Distance Sensor");
  pinMode(26, OUTPUT);  // TRIG
  pinMode(25, INPUT);   // ECHO
}

void loop() {
  // Send a clean 10 µs pulse
  digitalWrite(26, LOW);
  delayMicroseconds(2);
  digitalWrite(26, HIGH);
  delayMicroseconds(10);
  digitalWrite(26, LOW);

  // Read the echo pulse width
  duration = pulseIn(25, HIGH);

  // Calculate distance (speed of sound = 0.0343 cm/µs)
  distance = (duration * 0.0343) / 2;

  // Display result
  Serial.print("Distance: ");
  Serial.print(distance, 2);  // two decimal places
  Serial.println(" cm");

  delay(500);
}