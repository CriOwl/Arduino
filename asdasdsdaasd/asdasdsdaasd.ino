#include <Otto.h>
Otto Otto;

#define LeftLeg 3 // left leg pin, servo[0]
#define RightLeg 5 // right leg pin, servo[1]
#define LeftFoot 6 // left foot pin, servo[2]
#define RightFoot 9 // right foot pin, servo[3]
#define Buzzer 13 //buzzer pin

long ultrasound_distance_simple() {
   long duration, distance;
   digitalWrite(7,LOW);
   delayMicroseconds(2);
   digitalWrite(7, HIGH);
   delayMicroseconds(10);
   digitalWrite(7, LOW);
   duration = pulseIn(8, HIGH);
   distance = duration/58;
   return distance;
}

 void Otto_moveLegs(int T, int posLegL, int posLegR, int posFootL, int posFootR) {   int posLegs[]={ posLegL,posLegR,posFootL,posFootR };   Otto._moveServos(T,posLegs); }

void setup() {
  Otto.init(LeftLeg, RightLeg, LeftFoot, RightFoot, true, Buzzer);
Otto.home();

  pinMode(7, OUTPUT);
  pinMode(8, INPUT);
  Otto_moveLegs(200,90,90,90,90);

}

void loop() {
    if (ultrasound_distance_simple() < 5) {
      Otto_moveLegs(200,90,90,90,90);} else if (ultrasound_distance_simple() > 5) {

      for (int count=0 ; count<5 ; count++) {
        Otto.moonwalker(1, 1000, 25, 1);
      }
        for (int count=0 ; count<5 ; count++) {
        Otto.moonwalker(1, 1000, 25, -1);
        }
         for (int count=0 ; count<2 ; count++) {
        Otto.swing(1, 1000, 25);
        Otto.jitter(1, 1000, 25);
      }

      }
}