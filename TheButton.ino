/*
 * TheButton.pde
 *
 * It emulates a space bar, and you can't do it faster than once per half second.
 *
 * pin 10 is for the button. pin 11 is the LED. The LED turns on when you push the button.
 *
 */

void setup() {
  Serial.begin(9600);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, OUTPUT);
  delay(3000); // wait 3 seconds
}

void loop() {
  if (digitalRead(10) == HIGH) {
    delay(10);
  } else {
    Keyboard.print(" "); // we print a space
    digitalWrite(11, HIGH); // set the LED on
    delay(500);
    digitalWrite(11, LOW); // set the LED off
  }
  delay(10);
}
