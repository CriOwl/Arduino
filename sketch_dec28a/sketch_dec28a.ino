float lectura;
float lectura2;
float lectura3;
float volt;
float volt2;
float volt3;
String tex;
#include <SoftwareSerial.h>
void setup() {
  Serial.begin(9600);
  Serial2.begin(9600);
  pinMode(A4,INPUT);
  pinMode(A0,INPUT);
    pinMode(A5,INPUT);
}
void loop() {
  delay(10000);
  lectura = analogRead(A0);
  lectura2 = analogRead(A4);
  lectura3 = analogRead(A5);
  int volt5 = lectura;
  volt = lectura/1024 *5.0;
  volt2 = lectura2/1023 * 5.0;
  volt3 = lectura3/1023 * 5.0;
  tex = String(lectura)+String("lectura2") ;
        Serial2.println(tex);
        Serial.println(tex);



}