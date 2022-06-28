/*
 * Project IoT_Lab4
 * Description: Turns on when a button is pressed, off otherwise
 * Author: Aiden K
 * Date: 6/28/22
 */

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