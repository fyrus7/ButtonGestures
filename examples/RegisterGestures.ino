/*\
|*| Example use of the ButtonGestures library
|*|
|*| This example shows how to register different functions to be
|*| called for different gestures.
|*|
|*| If a function has been registered to a gesture then the function
|*| will automatically be called for that gesture.
|*|
|*| (c) 2022 trent m. wyatt
|*|
\*/

#include <ButtonGestures.h>

// NOTE: change/define the following pin(s) based on your project/connections
#define   BUTTON_PIN    2

ButtonGestures  button(BUTTON_PIN);

//
// These functions will be registered and called for the various gestures:
//

void function1(const uint8_t /*state*/, const uint8_t /*pin*/) {
    Serial.println("function 1 has been called");
}

void function2(const uint8_t /*state*/, const uint8_t /*pin*/) {
    Serial.println("function 2 has been called");
}

void function3(const uint8_t /*state*/, const uint8_t /*pin*/) {
    Serial.println("function 3 has been called");
}

void function4(const uint8_t /*state*/, const uint8_t /*pin*/) {
    Serial.println("function 4 has been called");
}

void function5(const uint8_t /*state*/, const uint8_t /*pin*/) {
    Serial.println("function 5 has been called");
}

void function6(const uint8_t /*state*/, const uint8_t /*pin*/) {
    Serial.println("function 6 has been called");
}


void setup(void) {
    Serial.begin(9600);
    uint32_t timer = millis() + 2000;
    while (!Serial && millis() < timer);
    Serial.flush();
    Serial.println(F("\n\nArduino Core Library - ButtonGestures Library Test"));

    button.set_callback(SHORT1, function1);
    button.set_callback(LONG1,  function2);
    button.set_callback(SHORT2, function3);
    button.set_callback(LONG2,  function4);
    button.set_callback(SHORT3, function5);
    button.set_callback(LONG3,  function6);
}

void loop(void) {
    button.check_button();
}
