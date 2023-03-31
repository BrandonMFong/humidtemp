## setup
- `curl -fsSL https://raw.githubusercontent.com/arduino/arduino-cli/master/install.sh | sh`
	- Add result to your path or move it to a directory include in your path
- `arduino-cli config init`
- Add url: `http://arduino.esp8266.com/stable/package_esp8266com_index.json`
- `arduino-cli core update-index`
- `arduino-cli core install esp8266:esp8266`
- `make install`

## build
- `make flash`

## monitor esp8266 output
- `make monitor`

