#include <Servo.h>
//Crear una variable de tipo Servo para el motor
Servo motor;

//Variable para controlar la posición del motor
int posicion = 0; 

void setup() {
  Serial.begin(9600);
  // Indicar en que pin PWM está conectado el motor
  motor.attach(5);  
  
}

void loop() {
  motor.write(0);   // Levar al motor a la posición 0 grados
  delay(1000);
  motor.write(90);  // Levar al motor a la posición 90 grados
  delay(1000);
  motor.write(180); // Levar al motor a la posición 180 grados
  delay(1000);

  //Mover el motor desde 0 grados hasta 180 grados
  for (posicion=0; posicion<=180; posicion++) { 
    motor.write(posicion); 
    delay(50);  //Mover un grado cada 50 milisegundos                     
  }

  //Mover el motor desde 180 grados hasta 0 grados
  for (posicion=180; posicion>=0; posicion--) { 
    motor.write(posicion);              
    delay(50);  //Mover un grado cada 50 milisegundos                                            
  }

 }