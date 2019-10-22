/* 
 *  Programa: Piscar Led externo a placa no pino 26
 *  Arduino : MEGA 2560
 *  Autor   : Rahul M. Juliato
 *  Data    : 18.09.2019
 */
 
const int led = 26;
const int ton = 100;
const int tof = 50;

void setup(){
  pinMode(LED, OUTPUT);          
}

void loop(){
  digitalWrite(led, HIGH);       
  delay(ton);                   
  digitalWrite(led, LOW);       
  delay(tof);                 
}
