void randomPoint(int d, int rate, int num) {
  for (int j = 0; j < rate; j++) {
    for (int i = 0; i < num; i++) {
      state(random(0, 16), HIGH);
    }
    delay(d / rate);
    allOff(0);
  }
}

void rain(int d, int rate, int trail) {
  for (int k = 0; k < rate; k++) {
    i = random(0, 4);
    for (int j = 3; j <= 0 - trail; j--) {
      state(rasterMatrix[i][j], HIGH);
      for (int t = 0; t <= trail; t++) {
        state(rasterMatrix[i][j + t], HIGH);
      }
      delay(d / rate);
      allOff(0);
    }
  }
}

