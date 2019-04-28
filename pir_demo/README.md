# PIR DEMO #
For this first project, we are just going to mess with the PIR(Passive Infrared Receiver) sensor. I have provided a pinout for the Arduino, and some sample code to get started with receiving input from the sensor and printing to the Serial Monitor.

## Components needed: ##
 * Arduino IDE -- Downloadable from https://www.arduino.cc/en/Main/Software
 * PIR Sensor -- looks kind of like a golf ball
 * Wires -- in the kit

## Instructions ##
The PIR Sensor has 3 pins: VCC, OUT, and GND. 

VCC connects to 3.3V on the Arduino

OUT connects to Pin 4 (See pinout diagram)

GND connects to GND on the Arduino

On the Arduino IDE, you can load the code onto your Arduino board with the upload button. After the code loads, open the Serial Monitor and you should be able to see the output of the Arduino. Put your hand in front of the sensor, and you should get the  "I saw something" message.

## Challenge ##

Given the code sample I provided, you should be able to figure out how to turn on an LED whenever the PIR sensor finds something. I have provided resources below to help you.

https://www.arduino.cc/reference/en/language/functions/digital-io/pinmode/

https://www.instructables.com/id/LEDs-for-Beginners/

https://www.arduino.cc/reference/en/language/structure/control-structure/if/

https://www.arduino.cc/reference/en/language/structure/control-structure/else/

https://www.arduino.cc/reference/en/language/functions/digital-io/digitalwrite/

