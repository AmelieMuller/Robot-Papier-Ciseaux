#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x27,20,4);


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.init();  //initialize the lcd
  lcd.backlight();  //open the backlight
  lcd.setCursor ( 0, 0 );            // go to the top left corner
  lcd.print("ROBOT PAPIER CISEAUX");
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor ( 0, 3 );
  lcd.print("      Pierre      ");

  lcd.setCursor ( 0, 3 );
  lcd.print("      Ciseaux       ");

  lcd.setCursor ( 0, 3 );
  lcd.print("      Feuille       ");

}
