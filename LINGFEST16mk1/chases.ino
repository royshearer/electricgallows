void chase(int d, int trail) {
  for (int i = rangelo; i < rangehi; i++) {
    state(i, HIGH);
    for (int j = 0; j <= trail; j++) {
      state((i + j) % rangehi, HIGH);
    }
    delay(d);
    state(i, LOW);
    for (int j = 0; j <= trail; j++) {
      state((i + j) % rangehi, LOW);
    }
  }
}

void perimeterChase(int d, int trail) {
  for (int i = 0; i < 12; i++) {
    state(perimeter[i], HIGH);
    for (int j = 0; j <= trail; j++) {
      state(perimeter[(i + j) % 12], HIGH);
    }
    delay(d);
    state(i, LOW);
    for (int j = 0; j <= trail; j++) {
      state(perimeter[(i + j) % 12], LOW);
    }
  }
}

void rasterChase(int d) {
  for (int j = 0; j < 4; j++) {
    for (int i = 0; i < 4; i++) {
      state(rasterMatrix[i][j], HIGH);
      delay(d);
      allOff(0);
    }
  }
}

