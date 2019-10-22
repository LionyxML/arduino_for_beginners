/* Programa: Led RGB
 * Arduino : MEGA
 * Data    : 03/10/2019
 * Autor   : Rahul M. Juliato
 */

int ledr = 7; 
int ledg = 5;
int ledb = 6;

void setup(){

  pinMode(ledr, OUTPUT);
  pinMode(ledg, OUTPUT);
  pinMode(ledb, OUTPUT);
  
}

void loop() {

  analogWrite(ledr, 255);
  analogWrite(ledg, 0);
  analogWrite(ledb, 0);
  delay(2000);

  analogWrite(ledr, 0);
  analogWrite(ledg, 255);
  analogWrite(ledb, 0);
  delay(2000);

  analogWrite(ledr, 0);
  analogWrite(ledg, 0);
  analogWrite(ledb, 255);
  delay(2000);

  analogWrite(ledr, 255);
  analogWrite(ledg, 255);
  analogWrite(ledb, 0);
  delay(2000);

  analogWrite(ledr, 255);
  analogWrite(ledg, 0);
  analogWrite(ledb, 255);
  delay(2000);
  
}
