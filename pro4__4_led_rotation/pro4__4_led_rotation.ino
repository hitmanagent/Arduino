int pin1 = 13;
int pin2 = 12;
int pin3 = 10;
int pin4 = 11;
int del = 100;
void setup () {

  pinMode (pin1, OUTPUT);
  pinMode (pin2, OUTPUT);
  pinMode (pin3, OUTPUT);
  pinMode (pin4, OUTPUT);
}

void loop () {
  digitalWrite (pin1, HIGH);
  delay (del);
  digitalWrite (pin2, HIGH);
  delay (del);
  digitalWrite (pin3, HIGH);
  delay (del);
  digitalWrite (pin4, HIGH);
  delay (del);
  digitalWrite(pin1, LOW);
  delay (del);
  digitalWrite(pin2, LOW);
  delay (del);
  digitalWrite(pin3, LOW);
  delay (del);
  digitalWrite(pin4, LOW);
  delay (del);
}

