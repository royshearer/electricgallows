void strobeAll(int d, int rate) {
  for (int j = 0; j < rate; j++) {
    for (int i = rangelo; i < rangehi; i++) {
      state(i, HIGH);
    }
    delay(d / (2 * rate));
    allOff(0);
    delay(d / (2 * rate));
  }
}

void strobeLine(int d, int rate, int xline, int yline) {
  for (int j = 0; j < rate; j++) {
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
    delay(d / (2 * rate));
    allOff(0);
    delay(d / (2 * rate));
  }
}

void strobePerimeter(int d, int rate) {
  for (int j = 0; j < rate; j++) {
    for (int i = 0; i < 12; i++) {
      state(perimeter[i], HIGH);
    }
    delay(d / (2 * rate));
    allOff(0);
    delay(d / (2 * rate));
  }
}

