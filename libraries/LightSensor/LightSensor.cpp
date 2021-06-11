#include "Arduino.h"
#include "LightSensor.h"

LightSensor::LightSensor(int inputPin){
    pin = inputPin;
}

void LightSensor::setPin(int inputPin){
    pin = inputPin;
}

void LightSensor::setLight(int inputLight){
    light = inputLight;
}

int LightSensor::getPin(){
    return pin;
}

int LightSensor::getLight(){
    return light;
}

void LightSensor::checkLight(){
    light = analogRead(pin);
}