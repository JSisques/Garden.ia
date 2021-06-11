#include <LowPower.h>
#include "Arduino.h"
#include "PowerSave.h"

PowerSave::PowerSave(){
}

void PowerSave::sleep1S(){
    LowPower.powerDown(SLEEP_1S, ADC_OFF, BOD_OFF);
}
void PowerSave::sleep2S(){
    LowPower.powerDown(SLEEP_2S, ADC_OFF, BOD_OFF);
}
void PowerSave::sleep4S(){
    LowPower.powerDown(SLEEP_4S, ADC_OFF, BOD_OFF);
}
void PowerSave::sleep8S(){
    LowPower.powerDown(SLEEP_8S, ADC_OFF, BOD_OFF);
}