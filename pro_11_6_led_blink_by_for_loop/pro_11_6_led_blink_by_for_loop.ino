int del (300);
void setup () {
  for (int i = 8; i < 14; i++ ) {
    pinMode(i, OUTPUT);
  }
}
void loop () {
  for (int i = 8; i < 14; i++) {
    digitalWrite (i, HIGH);
    i++;
  }
  for (int j = 9; j < 14; j++) {
    digitalWrite (j, HIGH);
    j++;
  }
  delay (del);
  for (int i = 8; i < 14; i++) {
    digitalWrite (i, LOW);
    i++;
  }
  delay (del);
  for (int j = 8; j < 14; j++) {
    digitalWrite (j, LOW);
    j++;
  }
  delay (del);

}

