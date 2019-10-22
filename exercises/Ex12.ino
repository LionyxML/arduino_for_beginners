/*
Programa: Pisca-pisca no Port A - Varredura esquerda para direita
Arduino : MEGA 2560 
Autor   : Rahul M. Juliato
Data    : 20.09.2019
*/

const int tempo = 20;

void setup(){

  DDRA = B11111111;
  
}

void loop() {
  
  PORTA = B10000000;
  delay(tempo);      
  PORTA = B01000000;
  delay(tempo);    
  PORTA = B00100000;
  delay(tempo);      
  PORTA = B00010000;
  delay(tempo);    
  PORTA = B00001000;
  delay(tempo);    
  PORTA = B00000100;
  delay(tempo);    
  PORTA = B00000010;
  delay(tempo);    
  PORTA = B00000001;
  delay(tempo);    
  
}
