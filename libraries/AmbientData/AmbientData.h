#ifndef AmbientData_h
#define AmbientData_h

#include "Arduino.h"
#include "LightSensor.h"
#include "TemperatureSensor.h"

class AmbientData{

    private:
        String name;

        int light;
        float temperature;
        float humidity;
        float thermalSensation;

        int thresholdLight;
        int thresholdTemperature;
        int thresholdHumidity;
        int thresholdThermalSensation;

        TemperatureSensor temperatureSensor;
        LightSensor lightSensor;

    public:
        AmbientData();
        AmbientData(String name, TemperatureSensor ts, LightSensor ls);
        
        void setName(String name);
        void setLight(int light);
        void setTemperature(float temperature);
        void setHumidity(float humidity);
        void setThermalSensation(float thermalSensation);
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
    };

#endif