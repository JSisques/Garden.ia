#include "Arduino.h"
#include "SoilSensor.h"

SoilSensor::SoilSensor(){
    
}

SoilSensor::SoilSensor(String inputName, int inputPin){
    name = inputName;
    pin = inputPin;
    maxValue = 1024;
    minValue = 0;
}

void SoilSensor::setName(String inputName){
    name = inputName;
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

String SoilSensor::getName(){
    return name;
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