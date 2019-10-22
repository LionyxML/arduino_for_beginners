/* Programa: Teste do Display de LCD - Scroll
 * Arduino : MEGA
 * Data    : 30/09/2019
 * Autor   : Rahul M. Juliato
 */
  
#include <LiquidCrystal.h>

int i;

const int rs = 24, en = 26, d4 = 36, d5 = 34, d6 = 32, d7 = 30;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup(){

  lcd.begin(16, 2);
  lcd.display();
  lcd.print("Viva o Arduino!");

}


void loop() {

  for(i=1;i<=16;i++){
    lcd.scrollDisplayLeft();
    delay(150);
  }

  for(i=1;i<=32;i++){
    lcd.scrollDisplayRight();
    delay(150);
  }

  for(i=1;i<=16;i++){
    lcd.scrollDisplayLeft();
    delay(150);
  }

}
