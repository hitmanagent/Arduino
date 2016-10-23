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
    else {
      Serial.println ("My name is Parikshit");
    }
  }

}

void establishContact() {
  while (Serial.available() <= 0) {
    Serial.println("ready");   // send a capital A
    delay(300);
  }
}
