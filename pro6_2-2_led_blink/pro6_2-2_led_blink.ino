int led1 = 13;
int led2 = 12;
int led3 = 10;
int led4 = 11;
int del = 200;
void setup () {
  pinMode(led1, OUTPUT);
  pinMode (led2, OUTPUT);
  pinMode (led3, OUTPUT);
  pinMode (led4, OUTPUT);
  digitalWrite (led1, LOW);
  digitalWrite (led2, LOW);
  digitalWrite (led3, LOW);
  digitalWrite (led4, LOW);
}
void loop() {
  digitalWrite (led1, HIGH);
  digitalWrite (led2, LOW);
  digitalWrite (led3, LOW);
  digitalWrite (led4, HIGH);
  delay (del);
  digitalWrite (led1, LOW);
  digitalWrite (led2, HIGH);
  digitalWrite (led3, HIGH);
  digitalWrite (led4, LOW);
  delay (del);
}








