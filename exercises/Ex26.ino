/* Programa: Testa o Relé na saída 41 com botões
 * Arduino : Mega
 * Shield  : Relé - Hong Wei Low level Trigger - 5V
 * Autor   : Rahul M. Juliato
 * Data    : 27/09/2019
 */

#define LIGA 27
#define DESL 26
#define RELE 41

int estado_liga = 0;
int estado_desl = 0;

void setup(){
  pinMode(RELE, OUTPUT);
  pinMode(LIGA, INPUT);
  pinMode(DESL, INPUT);
}

void loop(){
  estado_liga = digitalRead(LIGA);
  estado_desl = digitalRead(DESL);

  if (estado_desliga == HIGH){
    digitalWrite(RELE, LOW);
  }
  else {
    if (estado_liga == HIGH){
      digitalWrite(RELE, HIGH);
    }
  }

}
