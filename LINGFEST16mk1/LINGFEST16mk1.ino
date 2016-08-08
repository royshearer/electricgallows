/* 
LED strings via relays on consecutive pins between 'rangelo' and 'threshold'
LED strings via MOSFETs on consecutive pins between 'threshold' and 'rangehi'
powered microphone signal on A0 for sound responsive mode

I have corrected some of the more obvious coding errors after the installation aired,
but have not been able to test since then
*/

int rangelo = 0;
int rangehi = 16;
int thresholdpin = 4;
boolean sound = false; // set to true for sound monitoring mode

void setup() {
  for (int i = 0; i < 15; i++) {
    pinMode(i, OUTPUT);
    state(i, LOW);
  }
  if (sound == true) {
    soundSetup();
  } else {
    for (int i = 15; i < 16; i++) {
      pinMode(i, OUTPUT);
      state(i, LOW);
    }
  }
}

void loop() {
  if (sound == true) {
    soundLoop();
  }
  else
  {
    animateLoop();
  }
}

void state(int i, int state) {
  if (i < thresholdpin) {
    digitalWrite(i, !state);  // inverts the state for relays (active when LOW)
  } else {
    digitalWrite(i, state);
  }
}



