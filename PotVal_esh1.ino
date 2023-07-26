int A = A14;
int x=0;

void setup(){
  Serial.begin(9600);
  pinMode(A,INPUT);
}

void loop(){
  x = analogRead(A);
  Serial.println(x);
  //delay(1000);
}