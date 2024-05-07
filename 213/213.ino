#include <SoftwareSerial.h>
int lectura;
int lectura2;
int lectura3;
int lectura4;
int lectura5;
int lectura6;
int lectura7;
int lectura8;
int lectura9;
int lectura10;
int lectura11;
int lectura12;
int lectura13;
int lectura14;
int lectura15;
String text;
String  s = ".";
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
  delay(2040);
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
    text= String(lectura) + String(s) + String(lectura2) + String(s) + String(lectura3) + String(s) + String(lectura4) + String(s) + String(lectura5) + String(s) +
    String(lectura6) + String(s) +String(lectura7) + String(s)+ String(lectura8) + String(s) + String(lectura9) + String(s) + String(lectura10); 
  /*Serial.print("V:");
    Serial.println(volt);*/
    AR.println(text);
    Serial.println(text);




}
