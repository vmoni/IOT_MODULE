// LED pins
int led1 = 0;
int led2 = 2;
int led3 = 15;

// Button pins
int button1 = 32;
int button2 = 33;
int button3 = 25;

void setup() {
  // Initialize LED pins as OUTPUT
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  // Initialize button pins as INPUT
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
}

void loop() {
  // Button 1 pressed → 3 LEDs ON
  if (digitalRead(button1) == 1) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
  }
  // Button 2 pressed → 2 LEDs ON
  else if (digitalRead(button2) == 1) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
  }
  // Button 3 pressed → last LED ON
  else if (digitalRead(button3) == 1) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
  }
  // No button pressed → all LEDs OFF
  else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }

  delay(50); // small delay to stabilize
}
