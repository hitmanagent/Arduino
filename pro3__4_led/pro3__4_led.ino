int pin1 = 13;
int pin2 = 12;
int pin3 = 11;
int pin4 = 10;
int pin5 = 9;
int pin6 = 8;
void setup () {

  pinMode (pin1, OUTPUT);
  pinMode (pin2, OUTPUT);
  pinMode (pin3, OUTPUT);
  pinMode (pin4, OUTPUT);
}

void loop () {
  digitalWrite (pin1, HIGH);
  digitalWrite (pin2, HIGH);
  digitalWrite (pin3, HIGH);
  digitalWrite (pin4, HIGH);
  digitalWrite (pin5, HIGH);
  digitalWrite (pin6, HIGH);
  delay (1000);
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  digitalWrite (pin5, LOW);
  digitalWrite (pin6, LOW);
  delay (1000);
}

