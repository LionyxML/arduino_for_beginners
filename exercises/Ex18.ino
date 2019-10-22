/* Programa: Acender LED ao verificar uma entrada
 * Arduino : MEGA 2560
 * Autor   : Rahul M. Juliato
 * Data    : 20/09/2019
 */

#define LED 28
#define BOTAO 29

int estado_entrada = 0;
 
void setup(){
  
  pinMode(LED, OUTPUT);
  pinMode(BOTAO, INPUT);

}

void loop(){

  estado_entrada = digitalRead(BOTAO);

  if (estado_entrada == HIGH){
    
    digitalWrite(LED, HIGH);
    
  } 
  
  else {

    digitalWrite(LED, LOW);
    
  }

}
