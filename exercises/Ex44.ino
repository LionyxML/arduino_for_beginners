/* Programa: Leitura para saída analógica
 * Arduino : MEGA
 * Data    : 02/10/2019
 * Autor   : Rahul M. Juliato
 */

int led = 9; 
int pot = A0;

int leitura;
int saida;

void setup(){

  pinMode(led, OUTPUT);
  
}

void loop() {

  leitura = analogRead(pot);
  saida = map(leitura, 0, 1023, 0, 255);
  analogWrite(led, saida);
  delay(1);

}
