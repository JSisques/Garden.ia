#include "Arduino.h"
#include "CustomSerial.h"

CustomSerial::CustomSerial(int inputBaud){
    baud = inputBaud;
    Serial.begin(baud);
}

void CustomSerial::setBaud(int inputBaud){
    baud = inputBaud;
}


int CustomSerial::getBaud(){
    return baud;
}

void CustomSerial::printMessage(String message){
    Serial.println(message);
}   