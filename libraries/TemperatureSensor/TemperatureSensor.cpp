#include "Arduino.h"
#include "TemperatureSensor.h"
#include "DHT.h"

TemperatureSensor::TemperatureSensor(){

}

TemperatureSensor::TemperatureSensor(String inputName, float inputPin){
    name = inputName;
    pin = inputPin;

    dht = DHT(pin, DHT11);
}

void TemperatureSensor::setDht(DHT inputDht){
    dht = inputDht;
}

void TemperatureSensor::setName(String inputName){
    name = inputName;
}

void TemperatureSensor::setPin(float inputPin){
    pin = inputPin;
}

void TemperatureSensor::setTemperature(float inputTemperature){
    temperature = inputTemperature;
}

void TemperatureSensor::setHumidity(float inputHumidity){
    humidity = inputHumidity;
}

void TemperatureSensor::setThermalSensation(float inputThermalSensation){
    thermalSensation = inputThermalSensation;
}

DHT TemperatureSensor::getDht(){
    return dht;
}

String TemperatureSensor::getName(){
    return name;
}

float TemperatureSensor::getPin(){
    return pin;
}

float TemperatureSensor::getTemperature(){
    return temperature;
}

float TemperatureSensor::getHumidity(){
    return humidity;
}

float TemperatureSensor::getThermalSensation(){
    return thermalSensation;
}

float TemperatureSensor::checkTemperature(){
    temperature = dht.readTemperature();
    return temperature;
}

float TemperatureSensor::checkHumidity(){
    humidity = dht.readHumidity();
    return humidity;
}

float TemperatureSensor::checkThermalSensation(){
    float response = 0;

    float t = checkTemperature();
    float h = checkHumidity();

    thermalSensation = dht.computeHeatIndex(t, h, false);

    return thermalSensation;
}

