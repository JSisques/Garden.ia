#include "Arduino.h"
#include "Data.h"

Data::Data(){
    thresholdTemperature = 20;
    thresholdHumidity = 50;
    thresholdWaterLevel = 20;
    thresholdSoilHumidity = 50;
}

Data::Data(String inputName, WaterPump wp, LightSensor ls, SoilSensor ss){
    name = inputName;
    waterPump = wp;
    lightSensor = ls;
    soilSensor = ss;
}

void Data::setLight(int inputLight){
    light = inputLight;
}

void Data::setTemperature(int inputTemperature){
    temperature = inputTemperature;
}

void Data::setHumidity(int inputHumidity){
    humidity = inputHumidity;
}

void Data::setWaterLevel(int inputWaterLevel){
    waterLevel = inputWaterLevel;
}

void Data::setSoilHumidity(int inputSoilHumidity){
    soilHumidity = inputSoilHumidity;
}

void Data::setThresholdLight(int inputThresholdLight){
    thresholdLight = inputThresholdLight;
}

void Data::setThresholdTemperature(int inputThresholdTemperature){
    thresholdTemperature = inputThresholdTemperature;
}

void Data::setThresholdHumidity(int inputThresholdHumidity){
    thresholdSoilHumidity = inputThresholdHumidity;
}

void Data::setThresholdWaterLevel(int inputThresholdWaterLevel){
    thresholdWaterLevel = inputThresholdWaterLevel;
}

void Data::setThresholdSoilHumidity(int inputThresholdSoilHumidity){
    thresholdSoilHumidity = inputThresholdSoilHumidity;
}

void Data::setTrigger(bool inputTrigger){
    trigger = inputTrigger;
}

int Data::getLight(){
    return light;    
}

int Data::getTemperature(){
    return temperature;    
}

int Data::getHumidity(){
    return humidity;
}

int Data::getWaterLevel(){
    return waterLevel;
}

int Data::getSoilHumidity(){
    return soilHumidity;
}

int Data::getThresholdLight(){
    return thresholdLight;
}

int Data::getThresholdTemperature(){
    return thresholdTemperature;
}

int Data::getThresholdHumidity(){
    return thresholdHumidity;
}

int Data::getThresholdWaterLevel(){
    return thresholdWaterLevel;
}

int Data::getThresholdSoilHumidity(){
    return thresholdSoilHumidity;
}

bool Data::getTrigger(){
    return trigger;
}

bool Data::checkNeedWater(){

    bool response = false;

    soilHumidity = soilSensor.getHumidity();
    light = lightSensor.checkLight();

    if (soilHumidity <= thresholdSoilHumidity && light <= thresholdLight){
        response = true;
    }

    return response;

}

void Data::resetData(){

    temperature = 0;
    humidity = 0;
    waterLevel = 0;
    soilHumidity = 0;
    trigger = false;

}