int buzzer1 = 31;
int sw1 = 29, sw2 = 30, sw3 = 27, sw4 = 28;
int sw1_value, sw2_value, sw3_value, sw4_value;

void setup(){
  pinMode(buzzer1,OUTPUT);
  pinMode(sw1,INPUT);
  pinMode(sw2,INPUT);
  pinMode(sw3,INPUT);
  pinMode(sw4,INPUT);
  noTone(buzzer1);
}

void loop(){
  sw1_value = digitalRead(sw1);
  sw2_value = digitalRead(sw2);
  sw3_value = digitalRead(sw3);
  sw4_value = digitalRead(sw4);
  
  if (sw1_value == LOW){
    tone(buzzer1,200);
  }
  if (sw2_value == LOW){
    tone(buzzer1,150);
  }
  if (sw3_value == LOW){
    tone(buzzer1,100);
  }
  if (sw4_value == LOW){
    tone(buzzer1,50);
  }
  else {
    noTone(buzzer1);
  }
}