/* Programa: Pisca-Pisca com supervisão
 * Arduino : MEGA
 * Data    : 30/09/2019
 * Autor   : Rahul M. Juliato
 */

int quantidade=0;

void setup(){
  
  pinMode(13, OUTPUT);
  Serial.begin(9600);
      
}

void loop(){

  Serial.print("O pisca-pisca já piscou: ");
  Serial.print(quantidade);
  Serial.print(" vezes \n");

  quantidade = quantidade + 1;

  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(100);

}
