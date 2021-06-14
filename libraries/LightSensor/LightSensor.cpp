#include "Arduino.h"
#include "LightSensor.h"

LightSensor::LightSensor(){
    
}

LightSensor::LightSensor(int inputPin){
    pin = inputPin;
}

void LightSensor::setPin(int inputPin){
    pin = inputPin;
}

void LightSensor::setLight(int inputLight){
    light = inputLight;
}

void LightSensor::setMaxValue(int inputMaxValue){
    maxValue = inputMaxValue;
}

void LightSensor::setMinValue(int inputMinValue){
    minValue = inputMinValue;
}

int LightSensor::getPin(){
    return pin;
}

int LightSensor::getLight(){
    return light;
}

int LightSensor::getMaxValue(){
    return maxValue;
}

int LightSensor::getMinValue(){
    return minValue;
}

int LightSensor::checkLight(){
    light = analogRead(pin);

    light = light * 100 / maxValue;

    return light;
}