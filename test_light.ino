#include <BoltDeviceCredentials.h>
#include <BoltIoT-Arduino-Helper.h>

void setup() {
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);

}

void loop() {
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
}
