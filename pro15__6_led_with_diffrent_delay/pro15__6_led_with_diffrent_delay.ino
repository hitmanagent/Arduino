int del1 = 200;
int del2 = 200;
int del3 = 200;

void setup () {
  for (int i = 8; i < 14; i++) {
    pinMode (i, OUTPUT);
  }
}
void loop() {
  digitalWrite (8, HIGH);
  digitalWrite (13, HIGH);
  delay (del1);
  digitalWrite (8, LOW);
  digitalWrite (13, LOW);
  digitalWrite (9, HIGH);
  digitalWrite (12, HIGH);
  delay (del2);
  digitalWrite (9, LOW);
  digitalWrite (12, LOW);
  digitalWrite (10, HIGH);
  digitalWrite (11, HIGH);
  delay (del3);
  digitalWrite (10, LOW);
  digitalWrite (11, LOW);

}
