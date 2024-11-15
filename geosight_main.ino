#include <DFRobotDFPlayerMini.h>

DFRobotDFPlayerMini myDFPlayer;

// Digital Pins 44-53
const int buttonPin37 = 37;
const int buttonPin36 = 36;
const int buttonPin38 = 38;
const int buttonPin39 = 39;
const int buttonPin40 = 40;
const int buttonPin41 = 41;
const int buttonPin42 = 42;
const int buttonPin43 = 43;
const int buttonPin44 = 44;
const int buttonPin45 = 45;
const int buttonPin46 = 46;
const int buttonPin47 = 47;
const int buttonPin48 = 48;
const int buttonPin49 = 49;
const int buttonPin50 = 50;
const int buttonPin51 = 51;
const int buttonPin52 = 52;
const int buttonPin53 = 53;

// Analog Pins 9-15
const int buttonPin9 = A9;
const int buttonPin10 = A10;
const int buttonPin11 = A11;
const int buttonPin12 = A12;
const int buttonPin13 = A13;
const int buttonPin14 = A14;
const int buttonPin15 = A15;

void setup() {
  // Start serial communication
  Serial.begin(9600);
  Serial1.begin(9600);

  // Set button pins as input with internal pull-up resistors
  pinMode(buttonPin50, INPUT_PULLUP);  // No internal pull-up resistor needed (connected to 5V)
  pinMode(buttonPin49, INPUT_PULLUP);
  pinMode(buttonPin48, INPUT_PULLUP);
  pinMode(buttonPin47, INPUT_PULLUP);
  pinMode(buttonPin46, INPUT_PULLUP);
  pinMode(buttonPin45, INPUT_PULLUP);
  pinMode(buttonPin44, INPUT_PULLUP);
  pinMode(buttonPin43, INPUT_PULLUP);
  pinMode(buttonPin42, INPUT_PULLUP);
  pinMode(buttonPin41, INPUT_PULLUP);
  pinMode(buttonPin40, INPUT_PULLUP);
  pinMode(buttonPin39, INPUT_PULLUP);
  pinMode(buttonPin38, INPUT_PULLUP);
  pinMode(buttonPin37, INPUT_PULLUP);
  pinMode(buttonPin36, INPUT_PULLUP);

  pinMode(buttonPin51, INPUT_PULLUP);
  pinMode(buttonPin52, INPUT_PULLUP);
  pinMode(buttonPin53, INPUT_PULLUP);
  pinMode(buttonPin9, INPUT_PULLUP);
  pinMode(buttonPin10, INPUT_PULLUP);
  pinMode(buttonPin11, INPUT_PULLUP);
  pinMode(buttonPin12, INPUT_PULLUP);
  pinMode(buttonPin13, INPUT_PULLUP);
  pinMode(buttonPin14, INPUT_PULLUP);
  pinMode(buttonPin15, INPUT_PULLUP);

  if (!myDFPlayer.begin(Serial1)) {
    Serial.println("Unable to begin. Please check connections and SD card.");
    while (true);
  }

  Serial.println("DFPlayer Mini online.");
}

void loop() {
  // Read the button states DIGITAL
  int buttonState36 = digitalRead(buttonPin36);
  int buttonState37 = digitalRead(buttonPin37);
  int buttonState38 = digitalRead(buttonPin38);
  int buttonState39 = digitalRead(buttonPin39);
  int buttonState40 = digitalRead(buttonPin40);
  int buttonState41 = digitalRead(buttonPin41);
  int buttonState42 = digitalRead(buttonPin42);
  int buttonState43 = digitalRead(buttonPin43);
  int buttonState44 = digitalRead(buttonPin44);
  int buttonState45 = digitalRead(buttonPin45);
  int buttonState46 = digitalRead(buttonPin46);
  int buttonState47 = digitalRead(buttonPin47);
  int buttonState48 = digitalRead(buttonPin48);
  int buttonState49 = digitalRead(buttonPin49);
  int buttonState50 = digitalRead(buttonPin50);
  int buttonState51 = digitalRead(buttonPin51);
  int buttonState52 = digitalRead(buttonPin52);
  int buttonState53 = digitalRead(buttonPin53);
  //ANALOG
  int buttonState9 = digitalRead(buttonPin9);
  int buttonState10 = digitalRead(buttonPin10);
  int buttonState11 = digitalRead(buttonPin11);
  int buttonState12 = digitalRead(buttonPin12);
  int buttonState13 = digitalRead(buttonPin13);
  int buttonState14 = digitalRead(buttonPin14);
  int buttonState15 = digitalRead(buttonPin15);


  myDFPlayer.volume(20); // Set volume to 10 (range is 0 to 30)

  if (buttonState36 == LOW) {
    Serial.println("Button on pin 36 is pressed!");
    myDFPlayer.play(1); // Play file 1
  }
  if (buttonState37 == LOW) {
    Serial.println("Button on pin 37 is pressed!");
    myDFPlayer.play(2); // Play file 2
  }
  if (buttonState38 == LOW) {
    Serial.println("Button on pin 38 is pressed!");
    myDFPlayer.play(3); // Play file 3
  }
  if (buttonState39 == LOW) {
    Serial.println("Button on pin 39 is pressed!");
    myDFPlayer.play(4); // Play file 4
  }
  if (buttonState40 == LOW) {
    Serial.println("Button on pin 40 is pressed!");
    myDFPlayer.play(5); // Play file 5
  }
  if (buttonState41 == LOW) {
    Serial.println("Button on pin 41 is pressed!");
    myDFPlayer.play(6); // Play file 6
  }
  if (buttonState42 == LOW) {
    Serial.println("Button on pin 42 is pressed!");
    myDFPlayer.play(7); // Play file 7
  }
  if (buttonState43 == LOW) {
    Serial.println("Button on pin 43 is pressed!");
    myDFPlayer.play(8); // Play file 8
  }
  if (buttonState44 == LOW) {
    Serial.println("Button on pin 44 is pressed!");
    myDFPlayer.play(9); // Play file 9
  }
  if (buttonState45 == LOW) {
    Serial.println("Button on pin 45 is pressed!");
    myDFPlayer.play(10); // Play file 10
  }
  if (buttonState46 == LOW) {
    Serial.println("Button on pin 46 is pressed!");
    myDFPlayer.play(11); // Play file 11
  }
  if (buttonState47 == LOW) {
    Serial.println("Button on pin 47 is pressed!");
    myDFPlayer.play(12); // Play file 12
  }
  if (buttonState48 == LOW) {
    Serial.println("Button on pin 48 is pressed!");
    myDFPlayer.play(13); // Play file 13
  }
  if (buttonState49 == LOW) {
    Serial.println("Button on pin 49 is pressed!");
    myDFPlayer.play(14); // Play file 14
  }
  if (buttonState50 == LOW) {
    Serial.println("Button on pin 50 is pressed!");
    myDFPlayer.play(15); // Play file 15
  }
  if (buttonState51 == LOW) {
    Serial.println("Button on pin 51 is pressed!");
    myDFPlayer.play(16); // Play file 16
  }
  if (buttonState52 == LOW) {
    Serial.println("Button on pin 52 is pressed!");
    myDFPlayer.play(17); // Play file 17
  }
  if (buttonState53 == LOW) {
    Serial.println("Button on pin 53 is pressed!");
    myDFPlayer.play(18); // Play file 18
  }
  if (buttonState9 == LOW) {
    Serial.println("Button on pin 9 is pressed!");
    myDFPlayer.play(19); // Play file 19
  }
  if (buttonState10 == LOW) {
    Serial.println("Button on pin 10 is pressed!");
    myDFPlayer.play(20); // Play file 20
  }
  if (buttonState11 == LOW) {
    Serial.println("Button on pin 11 is pressed!");
    myDFPlayer.play(21); // Play file 21
  }
  if (buttonState12 == LOW) {
    Serial.println("Button on pin 12 is pressed!");
    myDFPlayer.play(22); // Play file 22
  }
  if (buttonState13 == LOW) {
    Serial.println("Button on pin 13 is pressed!");
    myDFPlayer.play(23); // Play file 23
  }
  if (buttonState14 == LOW) {
    Serial.println("Button on pin 14 is pressed!");
    myDFPlayer.play(24); // Play file 24
  }
  if (buttonState15 == LOW) {
    Serial.println("Button on pin 15 is pressed!");
    myDFPlayer.play(25); // Play file 25
  }





  delay(50);  // Small delay to avoid multiple detections
}
