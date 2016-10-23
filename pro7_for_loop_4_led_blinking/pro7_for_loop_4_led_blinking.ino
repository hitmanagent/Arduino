int del = 300;
void setup() {
  // put your setup code here, to run once:
  for (int i = 10; i <= 14; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  for (int i = 10; i <= 14; i++) {
    digitalWrite(i, HIGH);
  }
  delay(del);
  for (int i = 10; i <= 14; i++) {
    digitalWrite(i, LOW);
  }
  delay(del);
}
