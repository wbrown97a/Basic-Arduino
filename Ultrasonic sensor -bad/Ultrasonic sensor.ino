int trig = 2;
int echo = 4;
int distance;
int duration;

void setup()
{
	Serial.begin(9600);
	pinMode(trig, OUTPUT);
	pinMode(echo, INPUT);
}

void loop()
{
	digitalWrite(trig, LOW);
	delay(5);
	digitalWrite(trig, HIGH);
	delay(10);
	digitalWrite(trig, LOW);
	duration = pulseIn(echo, HIGH);
	Serial.println(distance);
}
