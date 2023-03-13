/**********************************************************************************
**                                                                               **
**                    Display de 7 segments: Escriu el teu nom                   **
**                                                                               **
**  NOM:Noa Garay Villarreal                                     DATA:06/03/2023 **
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
  digitalWrite(segA, LOW);    // posar a 0V el pin 5
  digitalWrite(segB, LOW);    // posar a 5V el pin 6
  digitalWrite(segC, HIGH);    // posar a 0V el pin 7
  digitalWrite(segD, LOW);    // posar a 5V el pin 8
  digitalWrite(segE, HIGH);    // posar a 0V el pin 9
  digitalWrite(segF, LOW);    // posar a 5V el pin 10
  digitalWrite(segG, HIGH);    // posar a 0V el pin 11
  
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(segA, HIGH);    // posar a 0V el pin 5
  digitalWrite(segB, HIGH);    // posar a 5V el pin 6
  digitalWrite(segC, HIGH);    // posar a 0V el pin 7
  digitalWrite(segD, HIGH);    // posar a 5V el pin 8
  digitalWrite(segE, HIGH);    // posar a 0V el pin 9
  digitalWrite(segF, HIGH);    // posar a 5V el pin 10
  digitalWrite(segG, LOW);    // posar a 0V el pin 11
  
  delay(500);                  // es queden leds 500ms encesos

  digitalWrite(segA, HIGH);    // posar a 0V el pin 5
  digitalWrite(segB, HIGH);    // posar a 5V el pin 6
  digitalWrite(segC, HIGH);    // posar a 0V el pin 7
  digitalWrite(segD, LOW);    // posar a 5V el pin 8
  digitalWrite(segE, HIGH);    // posar a 0V el pin 9
  digitalWrite(segF, HIGH);    // posar a 5V el pin 10
  digitalWrite(segG, HIGH);    // posar a 0V el pin 11
  
  delay(500);                  // es queden leds 500ms encesos
}

//********** Funcions *************************************************************
