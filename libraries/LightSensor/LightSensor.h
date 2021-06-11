#ifndef LightSensor_h
#define LightSensor_h

#include "Arduino.h"

class LightSensor{

    private:
        int pin;
        int light;

    public:
        LightSensor(String pin);

        void setPin(String pin);
        void setLight(int light);

        String getPin();
        int getLight();

        void checkLight(); //Comprobamos la luminosidad y la metemos en el atributo
    };

#endif