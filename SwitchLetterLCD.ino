#include <LiquidCrystal.h>
LiquidCrystal lcd (47,46,45,44,43,42,41,40,39,38,37);

int sw1 = 29;
int sw1_value;
int counter;

void setup(){
  lcd.begin(16,2);
  pinMode(sw1,INPUT);
}

void loop(){
  sw1_value = digitalRead(sw1);
  if (sw1_value == LOW){
    lcd.print("H");
    delay(1000);
    lcd.clear();
  }
  
}