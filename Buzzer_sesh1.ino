int buzzer1 = 31;

void setup(){
  pinMode(buzzer1,OUTPUT);
  noTone(buzzer1);
}

void loop(){
  tone(buzzer1,200);
  delay(1000);
  tone(buzzer1,120);
  delay(1000);
  tone(buzzer1,30);
  delay(1000);
  noTone(buzzer1);
  delay(2000);
}