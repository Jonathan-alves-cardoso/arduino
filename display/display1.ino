#include<LiquidCrystal.h>

byte lamp = 6;
int tempo = 0;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  pinMode(lamp, OUTPUT);
  lcd.begin(16,2);
}

void loop () {
  
  
  lcd.setCursor(0,0);
  
  for(int i=0; i <= 10; i++) {
  lcd.print(i);
  delay(500);
  lcd.clear();
  }
  
  digitalWrite(lamp, 1);
  delay(3000);
  digitalWrite(lamp, 0);
  delay(1000);
}
  