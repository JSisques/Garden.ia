#include <CustomSerial.h>
#include <LightSensor.h>

LightSensor lightSensor(A3);
CustomSerial customSerial(9600);

void setup() {
}

void loop() {
  customSerial.printMessage("Holi");
}
