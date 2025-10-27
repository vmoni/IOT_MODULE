#include <LiquidCrystal.h>
LiquidCrystal LCD(19,18,17,16,4,0);//(RS,EN,D4,D5,D6,D7) 4 BIT MODE
                   //(RS,EN,D0,D1,D2,D3,D4,D5,D6,D7) 4 BIT MODE
int pot_value;

void setup() {
  pinMode(25, INPUT);
  LCD.begin(16,2);
  LCD.print("potentiometer");
  // put your setup code here, to run once:
 
}

void loop() {

  pot_value=analogRead(25);
  LCD.setCursor(0,1);
  LCD.print(pot_value);
  // put your main code here, to run repeatedly:
  delay(500); // this speeds up the simulation
}
