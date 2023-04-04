/**********************************************************************************
**                                                                               **
**                                  Sirena                                       **
**                                                                               **
**   NOM:Noa Garay Villarreal                                   DATA:27/03/2023  **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const byte xiulet = 9;        // donar nom al pin 9 de l’Arduino

//********** Setup ****************************************************************
void setup()
{
  pinMode(xiulet, OUTPUT);   // definir el pin 9 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  tone(xiulet, 1000, 2000);  //Sona durant 2s a 1000 Hz.

  delay(2000+500);    

  tone(xiulet, 1250, 2000);  //Sona durant 2s a 1250 Hz.
  
  delay(2000+500);
}

//********** Funcions *************************************************************
