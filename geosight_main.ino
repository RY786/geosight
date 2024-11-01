#include <DFRobotDFPlayerMini.h>

DFRobotDFPlayerMini myDFPlayer;

void setup() {
  Serial.begin(9600); // Serial monitor
  Serial1.begin(9600); // Serial communication for DFPlayer on Serial1 (TX1/RX1 for Arduino Mega)

  if (!myDFPlayer.begin(Serial1)) {
    Serial.println("Unable to begin. Please check connections and SD card.");
    while (true);
  }

  Serial.println("DFPlayer Mini online.");

  myDFPlayer.volume(10); // Set volume to 30 (range is 0 to 30)
  myDFPlayer.play(1); // Play the first file
}

void loop() {
  // No actions needed in loop for basic playback
}
