int digital_value;
float analog_value;
void setup() {
  // put your setup code here, to run once:
  pinMode(32, INPUT);
  Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
  // this speeds up the simulation
  digital_value = analogRead(32);
  Serial.print("The digital value is :");
  Serial.println(digital_value);
  Serial.print("The analog value is :");
  analog_value= (digital_value * 5)/4095;
  Serial.print(analog_value);
  Serial.println("V");
  delay(500);


 
}
