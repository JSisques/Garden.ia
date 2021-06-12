#include <PowerSave.h>
#include <WaterLevel.h>
#include <CustomSerial.h>
#include <LightSensor.h>

PowerSave powerSave;

void setup() {
}

void loop() {
    powerSave.sleep8S();
}
