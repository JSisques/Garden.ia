#include <PowerSave.h>
#include <WaterPump.h>
#include <WaterLevel.h>
#include <LightSensor.h>
#include <Data.h>

PowerSave ps;

WaterPump wp1("Bomba 1", 11);
WaterPump wp2("Bomba 2", 12);
WaterPump wp3("Bomba 3", 13);

WaterLevel wl("Water level sensor", 10);
LightSensor ls("Light sensor", 9);

SoilSensor ss1("Soil sensor 1", 10);
SoilSensor ss2("Soil sensor 2", 10);
SoilSensor ss3("Soil sensor 3", 10);

Data d1("Data 1", wp1, ls, ss1);
Data d2("Data 2", wp2, ls, ss2);
Data d3("Data 3", wp3, ls, ss3);

void setup() {
}

void loop() {

  //Check light
  d1.setLight(ls.checkLight());
  d2.setLight(ls.checkLight());
  d3.setLight(ls.checkLight());

  //Check soil humidity
  d1.setWaterLevel(d1.getSoilSensor().checkHumidity());
  d2.setWaterLevel(d2.getSoilSensor().checkHumidity());
  d3.setWaterLevel(d3.getSoilSensor().checkHumidity());
  
  //Check water level
  d1.setWaterLevel(wl.checkWaterLevel());
  d2.setWaterLevel(wl.checkWaterLevel());
  d3.setWaterLevel(wl.checkWaterLevel());

  //Check if need water
  d1.getWaterPump().water(d1.checkNeedWater());
  d2.getWaterPump().water(d2.checkNeedWater());
  d3.getWaterPump().water(d3.checkNeedWater());

  //Sleep 1 hour
  ps.sleep(3600);

}
