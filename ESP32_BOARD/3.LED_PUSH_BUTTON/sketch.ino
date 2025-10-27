int pod;

void setup() {
  pinMode(25, INPUT);  // LED pin
  pinMode(5, OUTPUT);    // Button pin, no pull-up
}

void loop() {
  pod = digitalRead(25); // Read button

  if (pod == HIGH) {    // Button pressed
    digitalWrite(5, HIGH);
  } else {
    digitalWrite(5, LOW);
  }

  delay(50);
}
