const int switchPin = 8;
unsigned long previousTime = 0;
int switchState = 0;
int prewSwitchState = 0;
int led = 2;
long interval = 600000;

void setup() {
  // declares pin 2-7 as OUTPUT
  for (int x = 2; x < 8; x++){
    pinMode(x, OUTPUT);
  } 
  pinMode(switchPin, INPUT);
}

void loop(){
  unsigned long currentTime = millis();
  if currentTime - previousTime > interval){
    previousTime = currentTime;
    // light the led x and step up one
    digitalWrite(x, LOW);
    led++;
    if(led ==7){
      // what to do here?
    }
  }
  switchState = digitalRead(switchPin);
  if (switchState != prevSwitchState){
    for (int x = 2; x < 8 ; x++){
      digitalWrite(x, LOW);
    }
    
    led = 2;
    previousTime = currentTime;
  }
  prevSwitchState = switchState;
}
