#include <Wire.h>
#include <LiquidCrystal_I2C.h> 

int x = 0;

LiquidCrystal_I2C lcd(0x27,16,2);  
void setup()
{lcd.begin(16,2);
	lcd.init();
lcd.backlight();
}

void loop()
{
	lcd.setCursor(0,1);
	lcd.print(x++);
	delay(1000);
}

