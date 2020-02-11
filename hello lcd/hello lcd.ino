#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

int x = 0;

void setup()
{
	lcd.begin(16, 2);
	lcd.setCursor(0,0);
		lcd.print("Hello World");
		lcd.init();
lcd.backlight();
}

void loop()
{
	lcd.setCursor(0,1);
	lcd.print(x++);
	delay(1000);



}