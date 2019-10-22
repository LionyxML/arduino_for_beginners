/* 
 *  Programa: Piscar o led interno da placa - versão 2
 *  Arduino : MEGA 2560
 *  Autor   : Rahul M. Juliato
 *  Data    : 18.09.2019
 */

#define LED 26

void setup(){

  pinMode(LED, OUTPUT);          

}

void loop(){

  digitalWrite(LED, HIGH);       
  delay(1000);                   
  digitalWrite(LED, LOW);       
  delay(1000);                  
  
}
