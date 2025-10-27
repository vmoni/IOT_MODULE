#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2); 
int pot_value;

void setup() {
  pinMode(34, INPUT);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Potentiometer");
}

void loop() {
  pot_value = analogRead(34);              
  float voltage = pot_value * (3.3 / 4095);

  lcd.setCursor(0, 1);
  lcd.print("Volt: ");
  lcd.print(voltage, 2);                
  lcd.print("V   ");                      

  delay(500);                         
}