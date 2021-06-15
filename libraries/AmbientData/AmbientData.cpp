#include "Arduino.h"
#include "TemperatureSensor.h"
#include "LightSensor.h"
#include "AmbientData.h"
#include "WaterLevel.h"

AmbientData::AmbientData(){
    thresholdLight = 20;
    thresholdTemperature = 20;
    thresholdHumidity = 50;
    thresholdThermalSensation = 20;
}

AmbientData::AmbientData(String inputName, TemperatureSensor ts, LightSensor ls, WaterLevel wl){
    name = inputName;
    temperatureSensor = ts;
    lightSensor = ls;
    waterLevelSensor = wl;
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

void AmbientData::setThermalSensation(float inputThermalSensation){
    thermalSensation = inputThermalSensation;
}

void AmbientData::setWaterLevel(bool inputWaterLevel){
    waterLevel = inputWaterLevel;
}


void AmbientData::setThresholdLight(int inputThresholdLight){
    thresholdLight = inputThresholdLight;
}

void AmbientData::setThresholdTemperature(float inputThresholdTemperature){
    thresholdTemperature = inputThresholdTemperature;
}

void AmbientData::setThresholdHumidity(float inputThresholdHumidity){
    thresholdHumidity = inputThresholdHumidity;
}

void AmbientData::setThresholdThermalSensation(float inputThresholdThermalSensation){
    thresholdThermalSensation = inputThresholdThermalSensation;
}

void AmbientData::setTemperatureSensor(TemperatureSensor inputTemperatureSensor){
    temperatureSensor = inputTemperatureSensor;
}

void AmbientData::setLightSensor(LightSensor inputLightSensor){
    lightSensor = inputLightSensor;
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

float AmbientData::getThermalSensation(){
    return thermalSensation;
}

bool AmbientData::getWaterLevel(){
    return waterLevel;
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

float AmbientData::getThresholdThermalSensation(){
    return thresholdThermalSensation;
}

TemperatureSensor AmbientData::getTemperatureSensor(){
    return temperatureSensor;
}

LightSensor AmbientData::getLightSensor(){
    return lightSensor;
}

void AmbientData::resetAmbientData(){
    temperature = 0;
    humidity = 0;
    light = 0;
    thermalSensation = 0;
}

void AmbientData::checkAllData(){
    temperature = checkTemperature();
    humidity = checkHumidity();
    light = checkLight();
    thermalSensation = checkThermalSensation();
}

int AmbientData::checkLight(){
    light = lightSensor.checkLight();
    return light;
}

float AmbientData::checkTemperature(){
    temperature = temperatureSensor.checkTemperature();
    return temperature;
}

float AmbientData::checkHumidity(){
    humidity = temperatureSensor.checkHumidity();
    return humidity;
}


float AmbientData::checkThermalSensation(){
    thermalSensation = temperatureSensor.checkThermalSensation();
    return thermalSensation;
}

bool AmbientData::checkWaterLevel(){
    waterLevel = waterLevelSensor.checkWaterLevel();
    return waterLevel;
}