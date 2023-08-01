punchkin
punchkin#4145

AMAAN19 — 07/20/2023 11:14 PM
without using test bench
punchkin — 07/20/2023 11:15 PM
then how would graph be simulated?
without that
test file
AMAAN19 — 07/20/2023 11:15 PM
itll simulate
punchkin — 07/20/2023 11:15 PM
when do we use this one
AMAAN19 — 07/20/2023 11:16 PM
both have same output
punchkin — 07/20/2023 11:16 PM
okie
AMAAN19 — 07/20/2023 11:16 PM
you can either write in behavioral with if else or write in test bench but in that jus that <=
operator
punchkin — 07/20/2023 11:16 PM
kuch kia aur?
tabse
AMAAN19 — 07/20/2023 11:17 PM
dinner
punchkin — 07/20/2023 11:17 PM
abi b?
AMAAN19 — 07/20/2023 11:17 PM
whatdidYOUdo
punchkin — 07/20/2023 11:17 PM
what operator?
AMAAN19 — 07/20/2023 11:17 PM
wo na a<='0';
punchkin — 07/20/2023 11:17 PM
watched trash stuff on youtube
AMAAN19 — 07/20/2023 11:17 PM
b<='0';
punchkin — 07/20/2023 11:17 PM
im not taking this seriously and idk why
AMAAN19 — 07/20/2023 11:18 PM
agar haris hua na
punchkin — 07/20/2023 11:18 PM
ttoh yehi operator uss mai bhi use hota haina
AMAAN19 — 07/20/2023 11:18 PM
imse boht sare tarku se karsakte he simulate
tu cpgt ko bol alternatives to if else
without using if else what other ways we can give inputs
signal
punchkin — 07/20/2023 11:19 PM
suhail sir poochte hai
AMAAN19 — 07/20/2023 11:19 PM
kisne bola
punchkin — 07/20/2023 11:19 PM
what should we study rn?
AMAAN19 — 07/20/2023 11:20 PM
wtf
punchkin — 07/20/2023 11:20 PM
yeah saubiya
AMAAN19 — 07/20/2023 11:20 PM
logisim use hua he?
punchkin — 07/20/2023 11:20 PM
is he a tough shot?
idk
AMAAN19 — 07/20/2023 11:20 PM
logisim ka video dekhte he
aur
vdhl to hoaya
bas uske theory karnege wo datatypes
etc
punchkin — 07/20/2023 11:21 PM
maine nahi kia abi vhdl
muje abi b install ho raha hai
AMAAN19 — 07/20/2023 11:21 PM
fir
punchkin — 07/20/2023 11:21 PM
muje ek baar woh karna hai
AMAAN19 — 07/20/2023 11:21 PM
stacy i jus showed you
punchkin — 07/20/2023 11:21 PM
but i didnt do it myself
AMAAN19 — 07/20/2023 11:22 PM
basics karne he ab dsd ke
punchkin — 07/20/2023 11:22 PM
yeah
AMAAN19 — 07/23/2023 7:48 PM
aaja oye
AMAAN19 — 07/24/2023 8:22 PM
@punchkin
AMAAN19 — 07/30/2023 11:40 PM
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
﻿
AMAAN19
amaan19
