
/*

 Demonstrates the use of a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 This sketch prints "Greets" the audience as a demonstration of "Welcome Home Funtion" of Pixel Project
 and shows the time elapsed.

  The circuit:
 * LCD RS pin to digital pin 7
 * LCD Enable pin to digital pin 8
 * LCD D4 pin to digital pin 9
 * LCD D5 pin to digital pin 10
 * LCD D6 pin to digital pin 11
 * LCD D7 pin to digital pin 12
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)
 */

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a blank message to the LCD .
  lcd.print(" ");
}

void loop() {
  delay(2000);
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 0);
  lcd.print("Servus Grias Di!");
  lcd.setCursor(0, 1);
  lcd.print("PALFINGER     ");
  delay(4000);
  lcd.setCursor(0, 0);
  lcd.print("Ich bin der Teo");
  lcd.setCursor(0, 1);
  lcd.print("Freut mich");
  delay(4000);
  // print the number of seconds since reset:
  //lcd.print(millis() / 1000);
}
