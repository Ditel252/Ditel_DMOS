#include <Arduino.h>
#include "Ditel_DMOS.hpp"

#define PIN_CROSS_KEY_UP    19
#define PIN_CROSS_KEY_DOWN  5
#define PIN_CROSS_KEY_RIGHT 18
#define PIN_CROSS_KEY_LEFT  17

DOS os;

void setup(){
    os.setMainButton(PIN_CROSS_KEY_LEFT, PIN_CROSS_KEY_DOWN, PIN_CROSS_KEY_RIGHT, true);
    os.start();
}

void loop(){
  
}