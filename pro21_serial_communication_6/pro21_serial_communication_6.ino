  int del = 100;
void setup() {
  Serial.begin (9600);
  for (int i = 8; i < 12; i++) {
    pinMode (i, OUTPUT);
  }
  void  establishcontact ();
}
void loop () {
  while (Serial.available () > 0) {
    int a = Serial.read ();
    if (a == 'x') {
      Serial.println ("led row starts");
      {
        digitalWrite (8, HIGH);
        digitalWrite (13, HIGH);
        delay (200);
        digitalWrite (8, LOW);
        digitalWrite (13, LOW);
        digitalWrite (9, HIGH);
        digitalWrite (12, HIGH);
        delay (200);
        digitalWrite (9, LOW);
        digitalWrite (12, LOW);
        digitalWrite (10, HIGH);
        digitalWrite (11, HIGH);
        delay (200);
        digitalWrite (10, LOW);
        digitalWrite (11, LOW);
        delay (200);
      }
    }
    else if  (a == 'y') {
      Serial.println ("led rotation starts");
      {
        digitalWrite (8, HIGH);
        delay (del);
        digitalWrite (9, HIGH);
        delay (del);
        digitalWrite (10, HIGH);
        delay (del);
        digitalWrite (11, HIGH);
        delay (del);
        digitalWrite (12, HIGH);
        delay (del);
        digitalWrite (13, HIGH);
        delay (del);
        digitalWrite(8, LOW);
        delay (del);
        digitalWrite(9, LOW);
        delay (del);
        digitalWrite(10, LOW);
        delay (del);
        digitalWrite(11, LOW);
        delay (del);
        digitalWrite(12, LOW);
        delay (del);
        digitalWrite(13, LOW);
        delay (del);
      }
    }

    else if   (a == 'z') {
      Serial.println ("led fwd starts");
      {
        digitalWrite (8, HIGH);
        delay (del);
        digitalWrite (9, HIGH);
        delay (del);
        digitalWrite (10, HIGH);
        delay (del);
        digitalWrite (11, HIGH);
        delay (del);
        digitalWrite (12, HIGH);
        delay (del);
        digitalWrite (13, HIGH);
        delay (del);
        digitalWrite(8, LOW);
        delay (del);
        digitalWrite(9, LOW);
        delay (del);
        digitalWrite(10, LOW);
        delay (del);
        digitalWrite(11, LOW);
        delay (del);
        digitalWrite(12, LOW);
        delay (del);
        digitalWrite(13, LOW);
        delay (del);
        digitalWrite (13, HIGH);
        delay (del);
        digitalWrite (12, HIGH);
        delay (del);
         digitalWrite (11, HIGH);
        delay (del);
        digitalWrite (10, HIGH);
        delay (del);
        digitalWrite (9, HIGH);
        delay (del);
        digitalWrite (8, HIGH);
        delay(del);
        digitalWrite (13, LOW);
        delay (del);
        digitalWrite (12, LOW);
        delay (del);
        digitalWrite (11, LOW);
        delay (del);
        digitalWrite (10, LOW);
        delay(del);
        digitalWrite (9, LOW);
        delay(del);
        digitalWrite (8, LOW);
        delay(del);
      }
    }
     else {
   Serial.print ("The controls are x,y,z");
    }
  }
}

void establishcontact() {
  while (Serial.available() <= 0) {
    Serial.println("ready");   // send a capital A
    delay(300);
  }
}


