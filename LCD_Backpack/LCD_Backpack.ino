#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
const int buttonPin = 2;
int x = 0;
int BTNDOWN = 0;
void setup()
{
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Hello World");
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println(digitalRead(buttonPin));
  lcd.setCursor(0, 1);
  if ((digitalRead(buttonPin) == HIGH) && (BTNDOWN == 0)) {
    BTNDOWN = 1;
   x = x + 1;
    lcd.print(x);

  }
  if (digitalRead(buttonPin) == LOW) {
    BTNDOWN = 0;
  }
}
