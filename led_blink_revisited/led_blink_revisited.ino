int x = 0;


void setup() {
 // put your setup code here, to run once:
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int x = 0; x <= 255; x = x + 10) {
    analogWrite(6, x);
    delay(50);
    for (int i = 0; i < x; i = i +10) {
      Serial.print("-");
    }Serial.println("");

  }
  for (int x = 255; x >= 0; x = x - 10) {
    analogWrite(6, x);
    delay(50);
for (int i = x; i > 0; i = i - 10) {
      Serial.print("-");
    }Serial.println("");
  }
 



}
