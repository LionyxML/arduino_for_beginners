/* Programa: Teste de Buzzer
 * Arduino : Mega
 * Autor   : Rahul M. Juliato
 * Data    : 26/09/2019
 */

#define buzzer 22 

void setup(){
 
  pinMode(buzzer, OUTPUT); 

}

void loop(){
 
  tone(buzzer, 659*2, 500);
  delay(10);
  noTone(buzzer);   
  tone(buzzer, 659*2, 500);
  delay(10);
  noTone(buzzer); 
  tone(buzzer, 698*2, 500);
  delay(10);
  noTone(buzzer); 
  tone(buzzer, 783*2, 500);
  delay(10);
  noTone(buzzer); 
  tone(buzzer, 783*2, 500); 
  delay(10);  
  noTone(buzzer); 
  tone(buzzer, 698*2, 500);
  delay(10); 
  noTone(buzzer); 
  tone(buzzer, 659*2, 500);
  delay(500);
  noTone(buzzer); 
  tone(buzzer, 622*2, 500);   
  delay(10);
  noTone(buzzer); 
  tone(buzzer, 554*2, 500);
  delay(10);
  noTone(buzzer); 
    
}
