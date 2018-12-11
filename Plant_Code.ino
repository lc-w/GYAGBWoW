/* Grow You A Great Big Web of Wires - A Plant Project by LCW
 * 
 * Experiment 5 - Creation & Computation - Digital Futures, OCAD University - Taught by Kate Hartman / Nick Puckett
 * 
 * Based on "Lab: Serial Input to P5.js" on ITP Physical Computing site
 * https://itp.nyu.edu/physcomp/labs/labs-serial-communication/lab-serial-input-to-the-p5-js-ide/
 * 
 * Circuit: 
 * switch connected to pin 5 and ground
 * switch connected to pin 6 and ground
 * switch connected to pin 7 and ground 
 */

int switch1val;
int switch2val;
int switch3val;

void setup() {
  //start serial connection
  Serial.begin(9600);
  //configure pin 2 as an input and enable the internal pull-up resistor
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(11, OUTPUT);

}

void loop() {

   // read the switch value
  switch3val = digitalRead(5);
  // print out the switch value
  Serial.print(switch3val);
    // print a comma to separate the values
  Serial.print(",");

   // read the switch value
  switch2val = digitalRead(6);
  // print out the switch value
  Serial.print(switch2val);
    // print a comma to separate the values
  Serial.print(",");
  
  // read the switch value
  switch1val = digitalRead(7);
  // print out the switch value
  Serial.print(switch1val);
  // print a comma to separate the values
  Serial.print(",");

  // Turn on the LED string any time any of the switches are activated
  if (switch1val == LOW || switch2val == LOW || switch3val == LOW) {
    digitalWrite(11, HIGH);
  } else {
    digitalWrite(11, LOW);
  }
}
