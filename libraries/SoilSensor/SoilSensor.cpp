#include "Arduino.h"
#include "SoilSensor.h"

SoilSensor::SoilSensor(){
    
}

SoilSensor::SoilSensor(int inputPin, int inputMaxValue, int inputMinValue){
    pin = inputPin;
    maxValue = inputMaxValue;
    minValue = inputMinValue;
}

void SoilSensor::setPin(int inputPin){
    pin = inputPin;
}

void SoilSensor::setHumidity(int inputHumidity){
    humidity = inputHumidity;
}

void SoilSensor::setMaxValue(int inputMaxValue){
    maxValue = inputMaxValue;
}

void SoilSensor::setMinValue(int inputMinValue){
    minValue = inputMinValue;
}

int SoilSensor::getPin(){
    return pin;
}

int SoilSensor::getHumidity(){
    return humidity;
}

int SoilSensor::getMaxValue(){
    return maxValue;
}

int SoilSensor::getMinValue(){
    return minValue;
}

int SoilSensor::checkHumidity(){
    humidity = analogRead(pin);

    humidity = humidity * 100 / maxValue;

    return humidity;

}