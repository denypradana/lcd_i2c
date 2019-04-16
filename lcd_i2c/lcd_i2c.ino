#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
 
void setup() {
  lcd.begin();
}
 
void loop(){
  lcd.setCursor(2,0);
  lcd.print("TEST LCD i2C");
  lcd.setCursor(2,1);
  lcd.print("Deny Pradana");
}
