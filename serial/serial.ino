#include <SoftwareSerial.h>
float lectura;
float lectura2;
float lectura3;
float lectura4;
float lectura5;
float lectura6;
float lectura7;
float lectura8;
float lectura9;
float lectura10;
float lectura11;
float lectura12;
float lectura13;
float lectura14;
float lectura15;
String text;
char  s = ";";
SoftwareSerial AR(2,3);

void setup() {

  Serial.begin(9600);
   AR.begin(9600);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
    pinMode(A3,INPUT);
  pinMode(A4,INPUT);
  pinMode(A5,INPUT);
    pinMode(A6,INPUT);
  pinMode(A7,INPUT);
  pinMode(A8,INPUT);
    pinMode(A9,INPUT);
  pinMode(A10,INPUT);
  pinMode(A11,INPUT);
    pinMode(A12,INPUT);
  pinMode(A13,INPUT);
  pinMode(A14,INPUT);
}
void loop() {
  delay(1000);
  lectura = analogRead(A0);
  lectura2 = analogRead(A1);
  lectura3 = analogRead(A2);
  lectura4 = analogRead(A3);
  lectura5 = analogRead(A4);
  lectura6 = analogRead(A5);
  lectura7 = analogRead(A6);
  lectura8 = analogRead(A7);
  lectura9 = analogRead(A8);
  lectura10 = analogRead(A9);
  lectura11 = analogRead(A10);
  lectura12 = analogRead(A11);
  lectura13 = analogRead(A12);
  lectura14 = analogRead(A13);
  lectura15 = analogRead(A14);
  text= String (lectura) + String(s) + String(lectura2);
  /*String(lectura) + String(s) + String(lectura2) + String(s) + String(lectura3) + String(s) + String(lectura4) + String(s) + String(lectura5) + String(s) +
    String(lectura6) + String(s) +String(lectura7) + String(s)+ String(lectura8) + String(s) + String(lectura9) + String(s) + String(lectura10) + String(s) +
    String(lectura11)+ String(s) +String(lectura12) + String(s) + String(lectura13) + String(s) + String(lectura14) + String(s) + String(lectura15) + String(s); 
  /*Serial.print("V:");
    Serial.println(volt);*/
    AR.println(text);
    Serial.println(text);



}
