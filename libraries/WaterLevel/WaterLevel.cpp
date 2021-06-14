#include "Arduino.h"
#include "WaterLevel.h"

WaterLevel::WaterLevel(){

}

WaterLevel::WaterLevel(int inputPin){
    pin = inputPin;

    pinMode(pin, INPUT);
}

void WaterLevel::setName(String inputName){
    name = inputName;
}

void WaterLevel::setPin(int inputPin){
    pin = inputPin;
}

void WaterLevel::setTrigger(bool inputTrigger){
    trigger = inputTrigger;
}

String WaterLevel::getName(){
    return name;
}

int WaterLevel::getPin(){
    return pin;
}

bool WaterLevel::getTrigger(){
    return trigger;
}

bool WaterLevel::checkWaterLevel(){
    int value = digitalRead(pin);

    if(value == 0){
        trigger = false;
    } else{
        trigger = true;
    }

    return trigger;
}