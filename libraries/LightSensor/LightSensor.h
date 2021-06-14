#ifndef LightSensor_h
#define LightSensor_h

#include "Arduino.h"

class LightSensor{

    private:
        int pin;
        int light;
        int maxValue;
        int minValue;

    public:
        LightSensor();
        LightSensor(int pin);

        void setPin(int pin);
        void setLight(int light);
        void setMaxValue(int maxValue);
        void setMinValue(int minValue);

        int getPin();
        int getLight();
        int getMaxValue();
        int getMinValue();

        int checkLight();
    };

#endif