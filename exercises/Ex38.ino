/* Programa: Teste da Entrada Analógica - Converte em Volts
 * Arduino : MEGA
 * Data    : 30/09/2019
 * Autor   : Rahul M. Juliato
 */

int leitura;
float volts;

void setup(){

  Serial.begin(9600);
  
}

void loop() {

  leitura = analogRead(A8);
  volts = (float)(5 * leitura) / 1023;
  Serial.print(leitura);
  Serial.print(" = ");
  Serial.println(volts);

  delay(100);

}
