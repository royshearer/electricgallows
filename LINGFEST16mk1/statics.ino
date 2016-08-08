void allOff(int d)  {
  for (int i = rangelo; i < rangehi; i++) {
    state(i, LOW);
  }
  delay(d);
}

void allOn(int d) {
  for (int i = rangelo; i < rangehi; i++) {
    state(i, HIGH);
  }
  delay(d);
  allOff(0);
}

void lineOn(int d, int xline, int yline) {
  if (xline > 0) {
    for (int i = xline * 4 - 4; i < xline * 4; i++) {
      state(raster[i], HIGH);
    }
  }
  if (yline > 0) {
    for (int i = yline - 1; i < 16; i = i + 4) {
      state(raster[i], HIGH);
    }
  }
  delay(d);
  allOff(0);
}

void diagonalOn(int d, int uline, int vline) {
  if (uline > 0) {
    for (int j = 0; j < 4; j++) {
      for (int i = 0; i < 4; i++) {
        if (i + j == uline - 1) {
          state(rasterMatrix[i][j], HIGH);
        }
      }
    }
  }
  if (vline > 0) {
    if (vline == 1) {
      state(v1[0], HIGH);
    }
    if (vline == 2) {
      for (int i = 0; i < 2; i++) {
        state(v2[i], HIGH);
      }
    }
    if (vline == 3) {
      for (int i = 0; i < 3; i++) {
        state(v3[i], HIGH);
      }
    }
    if (vline == 4) {
      for (int i = 0; i < 4; i++) {
        state(v4[i], HIGH);
      }
    }
    if (vline == 5) {
      for (int i = 0; i < 3; i++) {
        state(v5[i], HIGH);
      }
    }
    if (vline == 6) {
      for (int i = 0; i < 2; i++) {
        state(v6[i], HIGH);
      }
    }
    if (vline == 7) {
        state(v7[0], HIGH);
    }
  }
  delay(d);
  allOff(0);
}

void perimeterOn(int d) {
  for (int i = 0; i < 12; i++) {
    state(perimeter[i], HIGH);
  }
  delay(d);
  allOff(0);
}

void circleOn(int d){
  for (int i = 0; i < 8; i++) {
    state(circle[i], HIGH);
  }
  delay(d);
  allOff(0);  
}

void ceilingOn(int d){
  for (int i = 0; i < 4; i++) {
    state(ceiling[i], HIGH);
  }
  delay(d);
  allOff(0);  
}
