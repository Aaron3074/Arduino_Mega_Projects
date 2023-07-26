#include <LiquidCrystal.h>
LiquidCrystal lcd (47,46,45,44,43,42,41,40,39,38,37);

void setup(){
  lcd.begin(16,2);
}

void loop(){
  //lcd.setCursor(0,0);
  //lcd.print("Hello World");
  //delay(1000);
  //lcd.setCursor(0,1);
  //lcd.print("Sample Data");
  //delay(1000);

  //Letter by Letter
  lcd.setCursor(0,0);
  lcd.print("H");
  delay(500);
  lcd.setCursor(1,0);
  lcd.print("E");
  delay(500);
  lcd.setCursor(2,0);
  lcd.print("L");
  delay(500);
  lcd.setCursor(3,0);
  lcd.print("L");
  delay(500);
  lcd.setCursor(4,0);
  lcd.print("0");
  delay(500);
}