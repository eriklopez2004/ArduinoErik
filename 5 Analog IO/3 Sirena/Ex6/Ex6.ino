/**********************************************************************************
**                                                                               **
**                                  Sirena                                       **
**                                                                               **
**                                                                               **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const byte xiulet = 9;        // donar nom al pin 9 de l’Arduino
const byte pot0 = A0; 
const byte pot1 = A1;
int valPot0;                 // guardar valor del potenciometre  
int valpot1;

//********** Setup ****************************************************************
void setup()
{
  pinMode(xiulet, OUTPUT);   // definir el pin 9 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  valPot0 = analogRead(pot0);    // llegir valor potenciòmetre 
  valpot1 = analogRead(pot1);
  tone(xiulet, valpot1, valpot0);    // xiulet de durada valPot0
  delay(2*valPot0);              // esperar valPot0 del xiulet + valPot0 silenci
}

//********** Funcions *************************************************************