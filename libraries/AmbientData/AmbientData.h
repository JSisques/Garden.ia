#ifndef AmbientData_h
#define AmbientData_h

#include "Arduino.h"
#include "TemperatureSensor.h"

class AmbientData{

    private:
        String name;

        int light;
        float temperature;
        float humidity;
        float thermalTemperature;

        int thresholdLight;
        int thresholdTemperature;
        int thresholdHumidity;
        int thresholdThermalTemperature;

        TemperatureSensor temperatureSensor;

    public:
        AmbientData();
        AmbientData(String name, TemperatureSensor ts);
        
        void setName(String name);
        void setLight(int light);
        void setTemperature(float temperature);
        void setHumidity(float humidity);
        void setThermalTemperature(float thermalTemperature);
        void setThresholdLight(int thresholdLight);
        void setThresholdTemperature(int thresholdTemperature);
        void setThresholdHumidity(int thresholdHumidity);
        void setThresholdThermalTemperature(float thresholdThermalTemperature);
        void setTemperatureSensor(TemperatureSensor temperatureSensor);

        String getName();
        int getLight();
        float getTemperature();
        float getHumidity();
        float getThermalTemperature();
        int getThresholdLight();
        float getThresholdTemperature();
        float getThresholdHumidity();
        float getThresholdThermalTemperature();
        TemperatureSensor getTemperatureSensor();

        void resetAmbientData();
    };

#endif