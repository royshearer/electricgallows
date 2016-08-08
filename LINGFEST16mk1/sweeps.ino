void sweepX(int d) {
  for (int i = 0; i < 4; i++) {
    state(x1[i], HIGH);
  }
  delay(d);
  allOff(0);
  for (int i = 0; i < 4; i++) {
    state(x2[i], HIGH);
  }
  delay(d);
  allOff(0);
  for (int i = 0; i < 4; i++) {
    state(x3[i], HIGH);
  }
  delay(d);
  allOff(0);
  for (int i = 0; i < 4; i++) {
    state(x4[i], HIGH);
  }
  delay(d);
  allOff(0);
}

void sweepY(int d) {
  for (int i = 0; i < 4; i++) {
    state(y1[i], HIGH);
  }
  delay(d);
  allOff(0);
  for (int i = 0; i < 4; i++) {
    state(y2[i], HIGH);
  }
  delay(d);
  allOff(0);
  for (int i = 0; i < 4; i++) {
    state(y3[i], HIGH);
  }
  delay(d);
  allOff(0);
  for (int i = 0; i < 4; i++) {
    state(y4[i], HIGH);
  }
  delay(d);
  allOff(0);
}

void sweepU(int d) {
  for (int i = 0; i < 1; i++) {
    state(u1[i], HIGH);
  }
  delay(d);
  allOff(0);
  for (int i = 0; i < 2; i++) {
    state(u2[i], HIGH);
  }
  delay(d);
  allOff(0);
  for (int i = 0; i < 3; i++) {
    state(u3[i], HIGH);
  }
  delay(d);
  allOff(0);
  for (int i = 0; i < 4; i++) {
    state(u4[i], HIGH);
  }
  delay(d);
  allOff(0);
  for (int i = 0; i < 3; i++) {
    state(u5[i], HIGH);
  }
  delay(d);
  allOff(0);
  for (int i = 0; i < 2; i++) {
    state(u6[i], HIGH);
  }
  delay(d);
  allOff(0);
  for (int i = 0; i < 1; i++) {
    state(u7[i], HIGH);
  }
  delay(d);
  allOff(0);
}

void sweepV(int d) {
  for (int i = 0; i < 1; i++) {
    state(v1[i], HIGH);
  }
  delay(d);
  allOff(0);
  for (int i = 0; i < 2; i++) {
    state(v2[i], HIGH);
  }
  delay(d);
  allOff(0);
  for (int i = 0; i < 3; i++) {
    state(v3[i], HIGH);
  }
  delay(d);
  allOff(0);
  for (int i = 0; i < 4; i++) {
    state(v4[i], HIGH);
  }
  delay(d);
  allOff(0);
  for (int i = 0; i < 3; i++) {
    state(v5[i], HIGH);
  }
  delay(d);
  allOff(0);
  for (int i = 0; i < 2; i++) {
    state(v6[i], HIGH);
  }
  delay(d);
  allOff(0);
  for (int i = 0; i < 1; i++) {
    state(v7[i], HIGH);
  }
  delay(d);
  allOff(0);
}
