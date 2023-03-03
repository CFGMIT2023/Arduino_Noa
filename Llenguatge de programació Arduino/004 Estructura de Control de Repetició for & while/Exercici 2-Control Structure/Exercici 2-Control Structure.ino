/*************************************************************
**                                                          **
**                     Control Structures                   **
**                                                          **
**  NOM: Noa Garay Villarreal               DATA:28/02/2023 **
*************************************************************/
//************************ INCLUDE *************************** 


//*********************** VARIABLES **************************
int comptar = 10;
//************************* SETUP ****************************

void setup() 
{               
Serial.begin(9600);       
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);
  for (int i=0; i < comptar; i++)
  { 
   Serial.print(i);
    Serial.print("-");
  }
  Serial.print(comptar);
}
//************************* LOOP ******************************

void loop() {



}

//************************ FUNCIONS ***************************