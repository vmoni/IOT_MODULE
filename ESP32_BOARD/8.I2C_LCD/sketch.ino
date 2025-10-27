#include <LiquidCrystal_I2C.h>
#include <Wire.h>
LiquidCrystal_I2C LCD(0x27,16,2);//(I2C Address,columns,rows)

void setup()
{
 LCD.init();
 LCD.backlight();
 LCD.setCursor(0,0);
 LCD.print("I2C");

}

void loop() {
  LCD.setCursor(0,1);
  LCD.print("data");
  
  delay(10); // this speeds up the simulation
}
