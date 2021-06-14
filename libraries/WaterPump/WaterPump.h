#ifndef WaterPump_h
#define WaterPump_h

#include "Arduino.h"

class WaterPump{

    private:
        String name;
        int pin;

    public:
        WaterPump();
        WaterPump(String name, int pin);

        void setPin(int pin);
        void setName(String name);

        int getPin();
        String getName();

        void water(int seconds);
    };

#endif