#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F, 16, 2);
int x = 0;
const byte ledPin = 3;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 1);
  lcd.print (x);
}

void loop() {
  // put your main code here, to run repeatedly:
int val = analogRead(A0);
  val = map(val, 0, 1023, 0, 255);
  analogWrite(3, val);
}
