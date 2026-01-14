int togglePin = 2;
int ePin = 3;
int ledPin = 13;

//Defines that intially, it is turned on
bool latchState = LOW; 
//Defines that the last state was off, or when first starting, the light would initially be off instead of on
bool lastTState = HIGH;

void setup() {
    //Define outputs and inputs
  pinMode(togglePin, INPUT_PULLUP); //Buttons have been introduced, to avoid random electrical noise, the INPUT_PULLUP is used with Arduino internal resistor :D
  pinMode(ePin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

void loop() {

  bool tState = digitalRead(togglePin);
  bool sePin = digitalRead(ePin);

    if (tState == LOW && lastTState == HIGH && sePin == LOW) { //3-Variable AND GATE
    
    latchState = !latchState; // Flip the state as HIGH = Not Pressed and Low = Pressed
    digitalWrite(ledPin, latchState);
    
    delay(100); //Bouncy Bouncy
  } 
  
  lastTState = tState; //Current States becomes the previous state for next loop :)
}
//January 14th, 2026
//Never have I gotten so frustrated over Comp. Sci. I am going to push the buttons to relieve the stress and anger rn :)
//At least it works :D
