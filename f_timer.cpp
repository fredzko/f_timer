#include "timer.h"

void ftimer::startNow(){
    starttime = millis();
    active = true;
}
bool ftimer::isExpired(){
    return (millis() >= (starttime + duration) && active);
}
bool ftimer::isActive(){
    return active;
}
ftimer::ftimer(){
    starttime = 0;
    duration = 0;
    active = false;
}
void ftimer::setDuration(unsigned long int td){
    duration = td;
}
void ftimer::deactivate(){
    active = false;
}
