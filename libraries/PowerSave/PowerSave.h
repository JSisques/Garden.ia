#ifndef PowerSave_h
#define PowerSave_h

#include "Arduino.h"
#include "LowPower.h"

class PowerSave{

    private:


    public:
        PowerSave();

        void sleep1S();
        void sleep2S();
        void sleep4S();
        void sleep8S();
    };

#endif