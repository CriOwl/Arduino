#include <SoftwareSerial.h>
#include <WiFiManager.h>
#include <strings_en.h>
#include <wm_consts_en.h>
#include <wm_strings_es.h>
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <DNSServer.h>

SoftwareSerial s(4,5); 
float signal = WiFi.RSSI();
int volt5;
void setup() {
  Serial.begin(9600);
  s.begin(9600);
  WiFiManager wifiManager;
  wifiManager.resetSettings();
  wifiManager.autoConnect ("Dataloger","123456789");
  Serial.println("Ya estas conectado");

}
void loop() {
  s.write("s");
  if(s.available()>0){
  volt5=s.read();
  Serial.println(volt5);}
  delay(1000);
  
   Serial.print("Señal: ");
   Serial.println(signal);
    WiFi.printDiag(Serial);
   delay(6000);
 /*
   if (signal < 0){
    Serial.write(Serial.read());
    delay(10);}
     Serial.write(Serial.read());
    delay(10);*/
}
