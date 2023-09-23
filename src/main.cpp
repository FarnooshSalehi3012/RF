#include <RCSwitch.h>

RCSwitch mySwitch = RCSwitch();

void setup() {
  Serial.begin(9600);  
  mySwitch.enableTransmit(15);
}

void loop() {
  mySwitch.send(5592368, 24);
  delay(3000);  
  mySwitch.send(5592332, 24);
  delay(3000);  
}