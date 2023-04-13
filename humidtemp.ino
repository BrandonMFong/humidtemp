/**
author: Brando
date: 4/4/23

https://ericslenk.com/posts/getting-started-with-the-nodemcu-esp8266-and-arduino-cli
*/

#include "DHT.h"
#include "localwifi.h"
#include <ESP8266WiFi.h>

DHT dht(5,DHT11);
int port = 8888;
WiFiServer server(port);

void setup() {
	delay(200);
	Serial.begin(9600);
	dht.begin();
	delay(1000);

	WiFi.mode(WIFI_STA);
	WiFi.begin(ssid, password);

	int led = 4;
	pinMode(led, OUTPUT);
	digitalWrite(led, HIGH);

	// Wait for connection
	Serial.println("Connecting to Wifi");
	while (WiFi.status() != WL_CONNECTED) {
		delay(500);
		Serial.print(".");
		delay(500);
	}
	digitalWrite(led, LOW);

	Serial.println();
	server.begin();
	Serial.print("IP address: ");
	Serial.println(WiFi.localIP());  
	Serial.print("Port: ");
	Serial.println(port);
}

void loop() {
	WiFiClient client = server.available();
	if (client && client.connected()) {
		size_t size = 2 << 6;
		char buf[size];
		snprintf(buf, size, "{\"temp\" : %.2f, \"humid\" : %.2f}", dht.readTemperature(), dht.readHumidity());
		client.write(buf);
		Serial.print("Sent: ");
		Serial.println(buf);
		client.stop();
	}
}

