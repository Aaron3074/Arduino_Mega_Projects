String value;

void setup(){
  Serial2.begin(9600);
  Serial.begin(9600);
}

void loop(){
  if(Serial2.available()>0){
    value = Serial2.readString();
    Serial.println(value);
  }
}