#include "Arduino.h"
#include "TemperatureSensor.h"
#include "AmbientData.h"

AmbientData::AmbientData(){
    thresholdLight = 20;
    thresholdTemperature = 20;
    thresholdHumidity = 50;
    thresholdThermalTemperature = 20;
}

AmbientData::AmbientData(String inputName, TemperatureSensor ts){
    name = inputName;
    temperatureSensor = ts;
}

void AmbientData::setLight(int inputLight){
    light = inputLight;
}

void AmbientData::setTemperature(float inputTemperature){
    temperature = inputTemperature;
}

void AmbientData::setHumidity(float inputHumidity){
    humidity = inputHumidity;
}

void AmbientData::setThermalTemperature(float inputThermalTemperature){
    thermalTemperature = inputThermalTemperature;
}


void AmbientData::setThresholdLight(int inputThresholdLight){
    thresholdLight = inputThresholdLight;
}

void AmbientData::setThresholdTemperature(float inputThresholdTemperature){
    thresholdTemperature = inputThresholdTemperature;
}

void AmbientData::setThresholdHumidity(float inputThresholdHumidity){
    thresholdSoilHumidity = inputThresholdHumidity;
}

void AmbientData::setThresholdThermalTemperature(float inputThresholdThermalTemperature){
    thresholdThermalTemperature = inputThresholdThermalTemperature;
}

int AmbientData::getLight(){
    return light;    
}

float AmbientData::getTemperature(){
    return temperature;    
}

float AmbientData::getHumidity(){
    return humidity;
}

float AmbientData::getThermalTemperature(){
    return thermalTemperature;
}

int AmbientData::getThresholdLight(){
    return thresholdLight;
}

float AmbientData::getThresholdTemperature(){
    return thresholdTemperature;
}

float AmbientData::getThresholdHumidity(){
    return thresholdHumidity;
}

float AmbientData::getThermalTemperature(){
    return thermalTemperature;
}

void AmbientData::resetAmbientData(){

    temperature = 0;
    humidity = 0;
    light = 0;
    thermalTemperature = 0;

}