/****************************************
  Example Sound Level Sketch for the
  Adafruit Microphone Amplifier
****************************************/

const int sampleWindow = 50; // Sample window width in mS (50 mS = 20Hz)
unsigned int sample;

void soundSetup()
{
  //Serial.begin(9600); // conflicts with lights on channels 0 and 1
}


void soundLoop()
{
  unsigned long startMillis = millis(); // Start of sample window
  unsigned int peakToPeak = 0;   // peak-to-peak level

  unsigned int signalMax = 0;
  unsigned int signalMin = 1024;

  // collect data for 50 mS
  while (millis() - startMillis < sampleWindow)
  {
    sample = analogRead(5);
    if (sample < 1024)  // toss out spurious readings
    {
      if (sample > signalMax)
      {
        signalMax = sample;  // save just the max levels
      }
      else if (sample < signalMin)
      {
        signalMin = sample;  // save just the min levels
      }
    }
  }
  peakToPeak = signalMax - signalMin;  // max - min = peak-peak amplitude
  double volts = (peakToPeak * 40) / 1024;  // convert to volts // adjust multiplier to fit mic
  allOff(0);
  for (int j = 0; j < volts; j++) { // fills from bottom up, proportional to volume
    for (int i = 1; i < 3; i++) {
      if (i == 0 && j == 3) {
        state(rasterMatrix[i][j], LOW);
      } else {
        state(rasterMatrix[i][j], HIGH);

      }
    }
  }
  //Serial.println(volts);  // conflicts with lights on channels 0 and 1
}
