 #include <Servo.h> // servo1 3, servo2 ,5 servo 3,6  servo 4,9 //  3,1 3,6 1,9
Servo pd2; 
Servo pi1;
Servo cd4;
Servo ci3;
const int Trigger = 7; 
const int Echo = 8 ;
void setup() {
  // put your setup code here, to run once:
 pd2.attach(5);
 pi1.attach(3);
 cd4.attach(9);   
 ci3.attach(6);
 Serial.begin(9600);//iniciailzamos la comunicación
  pinMode(Trigger, OUTPUT); //pin como salida
  pinMode(Echo, INPUT);  //pin como entrada
  digitalWrite(Trigger, LOW);//Inicializamos el pin con 0
}
 

void loop() {

  long t;
  long d;
  digitalWrite(Trigger, HIGH);
  delayMicroseconds(10);         
  digitalWrite(Trigger, LOW);
    t = pulseIn(Echo, HIGH); 
    d = t/59;  
    Serial.print("Distancia: ");
  Serial.print(d);      //Enviamos serialmente el valor de la distancia
  Serial.print("cm");
  Serial.println();
 /* */
  if (d<5) {
  pd2.write(90);
  pi1.write(90);
  ci3.write(90);
  cd4.write(90);
  } else {
    pd2.write(130);
    pd2.write(110);
    pi1.write(100);
    pi1.write(120);
    pi1.write(150);
    pi1.write(170);
    pi1.write(150);
    pi1.write(120);
    pi1.write(90);
    pi1.write(45);
    pi1.write(30);
    pi1.write(90);
    pd2.write(90);
    delay(600);
    pi1.write(110);
    pi1.write(130);
    pd2.write(100);
    pd2.write(120);
    pd2.write(150);
    pd2.write(170);
    pd2.write(150);
    pd2.write(120);
    pd2.write(90);
    pd2.write(45);
    pd2.write(30);
    pd2.write(90);
    pi1.write(90);

  
  }
  pd2.write(130);
  pi1.write(150);
  ci3.write(98);
  cd4.write(90);
  delay(600);

  pd2.write(45);
  pi1.write(150);
  ci3.write(98);
  cd4.write(90);
  delay(600);
  pd2.write(90);
  pi1.write(150);
  ci3.write(98);
  cd4.write(90);
  delay(600);
  
///
  pd2.write(45);
  pi1.write(45);
  ci3.write(98);
  cd4.write(90);
  delay(600);

  pd2.write(45);
  pi1.write(90);
  ci3.write(98);
  cd4.write(90);
  delay(600);
  pd2.write(45);
  pi1.write(120);
  ci3.write(98);
  cd4.write(90);
  delay(600);
}
