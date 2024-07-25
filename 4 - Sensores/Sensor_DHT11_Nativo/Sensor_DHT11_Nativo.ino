#include <DHT11.h>

const int pinoDHT = 15;
int       temperatura = 0,
          umidade = 0;

DHT11 dht11(pinoDHT);

void setup()
{  
  Serial.begin(115200);
}

void loop()
{  
   temperatura = dht11.readTemperature();
   umidade = dht11.readHumidity();
	
    Serial.printf("Temperatura: %d *C \n", temperatura);
    Serial.printf("Umidade: %d %% \n", umidade);
   
    delay(1000);
}