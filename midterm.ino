#include <Servo.h>
#include <NewPing.h>
#define TRIGGER_PIN 2
#define ECHO_PIN 4
#define MAX_DISTANCE 50
Servo myservo;

boolean brain = false;

NewPing myHCSR04(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
void setup()
{
	Serial.begin(9600);
    
	myservo.attach(9);
	myservo.write(5);

}

void loop()
{                                                                                               
	Serial.println(myHCSR04.ping_cm());
	delay(50);
    if (myHCSR04.ping_cm() > 5){
    	myservo.write(270);
    	
     }
  
 if (myHCSR04.ping_cm() > 5){
        myservo.write(0);
    }
}