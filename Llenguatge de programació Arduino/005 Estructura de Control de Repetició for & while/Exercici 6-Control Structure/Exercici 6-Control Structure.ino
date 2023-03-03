/*************************************************************
**                                                          **
**                   Control Structure                      **
**                                                          **
**  NOM: Noa Garay Villarreal               DATA:03/03/2023 **
*************************************************************/
//************************ INCLUDE *************************** 


//*********************** VARIABLES **************************
int comptar = 11;
int i = 0;
//************************* SETUP ****************************
void setup() 
{              
 Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);  
  while(i <= comptar)
 {
    Serial.print(i);
    Serial.print("-");
    i++;
  }   
}

//************************* LOOP ******************************

void loop() {



}

//************************ FUNCIONS ***************************