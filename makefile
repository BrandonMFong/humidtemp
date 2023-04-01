## 
## author: Brando
## 3/31/23
##
## https://arduino.github.io/arduino-cli/0.20/library-specification/
##

CLI := arduino-cli
DEV := /dev/ttyUSB0
BOARD := esp8266:esp8266:nodemcuv2

install:
	$(CLI) lib install "DHT sensor library"

build:
	$(CLI) compile --fqbn $(BOARD) .

flash: build
	$(CLI) upload --port $(DEV) --fqbn $(BOARD) .

monitor:
	$(CLI) monitor -p $(DEV) -c baudrate=9600

