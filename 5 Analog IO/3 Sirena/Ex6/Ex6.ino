/**********************************************************************************
**                                                                               **
**                                  Sirena                                       **
**                                                                               **
**                                                                               **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const byte xiulet = 9;        
const byte pot0 = A0; 
const byte pot1 = A1;
int valPot0;                  
int valpot1;

//********** Setup ****************************************************************
void setup()
{
  pinMode(xiulet, OUTPUT);   
}

//********** Loop *****************************************************************
void loop()
{
  valPot0 = analogRead(pot0);     
  valpot1 = analogRead(pot1);
  tone(xiulet, valpot1, valPot0);    
  delay(2*valPot0);              
}

//********** Funcions *************************************************************