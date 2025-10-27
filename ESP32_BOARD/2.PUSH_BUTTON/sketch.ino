int INPUT_BUTTON_PIN = 2;
void setup()
{
  pinMode(INPUT_BUTTON_PIN, INPUT);
  Serial.begin(9600); // for printing values to console
}

void loop()
{
  int buttonVal = digitalRead(INPUT_BUTTON_PIN); // returns 0 (LOW) or 1 (HIGH)
  Serial.println(buttonVal);                     // print value to Serial
  delay(5);                                      // small delay
}