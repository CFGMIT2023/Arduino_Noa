/*************************************************************
**                         TÍTULO:                          **
**    Cicle de vida d'un programa:Serial Plotter 2          **
**                                                          **
**  NOM: Noa Garay Villarreal               DATA:14/02/2023 **
*************************************************************/
//************************ INCLUDE *************************** 


//*********************** VARIABLES **************************
float y1;
float y2;
float y3;
//************************* SETUP ****************************
void setup() 
{               
 Serial.begin(9600);
}
//************************* LOOP ******************************

void loop() 
{
for(int i = 0; i < 360; i += 5) {
    y1 = 1 * sin(i * M_PI / 180);
    y2 = 2 * sin((i + 90)* M_PI / 180);
    y3 = 5 * sin((i + 180)* M_PI / 180);

    Serial.print(y1);
    Serial.print("\t");
    Serial.print(y2);
    Serial.print("\t");
    Serial.println(y3);

    delay(100);
  }
}

//************************ FUNCIONS ***************************