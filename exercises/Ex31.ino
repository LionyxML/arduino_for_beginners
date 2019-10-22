/* Programa: Teste de comunicação do Arduino
 * Arduino : MEGA
 * Data    : 30/09/2019
 * Autor   : Rahul M. Juliato
 */

int i;

void setup(){
  
  Serial.begin(9600);

}

void loop(){

  for(i=1;i<=50;i++){
    Serial.print("O valor de i é: ");
    Serial.print(i);
    Serial.print("\n");
    delay(250);
  }

}
