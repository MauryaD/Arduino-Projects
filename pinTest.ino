int check;
void setup() {
  // put your setup code here, to run once:
  pinMode(6,INPUT); //pin connected to BOLT

  pinMode(10,OUTPUT); //LED pin
  pinMode(11, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.begin(9600);
  check=digitalRead(6);
  if(check == 1)
    {digitalWrite(11,HIGH);
     digitalWrite(10,HIGH);
    }
  
  else
    {digitalWrite(10,LOW);
     digitalWrite(11,LOW);
    }
}
