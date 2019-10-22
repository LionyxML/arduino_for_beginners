/* 
 *  Programa: Varredura bilateral
 *  Arduino : MEGA 2560
 *  Autor   : Rahul M. Juliato
 *  Data    : 18.09.2019
 */
 

#define tempo 20

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
  
  digitalWrite(22, LOW);  
  digitalWrite(23, LOW);  
  digitalWrite(24, LOW);  
  digitalWrite(25, LOW);  
  digitalWrite(26, LOW);  
  digitalWrite(27, LOW);  
  digitalWrite(28, LOW);     
  digitalWrite(29, LOW);           
  
  digitalWrite(22, HIGH);   
  delay(tempo);
  
  digitalWrite(22, LOW);  
  digitalWrite(23, HIGH);
  delay(tempo);
  
  digitalWrite(23, LOW);  
  digitalWrite(24, HIGH);
  delay(tempo);

  digitalWrite(24, LOW);  
  digitalWrite(25, HIGH);
  delay(tempo);
  
  digitalWrite(25, LOW);  
  digitalWrite(26, HIGH);
  delay(tempo);

  digitalWrite(26, LOW);  
  digitalWrite(27, HIGH);
  delay(tempo);

  digitalWrite(27, LOW);  
  digitalWrite(28, HIGH);
  delay(tempo);
  
  digitalWrite(28, LOW);  
  digitalWrite(29, HIGH);
  delay(tempo);    
  
  digitalWrite(29, LOW);  
  digitalWrite(28, HIGH);
  delay(tempo);
  
  digitalWrite(28, LOW);  
  digitalWrite(27, HIGH);
  delay(tempo);

  digitalWrite(27, LOW);  
  digitalWrite(26, HIGH);
  delay(tempo);
  
  digitalWrite(26, LOW);  
  digitalWrite(25, HIGH);
  delay(tempo);

  digitalWrite(25, LOW);  
  digitalWrite(24, HIGH);
  delay(tempo);

  digitalWrite(24, LOW);  
  digitalWrite(23, HIGH);
  delay(tempo);
  
  digitalWrite(23, LOW);  
  digitalWrite(22, HIGH);
  delay(tempo);       
           
}
