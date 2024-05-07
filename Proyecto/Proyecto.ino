#include <Servo.h>
Servo p1; //3 I
Servo p2; // 5 D
Servo c1; // 6 I
Servo c2; // 9  D
const int Trigger = 7; 
const int Echo = 8 ;
int paso1=90;
int paso2=90;
void setup() {
  p1.attach(3);
  p2.attach(5);
  c1.attach(6);
  c2.attach(9);
  Serial.begin(9600);
  pinMode(Trigger, OUTPUT);
  pinMode(Echo, INPUT); 
  digitalWrite(Trigger, LOW);
}

void loop() {
  long t;
  long d;
  digitalWrite(Trigger, HIGH);
  delayMicroseconds(10);         
  digitalWrite(Trigger, LOW);
    t = pulseIn(Echo, HIGH); 
    d = t/59;  
  if(d<10) {
    p1.write(130); //90+40
   for(paso1 = 90;paso1 < 125;paso1 ++){
     p2.write(paso1);
     delay(50);
  }
     for(paso1 = 125 ;paso1 > 90;paso1 --){
     p2.write(paso1);
     delay(50);
  }
    p1.write(90);
    p2.write(90);
    delay(600);
    p2.write(60);

    for(paso2 = 90;paso2 > 45;paso2 --){
     p1.write(paso2);
     delay(50);
  }
  for(paso2 = 45;paso2 < 90;paso2 ++){
     p1.write(paso2);
     delay(50);
  }
  p1.write(90);
  p2.write(90);
  delay(600);
  p1.write(120);
  c1.write(60);
  delay(600);
  p2.write(60);
  c1.write(90);
  c2.write(120);
  delay(600);
  p2.write(90);
  p1.write(90);
  c2.write(90);
}
}