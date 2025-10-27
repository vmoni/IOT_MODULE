#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C LCD(0x27, 16, 2);
float duration, DISTANCE;

void setup() {
  pinMode(19, OUTPUT);  // Trig
  pinMode(18, INPUT);   // Echo
  LCD.init();
  LCD.backlight();
  LCD.setCursor(0, 0);
  LCD.print("Distance:");
}

void loop() {
  // Trigger the sensor
  digitalWrite(19, LOW);
  delay(2);
  digitalWrite(19, HIGH);
  delay(10);
  digitalWrite(19, LOW);

  // Read echo duration
  duration = pulseIn(18, HIGH);

  // Calculate distance in cm
  DISTANCE = (0.0343 * duration) / 2;

  // Display on LCD
  LCD.setCursor(0, 1);
  LCD.print(DISTANCE, 2);
  LCD.print(" cm  ");  // overwrite previous digits

  delay(100);  // small delay between readings
}
