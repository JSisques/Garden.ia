#include "Arduino.h"
#include "Data.h"

Data::Data(){
    thresholdSoilHumidity = 50;
}

Data::Data(String inputName, WaterPump wp, SoilSensor ss){
    name = inputName;
    waterPump = wp;
    soilSensor = ss;
}

void Data::setSoilHumidity(int inputSoilHumidity){
    soilHumidity = inputSoilHumidity;
}

void Data::setThresholdSoilHumidity(int inputThresholdSoilHumidity){
    thresholdSoilHumidity = inputThresholdSoilHumidity;
}

void Data::setTrigger(bool inputTrigger){
    trigger = inputTrigger;
}

int Data::getSoilHumidity(){
    return soilHumidity;
}

int Data::getThresholdSoilHumidity(){
    return thresholdSoilHumidity;
}

bool Data::getTrigger(){
    return trigger;
}

bool Data::checkNeedWater(int light, int thresholdLight){

    bool response = false;

    soilHumidity = soilSensor.getHumidity();

    if (soilHumidity <= thresholdSoilHumidity && light <= thresholdLight){
        response = true;
    }

    return response;

}

void Data::resetData(){
    soilHumidity = 0;
    trigger = false;

}

int Data::checkSoilHumidity(){
    soilHumidity = soilSensor.checkHumidity();
    return soilHumidity;
}

void Data::water(bool trigger){
    if(trigger){
        waterPump.water(10);
    }
}

