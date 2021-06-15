#ifndef Data_h
#define Data_h

#include "Arduino.h"
#include "WaterPump.h"
#include "SoilSensor.h"

class Data{

    private:
        String name;

        int soilHumidity;
        bool trigger;

        int thresholdSoilHumidity;

        WaterPump waterPump;
        SoilSensor soilSensor;

    public:
        Data();
        Data(String name, WaterPump wp, SoilSensor ss);
        
        void setName(String name);
        void setSoilHumidity(int soilHumidity);
        void setThresholdSoilHumidity(int thresholdSoilHumidity);
        void setTrigger(bool trigger);
        void setWaterPump(WaterPump waterPump);
        void setSoilSensor(SoilSensor soilSensor);

        String getName();
        int getSoilHumidity();
        int getThresholdSoilHumidity();
        bool getTrigger();
        WaterPump getWaterPump();
        SoilSensor getSoilSensor();

        bool checkNeedWater(int light, int thresholdLight);
        void resetData();
        int checkSoilHumidity();
        void water(bool trigger);
    };

#endif