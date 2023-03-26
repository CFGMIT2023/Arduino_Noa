/**********************************************************************************
**                                                                               **
**                             Display de 7 segments                             **
**                                                                               **
**  NOM:Noa Garay Villarreal                                     DATA:20/03/2023 **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const char ledOn = HIGH;
const char ledOff = LOW;

byte seg_a = 5;
byte seg_b = 6;
byte seg_c = 7;
byte seg_d = 8;
byte seg_e = 9;
byte seg_f = 10;
byte seg_g = 11;

const byte segmentPin[] = {seg_a,seg_b,seg_c,seg_d,seg_e,seg_f,seg_g};

int segmentNum = 7; 
int pausa = 200;  
const byte codis[] = {

  B11111100,  //0
  B01100000,  //1
  B11011010,  //2
  B11110010,  //3
  B01100110,  //4
  B10110110,  //5
  B00111110,  //6
  B11100000,  //7
  B11111110,  //8
  B11100110,  //9
  B11101110,  //a (10)
  B00111110,  //b (11)
  B10011100,  //c (12)
  B01111010,  //d (13)
  B10011110,  //e (14)
  B10001110,  //f (15)
  B11110110,  //g (16)
  B01101110,  //h (17)
  B00001100,  //i (18)
  B01111000,  //j (19)
  B01101110,  //k (20)
  B00011100,  //l (21)
  B10101000,  //m (22)
  B00101010,  //n (23)
  B11111100,  //o (24)
  B11001110,  //p (25)
  B11100110,  //q (26)
  B00001010,  //r (27)
  B10110110,  //s (28)
  B00111100,  //t (29)
  B01111100,  //u (30)
  B00111000,  //v (31)
  B01010100,  //w (32)
  B01101110,  //x (33)
  B01110110,  //y (34)
  B11011010,  //z (35)
  B00000000,  //Res(36)
  };
//********** Setup ****************************************************************
void setup()
{
for(int i = 0; i < segmentNum; i++)
 {
   pinMode(segmentPin[i], OUTPUT);
   digitalWrite(segmentPin[i], ledOff);
 }
}
//********** Loop *****************************************************************
void loop()
{
  mostra(10);  // A
  mostra(27);  // R
  mostra(13);  // D
  mostra(30);  // U
  mostra(18);  // I
  mostra(23);  // N
  mostra(24);  // O
 
  delay(1000);
  shutDown();
  delay(500);
}
//********** Funcions *************************************************************
void mostra (int element)
{
  boolean estatSegment;
  for(int segment = 1; segment < 8; segment++)
  {
    estatSegment =bitRead (codis[element], segment);
    if (ledOn == LOW) estatSegment = ! estatSegment;
    digitalWrite (segmentPin[(7-segment)], estatSegment);
  }
  delay(pausa);
}

void shutDown()
{
  for(int i = 0; i < 7; i++)
  {
    digitalWrite(segmentPin[i], ledOff);
  }
}