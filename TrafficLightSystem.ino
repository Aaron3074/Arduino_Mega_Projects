//1-red,2-yellow,3-green
int led1 = 22;
int led2 = 23;
int led3 = 24;

void setup(){
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  //All Off initiallys
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
}

void loop(){
  //Sequence -->GYB with breaks
  digitalWrite(led3,LOW);
  delay(3000);
  digitalWrite(led3,HIGH);
  digitalWrite(led2,LOW);
  delay(2000);
  digitalWrite(led2,HIGH);
  digitalWrite(led1,LOW);
  delay(2000);
  digitalWrite(led1,HIGH);
}