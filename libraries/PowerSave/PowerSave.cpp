#include <LowPower.h>
#include "Arduino.h"
#include "PowerSave.h"

PowerSave::PowerSave(){
}

void PowerSave::sleep(int seconds){
    
    if (seconds >= 8 ){
        LowPower.powerDown(SLEEP_8S, ADC_OFF, BOD_OFF);
    } else if (seconds >= 4){
        LowPower.powerDown(SLEEP_4S, ADC_OFF, BOD_OFF);
    } else if (seconds >= 2){
        LowPower.powerDown(SLEEP_2S, ADC_OFF, BOD_OFF);
    } else if (seconds >= 1){
        LowPower.powerDown(SLEEP_1S, ADC_OFF, BOD_OFF);
    }
}