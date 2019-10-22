/* Programa: Testa o Servo Motor
 * Arduino : Mega
 * Shield  : Servo 9g
 * Autor   : Rahul M. Juliato
 * Data    : 27/09/2019
 */

#include <Servo.h>
Servo s;

int i;
int angulo=5;

void setup(){
  s.attach(25);
  s.write(angulo);
}

void loop(){

  for (i=1;i<=100;i++){
    
    s.write(angulo);
    angulo = angulo + 1;
    delay(10);
    
  }
  angulo = 5;
  
}
