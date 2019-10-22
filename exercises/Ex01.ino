/* 
 *  Programa: Piscar o led interno da placa
 *  Arduino : MEGA 2560
 *  Autor   : Rahul M. Juliato
 *  Data    : 16.09.2019
 */

/* Setup roda somente ao energizar o Arduino */
void setup(){

  pinMode(13, OUTPUT);           // Configura o pino 13 como saída

}

/* Loop é o laço de repetição infinito */
void loop(){

  digitalWrite(13, HIGH);        // Coloca o pino 13 em nível alto (5V)
  delay(1000);                   // Aguarda 1 segundo
  digitalWrite(13, LOW);         // Coloca o pino 13 em nível baixo (0V)
  delay(1000);                   // Aguarda 1 segundo
  
}
