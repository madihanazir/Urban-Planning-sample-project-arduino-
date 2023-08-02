#include <dht.h>        // Include library
#define outPin 8        // Defines pin number to which the sensor is connected
#define tonePin 6
#define LDRPin A0      
dht DHT;      
String tempera_humidity;// Creates a DHT object
char caracter;
void setup() {
  Serial.begin(9600);
}

void loop() {
  int readData = DHT.read11(outPin);

  float t = DHT.temperature;        // Read temperature
  float h = DHT.humidity;           // Read humidity

  Serial.print("Temperature = ");
  Serial.print(t);
  Serial.print("°C | ");
  Serial.print((t*9.0)/5.0+32.0);        // Convert celsius to fahrenheit
  Serial.println("°F ");
  Serial.print("Humidity = ");
  Serial.print(h);
  Serial.println("% ");
  Serial.print(analogRead(LDRPin));
  Serial.println("");
//if(Serial.available()) {
//  caracter = Serial.read();
//  
//    if(caracter == 'T'){Serial.println(t);}
//    if(caracter == 'H'){Serial.println(h);} 
//    if(caracter == 'D'){ 
//    tempera_humidity = (String) t + "," + (String)h;
//    Serial.println(tempera_humidity);
//    }
//  } 

  delay(2000); // wait two seconds
 { if(analogRead(LDRPin)<900 && analogRead(LDRPin)>300)
  tone(tonePin,500,200);
  }
}
