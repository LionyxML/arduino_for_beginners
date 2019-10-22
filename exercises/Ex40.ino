/* Programa: Medidor de Temperatura
 * Arduino : MEGA
 * Data    : 30/09/2019
 * Autor   : Rahul M. Juliato
 */

int leitura;
float temperatura;

void setup(){

  Serial.begin(9600);
  
}

void loop() {

  leitura = analogRead(A8);
  temperatura = ((5.0 * leitura) / 1023.0 * 100.0);
  Serial.println(temperatura);
  delay(500);

}
