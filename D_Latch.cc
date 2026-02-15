int dataPin = 2;
int ePin = 4;
int ledPin = 13;

bool latchState = LOW; //Start off and low
//This is a Boolean, like an RS latch, made with logic gates in BOOLean algebra

void setup() {
    //Define outputs and inputs
  pinMode(dataPin, INPUT_PULLUP); //Buttons have been introduced, to avoid random electrical noise, the INPUT_PULLUP is used with Arduino internal resistor :D
  pinMode(ePin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

void loop() {

  if(digitalRead(ePin) == LOW) { //When the enable button is turned on, now able to save the current state
    
    if(digitalRead(dataPin) == LOW) { //When the set button is pressed to save the "ON" state
      latchState = HIGH; 
    }
      else { 
        latchState = LOW; //However, if the set button or the "current state" is not pressed or 0, the latchState is off :D 
      }
    delay(100);
    } 
  digitalWrite(ledPin, latchState); 
}
//January 12th, 2026
//D-Latch, Saves 1 bit of data :D
