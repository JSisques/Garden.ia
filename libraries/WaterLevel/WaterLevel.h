#ifndef WaterLevel_h
#define WaterLevel_h

#include "Arduino.h"

class WaterLevel{

    private:
        int pin;
        bool trigger;

    public:
        WaterLevel(int pin);

        void setPin(int pin);
        void setTrigger(bool trigger);

        int getPin();
        bool getTrigger();

        bool checkWaterLevel();
    };

#endif