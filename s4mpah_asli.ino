#include <Servo.h>
Servo servo1;
const int pinTRIGGER = 9;
const int pinECHO = 10;
int angle = 11;
long duration;
int distance;

void setup()
{
  Serial.begin(9600);
  servo1.attach(8);
  servo1.write(angle);
  pinMode(pinTRIGGER, OUTPUT);
  pinMode(pinECHO, INPUT);
  
}

void loop()
{
  digitalWrite(pinTRIGGER, LOW);
  delayMicroseconds(2);
  digitalWrite(pinTRIGGER, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTRIGGER, LOW);

  duration = pulseIn(pinECHO, HIGH);
  distance = (duration / 2);

  Serial.print("Distance");
  Serial.println(distance);
  delay(10);

  if (distance >9)
{ servo1.write(0);
delay(6000);
}
  else (distance <10);
{servo1.write(180);
delay(8000);

}
}
