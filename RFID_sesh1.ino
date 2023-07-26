String value;

void setup(){
  Serial3.begin(9600);
  Serial.begin(9600);
}

void loop(){
  if(Serial3.available()>0){
    value = Serial3.readString();
    Serial.println(value);
  }
}