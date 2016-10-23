int red = 2;
int yellow = 3;
int green = 4;


void setup () {
  for (int i = 2; i < 5; i++ )
  {
    pinMode (i, OUTPUT);
  }

  for (int i = 2; i < 5; i++ )
  {
    digitalWrite (i, LOW);

  }

}
void loop() {

    digitalWrite (red, HIGH);
    delay (3000);
    digitalWrite (red, LOW);
    digitalWrite (yellow, HIGH);
    delay (2000);
    digitalWrite (yellow, LOW);
    digitalWrite (green, HIGH);
    delay (6000);
    digitalWrite (green, LOW);
    digitalWrite (yellow, HIGH);
    delay (1000);
    digitalWrite (yellow, LOW);

  }




