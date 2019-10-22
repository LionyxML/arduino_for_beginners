/* Programa: Teste da Entrada Analógica - Converte em %
 * Arduino : MEGA
 * Data    : 30/09/2019
 * Autor   : Rahul M. Juliato
 */

int leitura;
float porcentagem;

void setup(){

  Serial.begin(9600);
  
}

void loop() {

  leitura = analogRead(A8);
  porcentagem = (100.0 * leitura) / 1023.0;
  Serial.print(leitura);
  Serial.print(" = ");
  Serial.println(porcentagem);

  delay(100);

}
