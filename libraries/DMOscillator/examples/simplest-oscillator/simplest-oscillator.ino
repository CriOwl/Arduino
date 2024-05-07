/*
 * This example shows how to setup a simple oscillator on pin 13.
 * It oscillates infinitely at 5Hz
 */
#include <dmtimer.h>
#include <dmoscillator.h>

DMOscillator *osc = NULL;

void setup(){
  /*
   * OscillationMode can be one of [duration, count, infinite]
   * In infinite mode, just pass the frequency.
   * In other modes, pass either the duration in us, or oscillation count as 2nd argument of oscillateHz()
   */
  osc = new DMOscillator(13, OscillationMode::infinite);

  osc->oscillateHz(5);
}

void loop(){

  osc->update();

}
