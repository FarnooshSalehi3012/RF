#include <RCSwitch.h>

const int redLed = 5;
RCSwitch mySwitch = RCSwitch();

void setup() {
  Serial.begin(9600);
  mySwitch.enableReceive(4);  // Connected to GPIO4 (D4) of Nodemcu 1.0 module
}

void loop() {
  
  if (mySwitch.available()) {
    
    int value = mySwitch.getReceivedValue();
    Serial.println(value);
    
//    if (value == 5592368){
//    digitalWrite(redLed, HIGH);
//    }
//    else if (value == 5592332){
//      digitalWrite(redLed, LOW);
//    }
//    else {
//      Serial.print("Bad code. You code is ");
//      Serial.println(mySwitch.getReceivedValue());
//    }
    
    mySwitch.resetAvailable();
    
  }
}
