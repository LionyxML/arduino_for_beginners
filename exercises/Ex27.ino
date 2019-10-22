/* Programa: Testa o Servo Motor
 * Arduino : Mega
 * Shield  : Servo 9g
 * Autor   : Rahul M. Juliato
 * Data    : 27/09/2019
 */

#include <Servo.h>
Servo s;

void setup(){
  s.attach(25);
  s.write(10);
}

void loop(){
  s.write(90);
  delay(1000);
  s.write(45);
  delay(1000);
  s.write(15);
  delay(1000);
}
