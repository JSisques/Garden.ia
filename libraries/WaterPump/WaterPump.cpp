#include "Arduino.h"
#include "WaterPump.h"

WaterPump::WaterPump(String inputName, int inputPin){
    name = inputName;
    pin = inputPin;
}

void WaterPump::setPin(int inputPin){
    pin = inputPin;
}

void WaterPump::setName(int inputName){
    name = inputName;
}

int WaterPump::getPin(){
    return pin;
}

String WaterPump::getName(){
    return name;
}

void WaterPump::water(int seconds){
    analogWrite(pin, HIGH);
    delay(seconds * 1000);
    analogWrite(pin, LOW);
}