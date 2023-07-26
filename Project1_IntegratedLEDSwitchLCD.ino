#include <LiquidCrystal.h>
LiquidCrystal lcd (47,46,45,44,43,42,41,40,39,38,37);

int led1 = 22, led2 = 23, led3 = 24, led4 = 25, led5 = 26;
int sw1 = 29, sw2 = 30, sw3 = 27, sw4 = 28;
int sw1_value, sw2_value, sw3_value, sw4_value;

void setup(){
  lcd.begin(16,2);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(sw1,INPUT);
  pinMode(sw2,INPUT);
  pinMode(sw3,INPUT);
  pinMode(sw4,INPUT);
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,LOW);
}

void loop(){
  sw1_value = digitalRead(sw1);
  sw2_value = digitalRead(sw2);
  sw3_value = digitalRead(sw3);
  sw4_value = digitalRead(sw4);

  if (sw1_value == LOW){
    //digitalWrite(led5,HIGH);
    digitalWrite(led1,LOW);
    lcd.setCursor(0,0);
    lcd.print("LED1 IS ON");
    delay(2000);
    lcd.clear();
    digitalWrite(led1,HIGH);
    //digitalWrite(led5,LOW);
  }
  else if (sw2_value == LOW){
    //digitalWrite(led5,HIGH);
    digitalWrite(led2,LOW);
    lcd.setCursor(0,0);
    lcd.print("LED2 IS ON");
    delay(2000);
    lcd.clear();
    digitalWrite(led2,HIGH);
    //digitalWrite(led5,LOW);
  }
  else if (sw3_value == LOW){
    //digitalWrite(led5,HIGH);
    digitalWrite(led3,LOW);
    lcd.setCursor(0,0);
    lcd.print("LED3 IS ON");
    delay(2000);
    lcd.clear();
    digitalWrite(led3,HIGH);
    //digitalWrite(led5,LOW);
  }
  else if (sw4_value == LOW){
    //digitalWrite(led5,HIGH);
    digitalWrite(led4,LOW);
    lcd.setCursor(0,0);
    lcd.print("LED4 IS ON");
    delay(2000);
    lcd.clear();
    digitalWrite(led4,HIGH);
    //digitalWrite(led5,LOW);
  }
  else {
    digitalWrite(led5,LOW);
    lcd.setCursor(0,0);
    lcd.print("DEFAULT MODE ON");
    delay(2000);
    lcd.clear();
    digitalWrite(led5,HIGH);
  }
}
