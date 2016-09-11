#include "LSM_LED.h"

using namespace LSM;

LED::LED(unsigned char pin, unsigned long blinkTime){
    this->pin = pin;
    this->blinkTime = blinkTime;
}

void LED::init(void){
    //Configure the user-specified pin as output and initialize the timer and
    //status variables.
    pinMode(this->pin,OUTPUT);
    this->status = 0;
    this->timer = 0;
}

void LED::execute(void){

    //This switch implements a status machine that is in charge of producing
    //the LED blinking effect. This status machine is controlled by the private
    //attribute "status". Its flow is cyclic because it will jump infinitely
    //from status 0 to status 1 and to status 0 again waiting the "blinkTime"
    //amount of time before performing the status jump.

    switch(this->status){
        case 0:
            if(millis() - this->timer >= this->blinkTime){
                digitalWrite(this->pin,HIGH);
                this->timer = millis();
                this->status++;
            }
            break;
        case 1:
            if(millis() - this->timer >= this->blinkTime){
                digitalWrite(this->pin,LOW);
                this->timer = millis();
                this->status = 0;
            }
            break;
    }
}

void LED::destroy(void){
    //For the moment, nothing to do here. There is not dynamic memory allocated
    //or other things that should be cleaned up after the module is
    //un-subscribed from the LSMaker scheduler.
}

String LED::getModuleName(void){
    //Return the name of the module that will change depending on the digital
    //pin specified by the user in the class constructor.
    return "LSM_LED_" + this->pin;
}
