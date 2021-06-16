#include <PowerSave.h>
#include <WaterPump.h>
#include <WaterLevel.h>
#include <LightSensor.h>
#include <TemperatureSensor.h>
#include <AmbientData.h>
#include <Data.h>

PowerSave ps;

TemperatureSensor ts("Temperature sensor", 10);
LightSensor ls("Light sensor", 9);
WaterLevel wl("Water level sensor", 10);
AmbientData ad("Ambient data", ts, ls, wl);

WaterPump wp1("Pump 1", 11);
WaterPump wp2("Pump 2", 12);
WaterPump wp3("Pump 3", 13);

SoilSensor ss1("Soil sensor 1", 10);
SoilSensor ss2("Soil sensor 2", 10);
SoilSensor ss3("Soil sensor 3", 10);

Data d1("Data 1", wp1, ss1);
Data d2("Data 2", wp2, ss2);
Data d3("Data 3", wp3, ss3);

void setup() {
}

void loop() {

  //Check air temperature
  ad.checkTemperature();

  //Check air humidity
  ad.checkHumidity();

  //Check thermal sensation
  ad.checkThermalSensation();

  //Check light
  ad.checkLight();

  //Check water level
  ad.checkWaterLevel();

  //Check soil humidity
  d1.checkSoilHumidity();
  d2.checkSoilHumidity();
  d3.checkSoilHumidity();

  //Check if need water
  d1.water(d1.checkNeedWater(ad.getLight(), ad.getThresholdLight()));
  d2.water(d2.checkNeedWater(ad.getLight(), ad.getThresholdLight()));
  d3.water(d3.checkNeedWater(ad.getLight(), ad.getThresholdLight()));

  //Sleep 1 hour
  ps.sleep(3600);

}
