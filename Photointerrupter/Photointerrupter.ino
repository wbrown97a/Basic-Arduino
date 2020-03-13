

const byte ledPin = 2;
const byte photoPin = 3;
int count = 0;
volatile byte blue = LOW;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(photoPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(photoPin), blink, FALLING );
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(count);
  digitalWrite(ledPin, blue);
  delay(200);
}

void blink() {
  blue = !blue;
  count = count + 1;
}
