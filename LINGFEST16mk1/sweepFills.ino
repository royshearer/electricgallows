void sweepFillX(int d) {
  for (int j = 0; j < 4; j++) {
    for (int i = 0; i < 4; i++) {
      state(rasterMatrix[j][i], HIGH);
    }
    delay(d);
  }
  allOff(0);
}

void sweepFillY(int d) {
  for (int j = 0; j < 4; j++) {
    for (int i = 0; i < 4; i++) {
      state(rasterMatrix[i][j], HIGH);
    }
    delay(d);
  }
  allOff(0);
}

void sweepFillU(int d) {
  for (int i = 0; i < 4; i++) {
    state(u1[i], HIGH);
  }
  delay(d);
  for (int i = 0; i < 4; i++) {
    state(u2[i], HIGH);
  }
  delay(d);
  for (int i = 0; i < 4; i++) {
    state(u3[i], HIGH);
  }
  delay(d);
  for (int i = 0; i < 4; i++) {
    state(u4[i], HIGH);
  }
  delay(d);
  for (int i = 0; i < 4; i++) {
    state(u5[i], HIGH);
  }
  delay(d);
  for (int i = 0; i < 4; i++) {
    state(u6[i], HIGH);
  }
  delay(d);
  for (int i = 0; i < 4; i++) {
    state(u7[i], HIGH);
  }
  delay(d);
  allOff(0);
}

void sweepFillV(int d) {
  for (int i = 0; i < 4; i++) {
    state(v1[i], HIGH);
  }
  delay(d);
  for (int i = 0; i < 4; i++) {
    state(v2[i], HIGH);
  }
  delay(d);
  for (int i = 0; i < 4; i++) {
    state(v3[i], HIGH);
  }
  delay(d);
  for (int i = 0; i < 4; i++) {
    state(v4[i], HIGH);
  }
  delay(d);
  for (int i = 0; i < 4; i++) {
    state(v5[i], HIGH);
  }
  delay(d);
  for (int i = 0; i < 4; i++) {
    state(v6[i], HIGH);
  }
  delay(d);
  for (int i = 0; i < 4; i++) {
    state(v7[i], HIGH);
  }
  delay(d);
  allOff(0);
}
