/**
https://ericslenk.com/posts/getting-started-with-the-nodemcu-esp8266-and-arduino-cli
*/

#include "DHT.h"

DHT dht(5,DHT11);

void setup() {
	delay(200);
	Serial.begin(9600);
	dht.begin();
	delay(1000);
}

void loop() {
	delay(5000);
	Serial.print("Temperature in F: ");
	Serial.println(dht.convertCtoF(dht.readTemperature()));
	Serial.print("Humidity in C: ");
	Serial.println((dht.readHumidity()));
	delay(1000);
}

