int sw1 = 29;
int sw1_value;

void setup(){
  pinMode(sw1,INPUT);
  Serial.begin(9600);
}

void loop(){
  sw1_value = digitalRead(sw1);
  if (sw1_value == LOW){
    Serial.println("Hello");
    Serial.println("World");
    //delay(1000);
  }
}