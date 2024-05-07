#include <SoftwareSerial.h>
#include <WiFiManager.h>
#include <strings_en.h>
#include <wm_consts_en.h>
#include <wm_strings_es.h>
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <DNSServer.h>
SoftwareSerial COM(4,5);
float signal = WiFi.RSSI();
char  lectura;
char  lectura2 [6];
void setup() {
  Serial.begin(9600);
  COM.begin(9600);
  WiFiManager wifiManager;
  /*wifiManager.resetSettings();*/
  wifiManager.autoConnect ("Dataloger","123456789");
  Serial.println("Ya estas conectado");

}
void loop() {
 Serial.write(COM.read()); 

 delay(50);

}
