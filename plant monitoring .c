#include <LiquidCrystal.h> 
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(5, 4);
// These constants won't change. They're used to give names
// to the pins used:
const int analogInPin = A5; // Analog input pin that the Sensor is attached to
int sensorValue = 0; // value read from the Soil Moisture 
void setup() {
// set up the LCD's number of columns and rows:

lcd.begin(16, 2);
delay(100);
} 
void loop() {
lcd.clear();
lcd.print("Soil Moisture:");// print the results to the LCD Display:
sensorValue = analogRead(analogInPin);// read the analog in value:
lcd.setCursor(0, 1);
lcd.print(sensorValue);
// wait 300 milliseconds before the next loop for the 
//analog-to-digital converter to settle after the last reading:
delay(300);
}
