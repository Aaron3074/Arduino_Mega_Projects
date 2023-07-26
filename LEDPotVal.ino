int led1 = 24;
int led2 = 25;
int led3 = 26;
int A = A14;
int x = 0;

void setup(){
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(A,INPUT);
  Serial.begin(9600);
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
}

void loop(){
  x = analogRead(A);
  Serial.println(x);
  delay(1000);
  if (x <= 200){
    digitalWrite(led1,LOW);
  }
  else if (x>200 && x<=400){
    digitalWrite(led2,LOW);
  }
  else if(x>400 && x<=600){
    digitalWrite(led3,LOW);
  }
}
