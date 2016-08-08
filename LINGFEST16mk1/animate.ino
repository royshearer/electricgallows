void animateLoop() {
//  rain(500, 20, 3); // duration, cycles, trail  // didn't work, not sure why yet
//  allOff(1000);
  ceilingOn(500); // duration
  allOff(1000);
  circleOn(500); // duration
  allOff(1000);
  randomPoint(5000, 100, 3); // duration, cycles, density
  allOff(1000);
  diagonalOn(500, 5, 0);  // duration, u, v
  allOff(1000);
  diagonalOn(500, 0, 5);  // duration, u, v
  allOff(1000);
//  strobeAll(500, 10); // duration, cycles // the installation couldn't handle driving this number of led strings together so we left them out
//  allOff(1000);
//  sweepFillX(500);  // duration
//  allOff(1000);
//  sweepFillY(500);  // duration
//  allOff(1000);
//  sweepFillU(500);  // duration
//  allOff(1000);
//  sweepFillV(500);  // duration
//  allOff(1000);
  rasterChase(500);  // duration
  allOff(1000);
//  perimeterOn(500);  // duration  // too much load
//  allOff(1000);
  lineOn(500, 1, 0);  // duration, x, y
  lineOn(500, 2, 0);  // duration, x, y
  lineOn(500, 3, 0);  // duration, x, y
  lineOn(500, 4, 0);  // duration, x, y
  lineOn(500, 0, 1);  // duration, x, y
  lineOn(500, 0, 2);  // duration, x, y
  lineOn(500, 0, 3);  // duration, x, y
  lineOn(500, 0, 4);  // duration, x, y
  lineOn(500, 1, 1);  // duration, x, y
  lineOn(500, 2, 2);  // duration, x, y
  lineOn(500, 3, 3);  // duration, x, y
  lineOn(500, 4, 4);  // duration, x, y
  allOff(1000);
  perimeterChase(200, 0); // duration, trail
  allOff(1000);
  sweepX(500);  // duration
  allOff(1000);
  sweepY(500);  // duration
  allOff(1000);
  sweepU(500);  // duration
  allOff(1000);
  sweepV(500);  // duration
  allOff(1000);
  bounceX(500, 3);  // duration, cycles
  allOff(1000);
  bounceY(500, 3);  // duration, cycles
  allOff(1000);
  for (int i = 0; i < 4; i++) { // increases trail incrementally
    chase(50, i);  // duration, trail
  }
  allOff(1000);
  for (int i = 50; i < 100; i = i + 5) {  // increases duration incrementally
    chase(i, 3);  // duration, trail
  }
  allOff(1000);
//  allOn(1000);  // duration // too much load
//  allOff(1000);  // duration
}
