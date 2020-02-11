#include <NewPing.h>
#define TRIGGER_PIN 2
#define ECHO_PIN 4
#define MAX_DISTANCE 200
 
NewPing myHCSR04(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
 
void setup() { 
 Serial.begin(9600);
 pinMode(13,OUTPUT);
}
 
void loop() {Serial.println(myHCSR04.ping_cm());
     
     delay(50); 
     if (myHCSR04.ping_cm() > 5)
     	digitalWrite(13, HIGH);
     else
     	digitalWrite(13, LOW);
}
