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
 
  tone(buzzer, 1000);
  delay(1000);       
  noTone(buzzer);  
  delay(1000); 
  
}
