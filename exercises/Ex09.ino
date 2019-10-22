/*
Programa: Pisca-pisca no Port A
Arduino : MEGA 2560 
Autor   : Rahul M. Juliato
Data    : 20.09.2019
*/

const int tempo = 250;

void setup(){

  DDRA = B11111111;
  
}

void loop() {
  
  PORTA = B11111111;
  delay(tempo);                      
  PORTA = B00000000;
  delay(tempo);      
                  
}
