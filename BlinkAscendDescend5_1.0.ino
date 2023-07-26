//Declaring variables with pins
int led1 = 22;
int led2 = 23;
int led3 = 24;
int led4 = 25;
int led5 = 26;
int i = 0;

void setup(){
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  //Setting all LEDs to off initially
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
}

void loop(){
  //Condition for 5 times
  if (i<5){
    for (i = 0; i < 5; i++){
      //Ascending Switching On LEDs
      digitalWrite(led1,LOW);
      delay(500);
      digitalWrite(led2,LOW);
      delay(500);
      digitalWrite(led3,LOW);
      delay(500);
      digitalWrite(led4,LOW);
      delay(500);
      digitalWrite(led5,LOW);
      delay(500);
      //Descending Switching Off LEDs
      digitalWrite(led5,HIGH);
      delay(500);
      digitalWrite(led4,HIGH);
      delay(500);
      digitalWrite(led3,HIGH);
      delay(500);
      digitalWrite(led2,HIGH);
      delay(500);
      digitalWrite(led1,HIGH);
      delay(500);
    }
    //Incrementing Counter
    i++;
  } else {
    //Condition reached, permanently switching off all LEDs
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
  }
}