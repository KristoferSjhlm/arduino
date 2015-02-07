int switchState = 0;

void setup(){
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(2,INPUT);
}

void loop(){
  switchState = digitalRead(2);
  if (switchState == LOW){
    // the button is not pressed
    digitalWrite(3, HIGH); // only the green led is lit
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }
  else {
    // the button is pressed
    digitalWrite(3, LOW); // green is out
    digitalWrite(4, LOW); 
    digitalWrite(5, HIGH);
    delay(50);
    // toogle LED 4 and 5
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(50);
  }
}
