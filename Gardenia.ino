#include <PowerSave.h>
#include <WaterLevel.h>
#include <CustomSerial.h>
#include <LightSensor.h>

CustomSerial cs(115200);
PowerSave ps;

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  ps.sleep(60);
}
