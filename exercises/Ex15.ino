/*
Programa: Subrotinas - pisque alternado 2 vezes e todos os LEDs 2 vezes em loop infinito variando o tempo
Arduino : MEGA 2560 
Autor   : Rahul M. Juliato
Data    : 20.09.2019
*/

int tempo = 1000;

void setup(){

  DDRA = B11111111;
  
}

void pisca_alt(){
  
  PORTA = B10101010;
  delay(tempo);    
  PORTA = B01010101;
  delay(tempo);    
  
}

void pisca_tud(){
  
  PORTA = B11111111;
  delay(tempo);    
  PORTA = B00000000;
  delay(tempo);    
  
}

void loop() {

  pisca_alt();
  pisca_alt();
  pisca_tud();  
  pisca_tud();  
  tempo = 100;

  pisca_alt();
  pisca_alt();
  pisca_tud();  
  pisca_tud();  
  tempo = 50;
      
  pisca_alt();
  pisca_alt();
  pisca_tud();  
  pisca_tud();  
  tempo = 25;

}