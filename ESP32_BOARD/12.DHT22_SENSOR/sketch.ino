#include <DHT.h>
DHT dht(25,DHT22);//(PIN CONFIGYRED, WHAT IS IC NO)
float humidity,temperature;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Humidty and temperature is");
  dht.begin();
}

void loop() {
  humidity = dht.readHumidity();
  temperature=dht.readTemperature();
  if(isnan(humidity)||isnan(temperature))
  {
    Serial.println("NO DATA");
    return;
  }
  Serial.println("the temperature is ");
  Serial.print(temperature);
  Serial.println("C");
  Serial.println("the humidity is ");
  Serial.print(humidity);
  Serial.println("%");
  delay(500);

  
  delay(10); // this speeds up the simulation
}
