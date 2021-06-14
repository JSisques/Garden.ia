#include <PowerSave.h>
#include <WaterLevel.h>
#include <LightSensor.h>

LightSensor ls(9);
PowerSave ps;

void setup() {
}

void loop() {

  //Check light
  
  //Check soil humidity
  //Check water level
  //Water (optional)

  //Sleep 1 hour
  ps.sleep(3600);

}
