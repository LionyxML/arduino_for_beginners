/* Programa: Teste do Display de LCD - Cursor
 * Arduino : MEGA
 * Data    : 30/09/2019
 * Autor   : Rahul M. Juliato
 */
  
#include <LiquidCrystal.h>

const int rs = 24, en = 26, d4 = 36, d5 = 34, d6 = 32, d7 = 30;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup(){

  lcd.begin(16, 2);
  lcd.display();

}


void loop() {

  lcd.setCursor(0, 0);
  lcd.print("Cursor -> ");
  lcd.noBlink();
  delay(3000);
  lcd.blink();
  delay(3000);
  
}
