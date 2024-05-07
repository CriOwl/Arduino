#include <Wire.h>
#include <Adafruit_ADS1X15.h>
Adafruit_ADS1115 ads;
//Primer Pin
float lectura;
int Velocidadf;
int voltajemax;
int voltajemin;
int Caudalmin;
int Caudalmax;
//Segundo pin
float lectura2;
int Velocidadf2;
int voltajemax_2;
int voltajemin2;
int Caudalmin2;
int Caudalmax2;
//Tercer Pin
float lectura3;
int Velocidadf3;
int voltajemax3;
int voltajemin3;
int Caudalmin3;
int Caudalmax3;
//Cuarto Pin
float lectura4;
int Velocidadf4;
int voltajemax4;
int voltajemin4;
int Caudalmin4;
int Caudalmax4;
//Qufloato Pin
float lectura5;
int Velocidadf5;
int voltajemax5;
int voltajemin5;
int Caudalmin5;
int Caudalmax5;
//Sexto  Pin
float lectura6;
int Velocidadf6;
int voltajemax6;
int voltajemin6;
int Caudalmin6;
int Caudalmax6;
void setup() {
  Serial.begin(9600);
  ads.begin();
  ads.setGain(GAIN_TWOTHIRDS);
}
void loop() {
 short diferencia_0_1 = ads.readADC_Differential_0_1();
  delay(1000);
}