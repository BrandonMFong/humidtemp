/**
https://ericslenk.com/posts/getting-started-with-the-nodemcu-esp8266-and-arduino-cli
*/

#include <DHTesp.h>

DHTesp dht;

void setup() {
	Serial.begin(9600);
	pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
	Serial.print("NO FORMAT\n");
}

