/* Programa: Testa o Relé na saída 41
 * Arduino : Mega
 * Shield  : Relé - Hong Wei Low level Trigger - 5V
 * Autor   : Rahul M. Juliato
 * Data    : 27/09/2019
 */

#define RELE 41
#define TEMPO 5000

void setup(){
  pinMode(RELE, OUTPUT);
}

void loop(){
  digitalWrite(RELE, HIGH);
  delay(TEMPO);
  digitalWrite(RELE, LOW);
  delay(TEMPO);
}
