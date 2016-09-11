/***
 *	Name: LSM_LED.h
 *	Author: Albert Lloveras Carbonell (alloveras@salleurl.edu)
 *	Last Revision: 18/07/2016
 *	Description: This class uses one of the digital pins from the Arduino
 *  board to output a square wave that can be used to control an external LED
 *  creating a periodic blinking effect on it. The digital pin to use and the
 *  blinking period values can be set using the class constructor parameters.
 *
***/
#ifndef _LSM_LED_H_
#define _LSM_LED_H_

#include <Arduino.h>
#include "External/LSMakerModule.h"

namespace LSM{

    class LED : public LSMakerModule{

        private:

            unsigned char status = 0;
            unsigned long timer = 0;
            unsigned long blinkTime = 0;
            unsigned char pin;

        public:
            LED(unsigned char pin, unsigned long blinkTime);
            void init(void);
            void execute(void);
            void destroy(void);
            String getModuleName(void);

    };

}

#endif
