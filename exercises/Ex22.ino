/* Programa: Pisca-Pisca ajustável
 * Arduino : MEGA 2560
 * Data    : 25/09/2019
 * Autor   : Rahul M. Juliato
 */
#define BOTAO1 30
#define BOTAO2 29
#define LED 28

int estado1 = 0;   
int estado2 = 0;
int tempo = 100;

void setup(){
  pinMode(BOTAO1, INPUT);
  pinMode(BOTAO2, INPUT);
  pinMode(LED, OUTPUT);
}

void loop(){

  digitalWrite(LED, HIGH);
  delay(tempo);
  digitalWrite(LED, LOW);
  delay(tempo);

  /* Botão 1 -> acelera o pisca-pisca */
  estado1 = digitalRead(BOTAO1);
  if (estado1 == HIGH){
    if (tempo >= 20){
      tempo = tempo - 10;
    }
  }

  /* Botão 2 -> desacelera o pisca-pisca */
  estado2 = digitalRead(BOTAO2);
  if (estado2 == HIGH){
    if (tempo < 100){
      tempo = tempo + 10;
    }
  }

}
