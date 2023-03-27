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

  tone(xiulet, 800, 3000);    // xiulet de durada valPot0

  delay(500);

  tone(xiulet, 1000, 3000);    // xiulet de durada valPot0
  
  delay(500);

  tone(xiulet, 1050, 3000);    // xiulet de durada valPot0

  delay(500);
  
  tone(xiulet, 700, 3000);    // xiulet de durada valPot0

  delay(500);

}

//********** Funcions *************************************************************
