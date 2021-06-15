#ifndef TemperatureSensor_h
#define TemperatureSensor_h

#include "Arduino.h"
#include "DHT.h"

class TemperatureSensor{

    private:
        DHT dht;

        String name;
        float pin;
        float temperature;
        float humidity;
        float thermalSensation;

    public:
        TemperatureSensor();
        TemperatureSensor(String name, float pin);

        void setDht(DHT dht);
        void setName(String name);
        void setPin(float pin);
        void setTemperature(float temperature);
        void setHumidity(float humidity);
        void setThermalSensation(float thermalSensation);

        DHT getDht();
        String getName();
        float getPin();
        float getTemperature();
        float getHumidity();
        float getThermalSensation();

        float checkTemperature();
        float checkHumidity();
        float checkThermalSensation();
    };

#endif