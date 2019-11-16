#include <Ultrasonic.h>
#include <BoltIoT-Arduino-Helper.h>

#define trig_pin 9
#define echo_pin 10

Ultrasonic ultrasonic(trig_pin,echo_pin);
int distance=0;

String getDistance(String *arguments){
  distance = ultrasonic.read();
    String returnString=""+String(distance);
    return returnString;
}

void setup() {
  boltiot.begin(Serial);
  boltiot.setCommandString("RD\r",getDistance);
  boltiot.setCommandString("GetDistance",getDistance);
}

void loop() {
  boltiot.handleCommand();
  Serial.println(distance);
  
  
}
