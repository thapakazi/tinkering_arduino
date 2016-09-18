// Desc: 2nd HelloWorld with arduino
// Sun Sep 18 NPT 2016
//
// It read input from pin: 6 based on which it lights on a led attached on pin 10
// thanks to @rughimire dai 😃

// arduino read from pin7
int inputPIN = 6;

// output to signal/control from arduino
int outputPIN = 10;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(inputPIN, INPUT);
  pinMode(outputPIN, OUTPUT);

  delay(2000);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  int buttonState = digitalRead(inputPIN);
  // print out the state of the button:
  Serial.println(buttonState);
  delay(200);        // delay in between reads for stability */
  if(buttonState)
    digitalWrite(outputPIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  else
    digitalWrite(outputPIN, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
}



