/*
Programa: Pisca-pisca no Port A - 1 sim, 1 não
Arduino : MEGA 2560 
Autor   : Rahul M. Juliato
Data    : 20.09.2019
*/

const int tempo = 250;

void setup(){

  DDRA = B11111111;
  
}

void loop() {
  
  PORTA = B10101010;
  delay(tempo);                      
  PORTA = B01010101;
  delay(tempo);      
                  
}
