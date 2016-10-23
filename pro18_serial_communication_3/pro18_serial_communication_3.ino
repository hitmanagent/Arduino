void setup() {
  Serial.begin(9600);
  establishContact();  // send a byte to establish contact until receiver responds
}

void loop() {
  while (Serial.available() > 0) {
    int a = Serial.read();
    if (a == 'H') {
      Serial.println ("My name is Heramb");
    }
     else if(a == 'S') {
        Serial.println ("My name in Makrand");
      }
    else if (a == 'M') {
        Serial.println ("My name in Manisha");
      }
    else {
      Serial.println ("your not a family member");
    }
  }

}

void establishContact() {
  while (Serial.available() <= 0) {
    Serial.println("ready");   // send a capital A
    delay(300);
  }
}
