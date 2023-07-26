int led1 = 22,led2 = 23, led3 = 24, led4 = 25, led5 = 26;
int sw1 = 29, sw2 = 30;
int sw1_value, sw2_value;

void setup(){
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(sw1,INPUT);
  pinMode(sw2,INPUT);
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
}

void loop(){
  sw1_value = digitalRead(sw1);
  sw2_value = digitalRead(sw2);
  if(sw1_value == LOW){
    digitalWrite(led1,LOW);
    delay(100);
    digitalWrite(led2,LOW);
    delay(100);
    digitalWrite(led3,LOW);
    delay(100);
    digitalWrite(led4,LOW);
    delay(100);
    digitalWrite(led5,LOW);
  }
  if(sw2_value == LOW){
    digitalWrite(led1,HIGH);
    delay(100);
    digitalWrite(led2,HIGH);
    delay(100);
    digitalWrite(led3,HIGH);
    delay(100);
    digitalWrite(led4,HIGH);
    delay(100);
    digitalWrite(led5,HIGH);
  }
}
