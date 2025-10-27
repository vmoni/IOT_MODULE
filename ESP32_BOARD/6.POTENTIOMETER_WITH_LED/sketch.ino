int pot_value;

void setup() {
  pinMode(35, INPUT);
  pinMode(19, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(17, OUTPUT);
}

void loop() {
  pot_value = analogRead(35);

  if (pot_value >= 0 && pot_value < 1024) {
    // Low range: only LED 17 ON
    digitalWrite(19, LOW);
    digitalWrite(18, LOW);
    digitalWrite(17, HIGH);
  } 
  else if (pot_value >= 1024 && pot_value < 2048) {
    // Mid range: LED 18 and 17 ON
    digitalWrite(19, LOW);
    digitalWrite(18, HIGH);
    digitalWrite(17, HIGH);
  } 
  else {
    // High range: all LEDs ON
    digitalWrite(19, HIGH);
    digitalWrite(18, HIGH);
    digitalWrite(17, HIGH);
  }

  delay(100); // slows down loop for stability
}
