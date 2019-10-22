/* Programa: Saída analógica (PWM)
 * Arduino : MEGA
 * Data    : 02/10/2019
 * Autor   : Rahul M. Juliato
 */

#define LED 9

void setup(){

  pinMode(LED, OUTPUT);
  
}

void loop() {

  analogWrite(LED, 127);

}
