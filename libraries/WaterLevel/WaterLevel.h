#ifndef WaterLevel_h
#define WaterLevel_h

#include "Arduino.h"

class WaterLevel{

    private:
        String name;
        int pin;
        bool trigger;

    public:
        WaterLevel();
        WaterLevel(String name, int pin);

        void setName(String name);
        void setPin(int pin);
        void setTrigger(bool trigger);

        String getName();
        int getPin();
        bool getTrigger();

        bool checkWaterLevel();
    };

#endif