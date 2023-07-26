//int led1 = ;
int led1 = 32;
int led2 = 34;
char value;

void setup(){
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  Serial.begin(9600);
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
}

void loop(){
  if(Serial.available()>0){
    value = Serial.read();
    Serial.println(value);
    if (value == '1'){
      digitalWrite(led1,HIGH);
      Serial.println("BULB1 ON");
      delay(1000);
    }
    else if (value == '2') {
      digitalWrite(led1,LOW);
      Serial.println("BULB1 OFF");
      delay(1000);
    }
    else if (value == '3') {
      digitalWrite(led2,HIGH);
      Serial.println("BULB2 OFF");
      delay(1000);
    }
    else if (value == '4') {
      digitalWrite(led2,LOW);
      Serial.println("BULB2 OFF");
      delay(1000);
    }
  }
}
