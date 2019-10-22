/* 
 *  Programa: Piscar 8 leds - 1 sim e 1 não
 *  Arduino : MEGA 2560
 *  Autor   : Rahul M. Juliato
 *  Data    : 18.09.2019
 */
 

#define tempo 250

void setup(){
  
  pinMode(22, OUTPUT);          
  pinMode(23, OUTPUT);  
  pinMode(24, OUTPUT);  
  pinMode(25, OUTPUT);  
  pinMode(26, OUTPUT);   
  pinMode(27, OUTPUT);  
  pinMode(28, OUTPUT);  
  pinMode(29, OUTPUT);   
   
}


void loop(){
  
  digitalWrite(22, HIGH);  
  digitalWrite(23, LOW);  
  digitalWrite(24, HIGH);  
  digitalWrite(25, LOW);  
  digitalWrite(26, HIGH);  
  digitalWrite(27, LOW);  
  digitalWrite(28, HIGH);  
  digitalWrite(29, LOW);  

  delay(tempo);                   

  digitalWrite(22, LOW);  
  digitalWrite(23, HIGH);  
  digitalWrite(24, LOW);  
  digitalWrite(25, HIGH);  
  digitalWrite(26, LOW);  
  digitalWrite(27, HIGH);  
  digitalWrite(28, LOW);  
  digitalWrite(29, HIGH);   
      
  delay(tempo);        
           
}
