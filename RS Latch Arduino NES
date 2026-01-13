int setPin = 2;
int resetPin = 3; 
int ledPin = 13;

bool latchState = LOW; //Start off and low
//This is a Boolean, like an RS latch, made with logic gates in BOOLean algebra

void setup() {
    //Define outputs and inputs
  pinMode(setPin, INPUT_PULLUP); //Buttons have been introduced, to avoid random electrical noise, the INPUT_PULLUP is used with Arduino internal resistor :D
  pinMode(resetPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

void loop() {
    if (digitalRead(setPin) == LOW) { //Checks if the NES has been turned on and whether Super Mario Bros will run :D Double Equal sign as it is a comparision; When the button is pressed, it will rush to low
      latchState = HIGH;
      delay(100);
    }
    if (digitalRead(resetPin) == LOW) { //Checks whether your mom has come and turned it off, as it is time to go to bed
      //It checks for low when it goes to ground, meaning it was pressed and it will too also output a low
      latchState = LOW;
      delay(100);
    }
    digitalWrite(ledPin, latchState); //Updates so that the led will reflect the state of the RS Latch
}

//Created January 12th, 2026
//Created after realization and created an analogy for an RS Latch in Comp. Sci.
