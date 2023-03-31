
CLI := arduino-cli
DEV := /dev/ttyUSB0
BOARD := esp8266:esp8266:nodemcuv2

build:
	$(CLI) compile --fqbn $(BOARD) .
	$(CLI) upload --port $(DEV) --fqbn $(BOARD) .

