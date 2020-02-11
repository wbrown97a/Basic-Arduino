#include <Servo.h>
Servo myservo;
int trig = 2;
int echo = 4;
int dist;
void setup()
{
	Serial.begin(9600);
	pinMode(trig, OUTPUT);
	pinMode(echo, INPUT);
	myservo.attach(9);
	myservo.write(0);
}

void loop()
{
	dist = getDistance();
	if (dist > 5)
		myservo.write(180);
	else
		if ((dist > 1) && (dist < 5))
			myservo.write(0);
	else
		if (dist < 2)
			myservo.write(93);
}

int getDistance()
{
	int distance;
	int duration;
	digitalWrite(trig, LOW);
	delay(5);
	digitalWrite(trig, HIGH);
	delay(10);
	digitalWrite(trig, LOW);
	duration = pulseIn(echo, HIGH);
	distance = duration * 0.01330 / 2;
	return distance;
}
