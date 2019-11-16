//int trigPin = 12;
//int echoPin = 11;
//int led=2;
//int buzz=8;
float duration, distance;

void setup() {
  pinMode(12, OUTPUT);
  pinMode(11, INPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(12, LOW);
  delayMicroseconds(2);
  digitalWrite(12, HIGH);
  delayMicroseconds(10);
  digitalWrite(12, LOW);
  duration = pulseIn(11, HIGH);
  distance = (duration*.0343)/2;
  Serial.print("Distance: ");
  Serial.println(distance);
  delay(100);  
//digitalWrite(8,LOW);

  if(distance < 10)
    {
      digitalWrite(5,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(10,HIGH);
      digitalWrite(9,LOW);
    }
  else
    {
       digitalWrite(5,LOW);
       digitalWrite(10,LOW);
       digitalWrite(7,HIGH);
       digitalWrite(8,LOW);
   }
}
