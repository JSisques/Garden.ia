#include "Arduino.h"
#include "LightSensor.h"

LightSensor::LightSensor(String inputPin){
    pin = inputPin;
}

void LightSensor::setPin(String inputPin){
    pin = inputPin;
}

void LightSensor::setLight(int inputLight){
    light = inputLight;
}

String LightSensor::getPin(){
    return pin;
}

int LightSensor::getLight(){
    return light;
}

void LightSensor::checkLight(){
    light = analogRead(pin);
}