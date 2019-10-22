/* Programa: Teste da Entrada Analógica
 * Arduino : MEGA
 * Data    : 30/09/2019
 * Autor   : Rahul M. Juliato
 */

int leitura;

void setup(){

  Serial.begin(9600);
  
}

void loop() {

  leitura = analogRead(A8);
  Serial.println(leitura);

}
