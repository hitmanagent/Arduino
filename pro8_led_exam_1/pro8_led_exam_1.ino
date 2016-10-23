int del(300);
void setup() {
  for (int i = 2; i <= 4; i++ )
  {
    pinMode(i, OUTPUT);
  }
}
void loop() {
  for (int i = 2; i <= 4; i++)
  { digitalWrite (i, HIGH);

  }
  delay (del);
  for ( int i = 2; i <= 4; i++)
  {
    digitalWrite (i, LOW);
  }
  delay(del);
}

