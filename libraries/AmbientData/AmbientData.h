#ifndef AmbientData_h
#define AmbientData_h

#include "Arduino.h"
#include "LightSensor.h"
#include "WaterLevel.h"
#include "TemperatureSensor.h"

class AmbientData{

    private:
        String name;

        int light;
        float temperature;
        float humidity;
        float thermalSensation;
        bool waterLevel;
    
        int thresholdLight;
        int thresholdTemperature;
        int thresholdHumidity;
        int thresholdThermalSensation;

        TemperatureSensor temperatureSensor;
        LightSensor lightSensor;
        WaterLevel waterLevelSensor;

    public:
        AmbientData();
        AmbientData(String name, TemperatureSensor ts, LightSensor ls, WaterLevel wl);
        
        void setName(String name);
        void setLight(int light);
        void setTemperature(float temperature);
        void setHumidity(float humidity);
        void setThermalSensation(float thermalSensation);
        void setWaterLevel(bool waterLevel);
        void setThresholdLight(int thresholdLight);
        void setThresholdTemperature(float thresholdTemperature);
        void setThresholdHumidity(float thresholdHumidity);
        void setThresholdThermalSensation(float thresholdThermalSensation);
        void setTemperatureSensor(TemperatureSensor temperatureSensor);
        void setLightSensor(LightSensor lightSensor);

        String getName();
        int getLight();
        float getTemperature();
        float getHumidity();
        float getThermalSensation();
        bool getWaterLevel();
        int getThresholdLight();
        float getThresholdTemperature();
        float getThresholdHumidity();
        float getThresholdThermalSensation();
        TemperatureSensor getTemperatureSensor();
        LightSensor getLightSensor();

        void resetAmbientData();
        void checkAllData();
        int checkLight();
        float checkTemperature();
        float checkHumidity();
        float checkThermalSensation();
        bool checkWaterLevel();
    };

#endif