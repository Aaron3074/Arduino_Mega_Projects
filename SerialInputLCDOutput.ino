String data;
#include <LiquidCrystal.h>
LiquidCrystal lcd (47,46,45,44,43,42,41,40,39,38,37);

void setup(){
  Serial.begin(9600);
  lcd.begin(16,2);
}

void loop(){
  if (Serial.available()>0){
    data = Serial.readString();
    Serial.print(data);
    if (data = "Message"){
      //Serial.println(data);
      //delay(100);
      lcd.setCursor(0,0);
      lcd.print("Correct Input");
      delay(1000);
    }
    else {
      //Serial.println("Wrong Input");
      //delay(100);
      lcd.setCursor(0,0);
      lcd.print("Wrong Input");
      delay(1000);
    }
  }
}
