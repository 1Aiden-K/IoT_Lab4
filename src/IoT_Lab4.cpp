/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/aiden/Desktop/IoT-Engineering/VisualStudioCodeProjects/IoT_Lab4/src/IoT_Lab4.ino"
/*
 * Project IoT_Lab4
 * Description: 
 * Author:
 * Date:
 */

void setup();
void loop();
#line 8 "c:/Users/aiden/Desktop/IoT-Engineering/VisualStudioCodeProjects/IoT_Lab4/src/IoT_Lab4.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

#define BUTTON_IN D7
#define LIGHT_OUT D5

void setup() {
  pinMode(BUTTON_IN, INPUT);
  pinMode(LIGHT_OUT, OUTPUT);
}

void loop() {
  bool value = digitalRead(BUTTON_IN);
  if (value == true){
    digitalWrite(LIGHT_OUT, HIGH);
  }else{
    digitalWrite(LIGHT_OUT, LOW);
  }
}