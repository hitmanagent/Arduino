void setup() {
  Serial.begin (9600);
  for (int i = 8; i < 12; i++) {
    pinMode (i, OUTPUT);
  }
  establishContact ();
}


void loop() {
  while (Serial.available () > 0) {
    int a = Serial.read ();
    if (a == 'R') {
      Serial.println("red led on");
      digitalWrite (8, HIGH);
      digitalWrite (13, HIGH);
    }
    else if (a == 'r') {
      Serial.println("red led off");
      digitalWrite (8, LOW);
      digitalWrite (13, LOW);
    }
    else if (a == 'Y') {
      Serial.println("yellow led on");
      digitalWrite (9, HIGH);
      digitalWrite (12, HIGH);
    }
    else if (a == 'y') {
      Serial.println("yellow led off");
      digitalWrite (9, LOW);
      digitalWrite (12, LOW);
    }
    else if (a == 'G') {
      Serial.println("green led on");
      digitalWrite (10, HIGH);
      digitalWrite (11, HIGH);
    }
    else if (a == 'g') {
      Serial.println("green led off");
      digitalWrite (10, LOW);
      digitalWrite (11, LOW);
    }
  }
}
void establishContact() {
  while (Serial.available() <= 0) {
    Serial.println("ready");   // send a capital A
    delay(300);
  }
}
