int buzzer1 = 31;
int sw1 = 29;
int sw1_value;

void setup(){
  pinMode(buzzer1,OUTPUT);
  pinMode(sw1,INPUT);
  noTone(buzzer1);
}

void loop(){
  sw1_value = digitalRead(sw1);
  if (sw1_value == LOW){
    tone(buzzer1,200);
  }
  else {
    noTone(buzzer1);
  }
}
