int led1 = 22;
int i = 0;

void setup(){
  pinMode(led1,OUTPUT);
}

void loop(){
  //Restricting led to 5 times on/off switch
  if (i<5){
    for (i = 0; i < 5; i++){
    digitalWrite(led1,LOW);
    delay(1000);
    digitalWrite(led1,HIGH);
    delay(1000);
  }
  i++;
  //Condition for switching off
  } else {
    digitalWrite(led1,HIGH);
  }


}