int motor1_1 = 33, motor1_2 = 34, motor2_1 = 35, motor2_2 = 36;

void setup(){
  pinMode(motor1_1,OUTPUT);
  pinMode(motor1_2,OUTPUT);
  pinMode(motor2_1,OUTPUT);
  pinMode(motor2_2,OUTPUT);
}

void loop(){
  digitalWrite(motor1_1,HIGH);
  digitalWrite(motor1_2,LOW);
  digitalWrite(motor2_1,HIGH);
  digitalWrite(motor2_2,LOW);
}