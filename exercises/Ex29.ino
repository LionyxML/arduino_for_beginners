/* Programa: Testa o Servo Motor com botões
 * Arduino : Mega
 * Shield  : Servo 9g
 * Autor   : Rahul M. Juliato
 * Data    : 27/09/2019
 */
#include <Servo.h>
Servo s;

#define MAIS 37
#define MENOS 35

int i;
int angulo = 10;
int estado_mais = 0;
int estado_menos = 0;

void setup(){
  pinMode(MAIS, INPUT);
  pinMode(MENOS, INPUT);
  s.attach(25);
  s.write(angulo);
}

void loop(){

  estado_mais = digitalRead(MAIS);
  estado_menos = digitalRead(MENOS);

  if (estado_mais == HIGH){
    if (angulo < 190){
      angulo = angulo + 10;
    }
  }

  if (estado_menos == HIGH){
    if (angulo > 10){
      angulo = angulo - 10;
    }
  }
    
  s.write(angulo);
  delay(10);
  
}
