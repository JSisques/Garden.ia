#ifndef Data_h
#define Data_h

#include "Arduino.h"
#include "WaterPump.h"
#include "SoilSensor.h"

class Data{

    private:
        String name;

        int humidity;
        int waterLevel;
        int soilHumidity;
        bool trigger;

        int thresholdTemperature;
        int thresholdHumidity;
        int thresholdWaterLevel;
        int thresholdSoilHumidity;

        WaterPump waterPump;
        LightSensor lightSensor;
        SoilSensor soilSensor;

    public:
        Data();
        Data(String name, WaterPump wp, LightSensor ls, SoilSensor ss);
        
        void setName(String name);
        void setLight(int light);
        void setTemperature(int temperature);
        void setHumidity(int humidity);
        void setWaterLevel(int waterLevel);
        void setSoilHumidity(int soilHumidity);
        void setThresholdLight(int thresholdLight);
        void setThresholdTemperature(int thresholdTemperature);
        void setThresholdHumidity(int thresholdHumidity);
        void setThresholdWaterLevel(int thresholdWaterLevel);
        void setThresholdSoilHumidity(int thresholdSoilHumidity);
        void setTrigger(bool trigger);
        void setWaterPump(WaterPump waterPump);
        void setLightSensor(LightSensor lightSensor);
        void setSoilSensor(SoilSensor soilSensor);

        String getName();
        int getLight();
        int getTemperature();
        int getHumidity();
        int getWaterLevel();
        int getSoilHumidity();
        int getThresholdLight();
        int getThresholdTemperature();
        int getThresholdHumidity();
        int getThresholdWaterLevel();
        int getThresholdSoilHumidity();
        bool getTrigger();
        WaterPump getWaterPump();
        LightSensor getLightSensor();
        SoilSensor getSoilSensor();

        bool checkNeedWater();
        void resetData();
    };

#endif