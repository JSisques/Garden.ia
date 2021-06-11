#ifndef CustomSerial_h
#define CustomSerial_h

#include "Arduino.h"

class CustomSerial{

    private:
        int baud;

    public:
        CustomSerial(int baud);

        void setBaud(int baud);

        int getBaud();

        void printMessage(String message);
    };

#endif