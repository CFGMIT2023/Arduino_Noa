/**********************************************************************************
**                                                                               **
**                             Math Is Fun                                       **
**                                                                               **
**  NOM:Noa Garay Villarreal                              Data:17/02/2023        **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
int a = 5, b = 10, c = 20;
int add = 0, multiply = 0, divide = 0, module = 0, subtract = 0;
//********** Setup ****************************************************************
void setup()             
{
  Serial.begin(9600);     

  Serial.println("Here is some math: ");
  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("c = ");
  Serial.println(c);

  Serial.print("a + b = ");       
  add = a + b;
  Serial.println(add);

  Serial.print("a * c = ");       
  multiply = a * c;
  Serial.println(multiply);
  
  Serial.print("c / b = ");       
  divide = c / b;
  Serial.println(divide);

  Serial.print("c % b = ");       
  module = c % b;
  Serial.println(module);
  
  Serial.print("b - c = ");       
  subtract = b - c; 
  Serial.println(subtract);
}
//********** Loop *****************************************************************
void loop()  
{
}
//********** Funcions *************************************************************