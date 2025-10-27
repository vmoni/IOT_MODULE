void setup() {
  // put your setup code here, to run once:
  pinMode(23, OUTPUT);
}

void loop() {
 
  digitalWrite(23, HIGH);//LED on
  delay(500); 
  digitalWrite(23, LOW);//LED off
  delay(500); 
}
