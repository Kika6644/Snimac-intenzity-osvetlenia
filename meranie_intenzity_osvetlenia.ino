#include <Wire.h>
#include <BH1750.h>

BH1750 meracSvetla;

void setup(){
  Serial.begin(9600);

  Wire.begin();
  
  meracSvetla.begin();

  Serial.println(F("BH1750 Test begin"));
}

void loop() {
  float lux = meracSvetla.readLightLevel();
  Serial.print("Aktualna intenzita osvetlenia: ");
  Serial.print(lux);
  Serial.println(" lx");
  delay(1000);
}