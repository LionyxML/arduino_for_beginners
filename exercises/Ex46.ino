/* Programa: Led RGB controlado por potenciômetros
 * Arduino : MEGA
 * Data    : 03/10/2019
 * Autor   : Rahul M. Juliato
 */

int potr = A9;
int potg = A8;
int potb = A7;

int ledr = 7; 
int ledg = 5;
int ledb = 6;

int leiturar = 0;
int leiturag = 0;
int leiturab = 0;

int saidar = 0;
int saidag = 0;
int saidab = 0;

void setup(){

  pinMode(ledr, OUTPUT);
  pinMode(ledg, OUTPUT);
  pinMode(ledb, OUTPUT);
  
}

void loop() {

  leiturar = analogRead(potr);
  leiturag = analogRead(potg);
  leiturab = analogRead(potb);

  saidar = map(leiturar, 0, 1023, 0, 255);
  saidag = map(leiturag, 0, 1023, 0, 255);
  saidab = map(leiturab, 0, 1023, 0, 255);

  analogWrite(ledr, saidar);
  analogWrite(ledg, saidag);
  analogWrite(ledb, saidab);
  
}
