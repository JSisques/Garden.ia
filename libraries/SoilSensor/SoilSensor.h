#ifndef SoilSensor_h
#define SoilSensor_h

#include "Arduino.h"

class SoilSensor{

    private:
        int pin;
        int humidity;
        int maxValue;
        int minValue;

    public:
        SoilSensor();
        SoilSensor(int pin, int maxValue, int minValue);

        void setPin(int pin);
        void setHumidity(int humidity);
        void setMaxValue(int maxValue);
        void setMinValue(int minValue);

        int getPin();
        int getHumidity();
        int getMaxValue();
        int getMinValue();

        int checkHumidity();
    };

#endif