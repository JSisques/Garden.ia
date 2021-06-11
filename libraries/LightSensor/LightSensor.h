#ifndef LightSensor_h
#define LightSensor_h

#include "Arduino.h"

class LightSensor{

    private:
        int pin;
        int light;

    public:
        LightSensor(int pin);

        void setPin(int pin);
        void setLight(int light);

        int getPin();
        int getLight();

        void checkLight(); //Comprobamos la luminosidad y la metemos en el atributo
    };

#endif