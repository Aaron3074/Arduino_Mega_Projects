int led1 = 22;
int sw1 = 29;
int sw1_value;

void setup(){
  pinMode(led1,OUTPUT);
  pinMode(sw1,INPUT);
  digitalWrite(led1,HIGH);
}

void loop(){
  sw1_value = digitalRead(sw1);
  //Will work only when pressed
  //For press and leave, use delay
  if(sw1_value == LOW){
    digitalWrite(led1,LOW);
    //delay(2000);
  } else {
    digitalWrite(led1,HIGH);
  }
}