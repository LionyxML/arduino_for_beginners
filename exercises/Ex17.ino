/* Programa: Acender LED ao verificar uma entrada
 * Arduino : MEGA 2560
 * Autor   : Rahul M. Juliato
 * Data    : 20/09/2019
 */

int estado_entrada = 0;
 
void setup(){

  pinMode(28, OUTPUT);
  pinMode(29, INPUT);

}


void loop(){

  estado_entrada = digitalRead(29);

  if (estado_entrada == HIGH){
    
    digitalWrite(28, HIGH);
    
  } 
  
  else {

    digitalWrite(28, LOW);
    
  }

}
