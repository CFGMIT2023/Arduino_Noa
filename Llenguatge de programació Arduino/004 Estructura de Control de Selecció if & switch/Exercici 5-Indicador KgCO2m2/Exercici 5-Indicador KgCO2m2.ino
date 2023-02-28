/**********************************************************************************
**                                                                               **
**                          Indicador KgCO2/m2                                   **
**                                                                               **
**  NOM:Noa Garay Villarreal                              DATA:28/02/2023        **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int NvllKgCO = 30;

//********** Setup ****************************************************************
void setup()              
{
  Serial.begin(9600);     
  if (NvllKgCO <3.5)
  {
    Serial.print ("Qualificacio energeticas tipus A.");
  }
  else if(NvllKgCO <6.5 )
  {
    Serial.print("Qualificacio energetica tipus B.");
  }
  else if (NvllKgCO <11.1)
  {
    Serial.print("Qualificacio energetica tipus C.");
  }
  else if (NvllKgCO <17.7)  
  {
    Serial.print("Qualificacio energetica tipus D.");    
  } 
  else if (NvllKgCO <38.2)
  {
   Serial.print("Qualificacio energetica tipus E.");   
  }
  else if(NvllKgCO <43.2)
  {
    Serial.print("Qualificacio energetica tipus F.");
  }  
  else if(NvllKgCO >=43.2)
  {
    Serial.print("Qualificacio energetica tipus G.");    
  }
}  
//********** Loop *****************************************************************
void loop()   
{

}

//********** Funcions *************************************************************