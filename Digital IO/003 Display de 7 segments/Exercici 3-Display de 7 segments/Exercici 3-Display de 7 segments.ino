/**********************************************************************************
**                                                                               **
**                    Display de 7 segments: Escriu els números                  **
**                                                                               **
**  NOM:Noa Garay Villarreal                                     DATA:14/03/2023 **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int segA = 5;          // donar nom al pin 5 de l’Arduino
const int segB = 6;          
const int segC = 7;          
const int segD = 8;          
const int segE = 9;          
const int segF = 10;         
const int segG = 11;    
const int bot1 = 2;
boolean buttonEstat = HIGH;    
boolean buttonEstatPrevi = HIGH;

int num = 0;
//********** Setup ****************************************************************
void setup()
{
  pinMode(segA, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(segB, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(segC, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(segD, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(segE, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(segF, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(segG, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(bot1,INPUT);

  digitalWrite(segA, LOW);     // posar a 0V el pin 5
  digitalWrite(segB, LOW);     // posar a 0V el pin 6
  digitalWrite(segC, LOW);     // posar a 0V el pin 7
  digitalWrite(segD, LOW);     // posar a 0V el pin 8
  digitalWrite(segE, LOW);     // posar a 0V el pin 9
  digitalWrite(segF, LOW);     // posar a 0V el pin 10
  digitalWrite(segG, LOW);     // posar a 0V el pin 11  

  Serial.begin(9600);  
  }

//********** Loop *****************************************************************
void loop()
{
  delay(500);
  buttonEstat = digitalRead(bot1);
  if (buttonEstat != buttonEstatPrevi)
  {
  buttonEstatPrevi = buttonEstat;
  }
  if (buttonEstatPrevi == HIGH)
  {
   num = num + 1;
   if (num == 10) num = 0;    
  }  
  switch(num)
  {
  case 0: 

  digitalWrite(segA, HIGH);    // Número 0
  digitalWrite(segB, HIGH);    
  digitalWrite(segC, HIGH);    
  digitalWrite(segD, HIGH);    
  digitalWrite(segE, HIGH);    
  digitalWrite(segF, HIGH);    
  digitalWrite(segG, LOW);
  Serial.println(num);
  break;
  
  case 1:                 
  digitalWrite(segA, LOW);    // Número 1  
  digitalWrite(segD, LOW);    
  digitalWrite(segE, LOW);    
  digitalWrite(segF, LOW);    
  digitalWrite(segG, LOW);    
  break;
  
  case 2:                  
  digitalWrite(segA, HIGH);    // Número 2  
  digitalWrite(segC, LOW);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segG, HIGH);  
  break;
  
  case 3:                   
  digitalWrite(segC, HIGH);  // Número 3
  digitalWrite(segE, LOW);   
  break;
  
  case 4:                  
  digitalWrite(segA, LOW);    // Número 4   
  digitalWrite(segD, LOW);       
  digitalWrite(segF, HIGH);       
  break;
  
  case 5:                   
  digitalWrite(segA, HIGH);    // Número 5
  digitalWrite(segB, LOW);        
  digitalWrite(segD, HIGH);   
  break;

  case 6:                  
  digitalWrite(segA, HIGH);    // Número 6  
  digitalWrite(segE, HIGH);   
  break;
  
  case 7:                  
  digitalWrite(segA, HIGH);    // Número 7
  digitalWrite(segB, HIGH);     
  digitalWrite(segD, LOW);    
  digitalWrite(segE, LOW);    
  digitalWrite(segF, LOW);    
  digitalWrite(segG, LOW);   
  break;

  case 8:                  
  digitalWrite(segD, HIGH);    //Número 8   
  digitalWrite(segE, HIGH);    
  digitalWrite(segF, HIGH);   
  digitalWrite(segG, HIGH);   
  break;

  case 9:                  
  digitalWrite(segD, LOW);    
  digitalWrite(segE, LOW);     
  break; 
  }
}
//********** Funcions *************************************************************
