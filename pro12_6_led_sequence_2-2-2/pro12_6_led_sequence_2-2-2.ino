int del(300);
void setup () {
  for (int i = 8; i < 14; i++)
  {
    pinMode (i, OUTPUT);
  }
}
void loop () {
  digitalWrite (8, HIGH);
  digitalWrite (9, HIGH);
  delay (del);
  digitalWrite (8, LOW);
  digitalWrite (9, LOW);
  delay(del);
  digitalWrite (10, HIGH);
  digitalWrite (11, HIGH);
  delay (del);
  digitalWrite (10, LOW);
  digitalWrite (11, LOW);
  delay (del);
  digitalWrite (12, HIGH);
  digitalWrite (13, HIGH);
  delay(del);
  digitalWrite (12, LOW);
  digitalWrite (13, LOW);
  delay (del);

}

