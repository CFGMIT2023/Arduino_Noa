/**********************************************************************************
**                                                                               **
**                    Display de 7 segments: Escriu els números                  **
**                                                                               **
**  NOM:Noa Garay Villarreal                                     DATA:13/03/2023 **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const byte segA = 5;          // donar nom al pin 5 de l’Arduino
const byte segB = 6;          
const byte segC = 7;          
const byte segD = 8;          
const byte segE = 9;          
const byte segF = 10;         
const byte segG = 11;         
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
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(segA, HIGH);    // Número 0
  digitalWrite(segB, HIGH);    
  digitalWrite(segC, HIGH);    
  digitalWrite(segD, HIGH);    
  digitalWrite(segE, HIGH);    
  digitalWrite(segF, HIGH);    
  digitalWrite(segG, LOW);
  
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(segA, LOW);    // Número 1 
  digitalWrite(segB, HIGH);    
  digitalWrite(segC, HIGH);    
  digitalWrite(segD, LOW);    
  digitalWrite(segE, LOW);    
  digitalWrite(segF, LOW);    
  digitalWrite(segG, LOW);    
  
  delay(500);                  // es queden leds 500ms encesos

  digitalWrite(segA, HIGH);    // Número 2
  digitalWrite(segB, HIGH);    
  digitalWrite(segC, LOW);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, LOW);
  digitalWrite(segG, HIGH);  
  
  delay(500);                  // es queden leds 500ms encesos

  digitalWrite(segA, HIGH);    // Número 3
  digitalWrite(segB, HIGH);    
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);   
  digitalWrite(segE, LOW);   
  digitalWrite(segF, LOW);
  digitalWrite(segG, HIGH);
  
  delay(500);                  // es queden leds 500ms encesos

  digitalWrite(segA, LOW);    // Número 4
  digitalWrite(segB, HIGH);   
  digitalWrite(segC, HIGH);    
  digitalWrite(segD, LOW);    
  digitalWrite(segE, LOW);    
  digitalWrite(segF, HIGH);    
  digitalWrite(segG, HIGH);    
  
  delay(500);                  // es queden leds 500ms encesos  

  digitalWrite(segA, HIGH);    // Número 5
  digitalWrite(segB, LOW);    
  digitalWrite(segC, HIGH);    
  digitalWrite(segD, HIGH);   
  digitalWrite(segE, LOW);    
  digitalWrite(segF, HIGH);    
  digitalWrite(segG, HIGH);    
  
  delay(500);                  // es queden leds 500ms encesos

  digitalWrite(segA, HIGH);    // Número 6
  digitalWrite(segB, LOW);    
  digitalWrite(segC, HIGH);   
  digitalWrite(segD, HIGH);    
  digitalWrite(segE, HIGH);   
  digitalWrite(segF, HIGH);    
  digitalWrite(segG, HIGH);    
  
  delay(500);                  // es queden leds 500ms encesos

  digitalWrite(segA, HIGH);    // Número 7
  digitalWrite(segB, HIGH);   
  digitalWrite(segC, HIGH);    
  digitalWrite(segD, LOW);    
  digitalWrite(segE, LOW);    
  digitalWrite(segF, LOW);    
  digitalWrite(segG, LOW);   
  
  delay(500);                  // es queden leds 500ms encesos

  digitalWrite(segA, HIGH);    // Número 8
  digitalWrite(segB, HIGH);    
  digitalWrite(segC, HIGH);   
  digitalWrite(segD, HIGH);    
  digitalWrite(segE, HIGH);    
  digitalWrite(segF, HIGH);   
  digitalWrite(segG, HIGH);   
  
  delay(500);                  // es queden leds 500ms encesos

  digitalWrite(segA, HIGH);    // Número 9
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, LOW);    
  digitalWrite(segE, LOW);    
  digitalWrite(segF, HIGH);   
  digitalWrite(segG, HIGH);    
  
  delay(500);                  // es queden leds 500ms encesos
}

//********** Funcions *************************************************************
