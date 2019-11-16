#include <Ultrasonic.h>
#include <BoltIoT-Arduino-Helper.h>

//#define ULTRASONIC_TRIG_PIN 12
//#define ULTRASONIC_ECHO_PIN 13

//int led=2;
//int buzz=8;


Ultrasonic ultrasonic(12,13);
//int distance=0;

String getDistance(String *arguments){
  int trigPin = 12;
int echoPin = 13;
float duration, distance;
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
//  pinMode(led, OUTPUT);
//  pinMode(buzz, OUTPUT);
  Serial.begin(9600); 

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration*.0343)/2;
  Serial.print("Distance: ");
  Serial.println(distance);
  delay(100);
  return String(distance);
  /*distance = ultrasonic.read();
    String returnString=""+String(distance);
    return returnString;*/
}

 


void setup() {
  boltiot.begin(Serial);
  // put your setup code here, to run once:
  boltiot.setCommandString("RD\r",getDistance);
  boltiot.setCommandString("GetDistance",getDistance);
}

void loop() {
  boltiot.handleCommand();
  // put your main code here, to run repeatedly:
  
}
