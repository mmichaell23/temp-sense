#include <Adafruit_LiquidCrystal.h>

Adafruit_LiquidCrystal lcd(0); // library of the variable on lcd

void setup() { // setup void
  lcd.begin(16, 2); // lcd mesurement
}

void loop() { // loop void 
  lcd.setCursor(0, 0); // set the position
  lcd.setBacklight(1); // set the backlight to 'on'
  delay(50); // delay for about half seconds
  temperature(); // func
}

// func
int value(int x, int y) { 
  return x / y;
}

void temperature() {
  int x = 0;
  int y = 2;
  x = analogRead(A0); // store the var 'x' to analog pin number '0'
  int result = value(x,y); // will divide the two variables
  lcd.print(result); // will print the result
  lcd.print(" F"); // print the statement
}