#ifndef PowerSave_h
#define PowerSave_h

#include "Arduino.h"
#include "LowPower.h"

class PowerSave{

    private:


    public:
        PowerSave();

        void sleep(int seconds);
    };

#endif