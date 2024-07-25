#include <Arduino.h>

const int PinLDR = 15;
int ValueLDR = 0;

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  ValueLDR = analogRead(PinLDR);  
  ValueLDR = map(ValueLDR, 4095, 0, 0, 100); //ou para melhor rendimento map(ValueLDR, 4095, 2500, 0, 100);
  Serial.print(ValueLDR);
  Serial.println(" %");
  delay(250);
}