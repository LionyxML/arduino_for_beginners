/* Programa: Teste de comunicação do Arduino
 * Arduino : MEGA
 * Data    : 30/09/2019
 * Autor   : Rahul M. Juliato
 */

float tempo = 3.1415;
char texto[] = "Coisinha mahr linda de meu Deus";

void setup(){
  
  Serial.begin(9600);

}

void loop(){
  Serial.print("O valor de tempo é: ");
  Serial.print(tempo, 4);
  Serial.print("\n");
  Serial.print("E o valor de texto é: ");
  Serial.print(texto);
  Serial.print("\n \n");
  
  delay(1000);
}
