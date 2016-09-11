# LSM_LED
This module uses one of the digital pins from the Arduino board to output a square wave that can be used to control an external LED creating a periodic blinking effect. The digital pin used and the blinking period value can be passed by the user to the class constructor.

# Download
[LSM_LED.zip](https://github.com/lsmaker/LSM_LED/releases/download/1.1/LSM_LED.zip)

# Clone
**Using SSH**
```
git clone --recursive git@github.com:lsmaker/LSM_LED.git LSM_LED
```
**Using HTTPS**
```
git clone --recursive https://github.com/lsmaker/LSM_LED.git LSM_LED
```

# Example
```
#include <LSMaker.h>
#include <LSM_LED.h>

using namespace LSM;

#define PIN_LED 13        //Must be a digital pin!
#define BLINK_PERIOD 1000 //In milliseconds!

LED *led = new LED(PIN_LED,BLINK_PERIOD);

void setup(){
  LSMaker::init();
  LSMaker::addModule(led);
}

void loop(){
  //Do something else if you want here. This code will not affect the LED
  //blinking effect even is using blocking instructions.
}
```

## Author
[Albert Lloveras](https://github.com/alloveras)

## License
The MIT License (MIT)
Copyright &copy; 2016 La Salle, Universitat Ramón Llull

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

