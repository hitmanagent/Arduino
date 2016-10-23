const int sensorMin = 0;
const int sensorMax = 600;
int pin1 = 13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
    pinMode(pin1, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorReading = analogRead(A0);
  int range = map(sensorReading, sensorMin, sensorMax, 0, 3);

  switch (range) {
    case 0:
      Serial.println("dark");
      digitalWrite (pin1, HIGH);
      break;
    case 1:
      Serial.println("dim");
      digitalWrite (pin1, HIGH);
      break;
    case 2:
      Serial.println("medium");
      digitalWrite (pin1, LOW);
      break;
    case 3:
      Serial.println("bright");
      digitalWrite (pin1, LOW);
      break;
  }
  delay(100);
}

