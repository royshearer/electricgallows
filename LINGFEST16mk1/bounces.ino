void bounceX(int d, int repeats) {
  for (int j = 0; j < repeats; j++) {
    for (int i = 0; i < 4; i++) {
      state(x1[i], HIGH);
    }
    delay(d);
    for (int i = 0; i < 4; i++) {
      state(x1[i], LOW);
    }
    for (int i = 0; i < 4; i++) {
      state(x2[i], HIGH);
    }
    delay(d);
    for (int i = 0; i < 4; i++) {
      state(x2[i], LOW);
    }
    for (int i = 0; i < 4; i++) {
      state(x3[i], HIGH);
    }
    delay(d);
    for (int i = 0; i < 4; i++) {
      state(x3[i], LOW);
    }
    for (int i = 0; i < 4; i++) {
      state(x4[i], HIGH);
    }
    delay(d);
    for (int i = 0; i < 4; i++) {
      state(x4[i], LOW);
    }
    for (int i = 0; i < 4; i++) {
      state(x3[i], HIGH);
    }
    delay(d);
    for (int i = 0; i < 4; i++) {
      state(x3[i], LOW);
    }    for (int i = 0; i < 4; i++) {
      state(x2[i], HIGH);
    }
    delay(d);
    for (int i = 0; i < 4; i++) {
      state(x2[i], LOW);
    }
  }
}

void bounceY(int d, int repeats) {
  for (int j = 0; j < repeats; j++) {
    for (int i = 0; i < 4; i++) {
      state(y1[i], HIGH);
    }
    delay(d);
    for (int i = 0; i < 4; i++) {
      state(y1[i], LOW);
    }
    for (int i = 0; i < 4; i++) {
      state(y2[i], HIGH);
    }
    delay(d);
    for (int i = 0; i < 4; i++) {
      state(y2[i], LOW);
    }
    for (int i = 0; i < 4; i++) {
      state(y3[i], HIGH);
    }
    delay(d);
    for (int i = 0; i < 4; i++) {
      state(y3[i], LOW);
    }
    for (int i = 0; i < 4; i++) {
      state(y4[i], HIGH);
    }
    delay(d);
    for (int i = 0; i < 4; i++) {
      state(y4[i], LOW);
    }  for (int i = 0; i < 4; i++) {
      state(y3[i], HIGH);
    }
    delay(d);
    for (int i = 0; i < 4; i++) {
      state(y3[i], LOW);
    }  for (int i = 0; i < 4; i++) {
      state(y2[i], HIGH);
    }
    delay(d);
    for (int i = 0; i < 4; i++) {
      state(y2[i], LOW);
    }
  }
}
