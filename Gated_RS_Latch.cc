int setPin = 2;
int resetPin = 3; 
int ePin = 4; //Key to vault
int ledPin = 13;

bool latchState = LOW; //Start off and low
//This is a Boolean, like an RS latch, made with logic gates in BOOLean algebra

void setup() {
    //Define outputs and inputs
  pinMode(setPin, INPUT_PULLUP); //Buttons have been introduced, to avoid random electrical noise, the INPUT_PULLUP is used with Arduino internal resistor :D
  pinMode(resetPin, INPUT_PULLUP);
  pinMode(ePin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

void loop() {

  if(digitalRead(ePin) == LOW) {
      if (digitalRead(setPin) == LOW) { //Key to unlock the vault
        latchState = HIGH;
        delay(100);
      }
      if (digitalRead(resetPin) == LOW) { //Key to close the value
        //It checks for low when it goes to ground, meaning it was pressed and it will too also output a low
        latchState = LOW;
        delay(100);
    }
  }
    digitalWrite(ledPin, latchState); //Updates so that the led will reflect the state of the Gated RS Latch
}

//January 12th, 2026
//Additional Logic Latch learnt in class today :D
