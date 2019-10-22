/* Programa: Liga/Desliga LED com 2 botões (Desliga Dominante)
 * Arduino : MEGA 2560
 * Data    : 25/09/2019
 * Autor   : Rahul M. Juliato
 */

#define BOTAO1 30
#define BOTAO2 29
#define LED 28

int estado1 = 0;    //Declaração + reset da variável
int estado2 = 0;

void setup(){
  pinMode(BOTAO1, INPUT);
  pinMode(BOTAO2, INPUT);
  pinMode(LED, OUTPUT);
}

void loop(){

  estado1 = digitalRead(BOTAO1);
  estado2 = digitalRead(BOTAO2);

  if (estado2 == HIGH){
    digitalWrite(LED, LOW);
  }
  else {
    if (estado1 == HIGH){
        digitalWrite(LED, HIGH);
    }
  }

}
