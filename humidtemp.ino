/**
https://ericslenk.com/posts/getting-started-with-the-nodemcu-esp8266-and-arduino-cli
*/

void setup() {
	pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
	Serial.print("NO FORMAT");
}

