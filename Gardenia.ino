#include <PowerSave.h>
#include <WaterPump.h>
#include <WaterLevel.h>
#include <LightSensor.h>
#include <Data.h>

WaterPump wp1("Maceta 1", 11);
WaterPump wp2("Maceta 2", 12);
WaterPump wp3("Maceta 3", 13);
WaterLevel wl(10);
LightSensor ls(9);
PowerSave ps;
Data data;

void setup() {
}

void loop() {

  //Check light
  data.setLight(ls.checkLight());

  //Check soil humidity
  
  //Check water level
  data.setWaterLevel(wl.checkWaterLevel());

  //Water (optional)
  

  //Sleep 1 hour
  ps.sleep(3600);

}
