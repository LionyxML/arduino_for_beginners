/* Programa: Saída analógica (PWM)
 * Arduino : MEGA
 * Data    : 02/10/2019
 * Autor   : Rahul M. Juliato
 */

#define LED 9

int i;

void setup(){

  pinMode(LED, OUTPUT);
  
}

void loop() {

  for(i=0;i<255;i++){
    analogWrite(LED, i);
    delay(5);
  }

  for(i=255;i>0;i--){
    analogWrite(LED, i);
    delay(5);
  }

}
