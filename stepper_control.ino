#include <Stepper.h>
#define STEPS 2038

Stepper stepper(STEPS, 8, 10, 9, 11);
int val;

void setup() {

  Serial.begin(9600);

  stepper.setSpeed(10);

}


void loop() {


   if (Serial.available() > 0) { // check if data is available on the serial port
    String incomingString = Serial.readStringUntil('\r'); // read the incoming data as a string
    if(incomingString == "l") {
        // execute code for "mid" string
        stepper.step(-4);
    }
    else if(incomingString == "r") {
        // execute code for "right" string
        stepper.step(+4);
    }
  }

 
}