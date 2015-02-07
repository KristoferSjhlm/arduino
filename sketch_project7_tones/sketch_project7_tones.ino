int buttons[6];
// set up an an array eith 6 integers

int buttons[0] = 2;
// give the first element the value 2

int  notes[] = {262,294,330,349];

void setup (){
  Serial.begin(9600);
}

void loop(){
  int keyVal = analogRead(AO);
  Serial.println(keyVal); 
  if (keyVal == 1023){
   tone(8, notes[0]);
  }
  else if(keyVal >= 990 && keyVal <=  1010){
    tone(8, notes[1]);
  }
  else if(keyVal >= 505 && eyVal <=  515){
    tone(8, notes[2]);
  }
  else if(keyVal >= 5 && keyVal <=  10){
    tone(8, notes[3]);
  }
  else {
    tone(8, notes[3]);
  }
}


