#ifndef Data_h
#define Data_h

#include "Arduino.h"

class Data{

    private:
        int light;
        int temperature;
        int humidity;
        int waterLevel;
        int soilHumidity;
        bool trigger;

        int thresholdLight;
        int thresholdTemperature;
        int thresholdHumidity;
        int thresholdWaterLevel;
        int thresholdSoilHumidity;

    public:
        Data();

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

        bool checkNeedWater();
        void resetData();
    };

#endif