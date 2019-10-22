/* Programa: Básico para aquisição do estado de uma entrada
 * Arduino : MEGA 2560
 * Autor   : Rahul M. Juliato
 * Data    : 20/09/2019
 */

const int entrada_pino = 29;

int entrada_estado = 0;

void setup(){
  
  pinMode(entrada_pino, INPUT);

}


void loop(){

  entrada_estado = digitalRead(entrada_pino);

}
