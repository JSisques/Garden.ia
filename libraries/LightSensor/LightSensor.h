#ifndef LightSensor_h
#define LightSensor_h

#include "Arduino.h"

class LightSensor{

    private:
        String name;
        int pin;
        int light;
        int maxValue;
        int minValue;

    public:
        LightSensor();
        LightSensor(String name, int pin);
        
        void setName(String name);
        void setPin(int pin);
        void setLight(int light);
        void setMaxValue(int maxValue);
        void setMinValue(int minValue);

        String getName();
        int getPin();
        int getLight();
        int getMaxValue();
        int getMinValue();

        int checkLight();
    };

#endif