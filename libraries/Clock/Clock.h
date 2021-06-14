#ifndef Clock_h
#define Clock_h

#include "Arduino.h"

class Clock{

    private:
        int hour;

    public:
        Clock();

        void setHour(int hour);

        int getHour();

        String increaseTime(int hours);
        
    };

#endif