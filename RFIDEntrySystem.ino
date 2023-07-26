int led1 = 22;
int led2 = 23;
int led3 = 24;
int led4 = 25;
int led5 = 26;
String value;

void setup(){
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  Serial3.begin(9600);
  Serial.begin(9600);
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
}

void loop(){
  if(Serial3.available()>0){
    value = Serial3.readString();
    Serial.println(value);
    if (value == "3B003B616B0A"){
      Serial.println("Entry Allowed");
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);
      digitalWrite(led5,LOW);
      delay(1500);
      digitalWrite(led1,HIGH);
      digitalWrite(led2,HIGH);
      digitalWrite(led3,HIGH);
      digitalWrite(led4,HIGH);
      digitalWrite(led5,HIGH);
    }
    else if (value == "3B003B484D05"){
      Serial.println("Check Admin");
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      delay(1500);
      digitalWrite(led1,HIGH);
      digitalWrite(led2,HIGH);
      digitalWrite(led3,HIGH);
    }
    else if (value == "3E0068104701"){
      Serial.println("Invalid Entry");
    }
  }
}