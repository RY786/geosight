#include <DFRobotDFPlayerMini.h>

DFRobotDFPlayerMini myDFPlayer;


const int buttonPin50 = 50; // Pin 50 is connected to the button
const int buttonPin48 = 48; // Pin 48 is connected to the button
const int buttonPin49 = 49; // Pin 49 is connected to the button



void setup() {
  // Start serial communication
  Serial.begin(9600);
  Serial1.begin(9600);
  
  // Set the button pin as input
  pinMode(buttonPin50, INPUT_PULLUP);  // No internal pull-up resistor needed (connected to 5V)
  pinMode(buttonPin49, INPUT_PULLUP);
  pinMode(buttonPin48, INPUT_PULLUP);


  if (!myDFPlayer.begin(Serial1)) {
    Serial.println("Unable to begin. Please check connections and SD card.");
    while (true);
  }

  Serial.println("DFPlayer Mini online.");



  
}

void loop() {
  // Read the button state
  int buttonState50 = digitalRead(buttonPin50);
  int buttonState48 = digitalRead(buttonPin48);
  int buttonState49 = digitalRead(buttonPin49);

  
  // Check if the button is pressed
  myDFPlayer.volume(10); // Set volume to 30 (range is 0 to 30)

  if (buttonState50 == LOW) {  // LOW means the button is pressed
    Serial.println("Button on pin 50 is pressed!");
    myDFPlayer.play(1); // Play the first file
  }
  if (buttonState49 == LOW) {  // LOW means the button is pressed
    Serial.println("Button on pin 50 is pressed!");
    myDFPlayer.play(2); // Play the first file
  }
  if (buttonState48 == LOW) {  // LOW means the button is pressed
    Serial.println("Button on pin 50 is pressed!");
    myDFPlayer.play(3); // Play the first file
  }
  
  
  // Small delay to avoid multiple detections
  delay(50);
}
