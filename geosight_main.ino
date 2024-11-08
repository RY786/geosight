#include <DFRobotDFPlayerMini.h>

DFRobotDFPlayerMini myDFPlayer;
int button1 = digitalRead(7);


void setup() {
  pinMode(7, INPUT_PULLUP);
  Serial.begin(9600); // Serial monitor
  Serial1.begin(9600); // Serial communication for DFPlayer on Serial1 (TX1/RX1 for Arduino Mega)

  if (!myDFPlayer.begin(Serial1)) {
    Serial.println("Unable to begin. Please check connections and SD card.");
    while (true);
  }

  Serial.println("DFPlayer Mini online.");

  myDFPlayer.volume(20); // Set volume to 30 (range is 0 to 30)
  if(button1 == HIGH) {
    myDFPlayer.play(1); // Play the first file
  }

}

void loop() {
  
}
