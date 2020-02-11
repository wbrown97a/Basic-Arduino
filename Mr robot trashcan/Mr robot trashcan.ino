#include <Servo.h>
#include <NewPing.h>
#define TRIGGER_PIN 2
#define ECHO_PIN 4
#define MAX_DISTANCE 50
Servo myservo;
Servo myservo2;


NewPing myHCSR04(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
void setup()
{
	Serial.begin(9600);
    pinMode(7, OUTPUT);
	myservo.attach(9);
	myservo.write(5);
	myservo2.attach(10);
	myservo2.write(90);
}

void loop()
{
	Serial.println(myHCSR04.ping_cm());
	delay(50);                 
    if (myHCSR04.ping_cm() < 5){
    	myservo.write(90);
    	
     }
    else
    	
    	myservo.write(10);
       
      if (myHCSR04.ping_cm() < 5){
    	
        myservo2.write(5); 
    }

    else
    	
        myservo2.write(90);
	
}
