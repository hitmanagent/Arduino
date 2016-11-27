#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

//declare variables
float tempC;
float tempC1;
float tempC2;
float tempF;
int tempPin = 1;

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  Serial.begin(9600);
  lcd.print("Nashik =");
  lcd.setCursor(0, 1);

}

void loop() {
  tempC1= analogRead(tempPin);
  tempC2= (tempC1/1024)*5000;
tempC = tempC2/10;
//  tempC = (5.0 * tempC ) / 1024.0;
//  tempC = ((tempC * 9) / 5) + 32;        

  // print result to lcd display
  lcd.setCursor(6, 0);
//  lcd.print(tempC, 1);
  lcd.print(tempC,1);
  lcd.print("'C");
//  Serial.println(tempC1);
  Serial.println("temp");
  Serial.println(tempC);

  // sleep...
  delay(1000);
}
