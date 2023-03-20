/**********************************************************************************
**                                                                               **
**                                 Fade LEDs                                     **
**                                                                               **
**  NOM:Noa Garay Villarreal                                   DATA: 20/03/2023  **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const byte led0 = 3;          // donar nom al pin 3 de l’Arduino
const byte led1 = 5;          // donar nom al pin 5 de l’Arduino
const byte led2 = 6;          // donar nom al pin 6 de l’Arduino
const byte led3 = 9;          // donar nom al pin 9 de l’Arduino
const byte led4 = 10;         // donar nom al pin 10 de l’Arduino
const byte led5 = 11;         // donar nom al pin 11 de l’Arduino
unsigned long velocitat = 500;         // velocitat de l'acció en ms

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 3 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 11 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  analogWrite(led0, 0);     
  analogWrite(led1, 0);     
  analogWrite(led2, 0);    
  analogWrite(led3, 0);     
  analogWrite(led4, 0);   
  analogWrite(led5, 255);     
  
  delay(velocitat);          

  analogWrite(led0, 0);    
  analogWrite(led1, 0);   
  analogWrite(led2, 0);    
  analogWrite(led3, 0);     
  analogWrite(led4, 255);
  analogWrite(led5, 125);    
  
  delay(velocitat);          
  
  analogWrite(led0, 0);   
  analogWrite(led1, 0);    
  analogWrite(led2, 0);    
  analogWrite(led3, 255);    
  analogWrite(led4, 125);   
  analogWrite(led5, 60);    
  
  delay(velocitat);           
  
  analogWrite(led0, 0);   
  analogWrite(led1, 0);    
  analogWrite(led2, 255);   
  analogWrite(led3, 125);    
  analogWrite(led4, 60);    
  analogWrite(led5, 0); 
   
  delay(velocitat);          
  
  analogWrite(led0, 0);    
  analogWrite(led1, 255);   
  analogWrite(led2, 125);
  analogWrite(led3, 60);   
  analogWrite(led4, 0);  
  analogWrite(led5, 0);   
  
  delay(velocitat);           

  analogWrite(led0, 255);    
  analogWrite(led1, 125);    
  analogWrite(led2, 60);   
  analogWrite(led3, 0);    
  analogWrite(led4, 0);    
  analogWrite(led5, 0);    
  
  delay(velocitat);         

  analogWrite(led0, 0);    
  analogWrite(led1, 0);   
  analogWrite(led2, 0);    
  analogWrite(led3, 0);    
  analogWrite(led4, 0);    
  analogWrite(led5, 0);   
  
  delay(velocitat);         

  analogWrite(led0, 0);     
  analogWrite(led1, 0);    
  analogWrite(led2, 0);    
  analogWrite(led3, 0);     
  analogWrite(led4, 0);    
  analogWrite(led5, 0);   
  
  delay(velocitat);        

  analogWrite(led0, 255);    
  analogWrite(led1, 125);   
  analogWrite(led2, 60);    
  analogWrite(led3, 0);    
  analogWrite(led4, 0);    
  analogWrite(led5, 0);     
  
  delay(velocitat);         

  analogWrite(led0, 0);     
  analogWrite(led1, 255);    
  analogWrite(led2, 125);   
  analogWrite(led3, 60);     
  analogWrite(led4, 0);    
  analogWrite(led5, 0);    
  
  delay(velocitat);         

  analogWrite(led0, 0);    
  analogWrite(led1, 0);   
  analogWrite(led2, 255);    
  analogWrite(led3, 125);    
  analogWrite(led4, 60);  
  analogWrite(led5, 0);     
  
  delay(velocitat);         

  analogWrite(led0, 0);     
  analogWrite(led1, 0);     
  analogWrite(led2, 0);    
  analogWrite(led3, 255);    
  analogWrite(led4, 125);    
  analogWrite(led5, 60);     
  
  delay(velocitat);          

  analogWrite(led0, 0);   
  analogWrite(led1, 0);    
  analogWrite(led2, 0);    
  analogWrite(led3, 0);     
  analogWrite(led4, 255);    
  analogWrite(led5, 125);    
  
  delay(velocitat);        

  analogWrite(led0, 0);    
  analogWrite(led1, 0);    
  analogWrite(led2, 0);    
  analogWrite(led3, 0);   
  analogWrite(led4, 0);    
  analogWrite(led5, 255);     
  
  delay(velocitat);         

  analogWrite(led0, 0);    
  analogWrite(led1, 0);     
  analogWrite(led2, 0);    
  analogWrite(led3, 0);    
  analogWrite(led4, 0);    
  analogWrite(led5, 0);    
  
  delay(velocitat);         

  analogWrite(led0, 0);     
  analogWrite(led1, 0);   
  analogWrite(led2, 0);    
  analogWrite(led3, 0);    
  analogWrite(led4, 0);   
  analogWrite(led5, 0);     
  
  delay(velocitat);          
}

//********** Funcions *************************************************************