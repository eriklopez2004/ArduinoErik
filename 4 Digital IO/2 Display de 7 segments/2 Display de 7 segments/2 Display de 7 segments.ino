/**********************************************************************************
**                                                                               **
**                           on/off button control LED                           **
**                                                                               **
** 17/3/2024                                                          Erik Lopez **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const byte segA = 5;          // donar nom al pin 5 de l’Arduino
const byte segB = 6;          
const byte segC = 7;          
const byte segD = 8;          
const byte segE = 9;          
const byte segF = 10;         
const byte segG = 11; 
unsigned long temps = 800;   

//********** Setup ****************************************************************
void setup()
{
  pinMode(segA, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(segB, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segE, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);
  
}

//********** Loop *****************************************************************
void loop()
{
   digitalWrite(segA, HIGH); 
   digitalWrite(segB, HIGH);
   digitalWrite(segC, HIGH);
   digitalWrite(segD, HIGH);
   digitalWrite(segE, HIGH);
   digitalWrite(segF, HIGH);
   digitalWrite(segG, LOW);

 delay(temps);

   digitalWrite(segA, LOW);  
   digitalWrite(segB, HIGH);
   digitalWrite(segC, HIGH);
   digitalWrite(segD, LOW);
   digitalWrite(segE, LOW);
   digitalWrite(segF, LOW);
   digitalWrite(segG, LOW);

 delay(temps);

   digitalWrite(segA, HIGH);  
   digitalWrite(segB, HIGH);
   digitalWrite(segC, LOW);
   digitalWrite(segD, HIGH);
   digitalWrite(segE, HIGH);
   digitalWrite(segF, LOW);
   digitalWrite(segG, HIGH);

 delay(temps);

   digitalWrite(segA, HIGH);  
   digitalWrite(segB, HIGH);
   digitalWrite(segC, HIGH);
   digitalWrite(segD, HIGH);
   digitalWrite(segE, LOW);
   digitalWrite(segF, LOW);
   digitalWrite(segG, HIGH);

 delay(temps);

   digitalWrite(segA, LOW);  
   digitalWrite(segB, HIGH);
   digitalWrite(segC, HIGH);
   digitalWrite(segD, LOW);
   digitalWrite(segE, LOW);
   digitalWrite(segF, HIGH);
   digitalWrite(segG, HIGH);

 delay(temps);

   digitalWrite(segA, HIGH);  
   digitalWrite(segB, LOW);
   digitalWrite(segC, HIGH);
   digitalWrite(segD, HIGH);
   digitalWrite(segE, LOW);
   digitalWrite(segF, HIGH);
   digitalWrite(segG, HIGH);

 delay(temps);

   digitalWrite(segA, LOW);  
   digitalWrite(segB, LOW);
   digitalWrite(segC, HIGH);
   digitalWrite(segD, HIGH);
   digitalWrite(segE, HIGH);
   digitalWrite(segF, HIGH);
   digitalWrite(segG, HIGH);

 delay(temps);

   digitalWrite(segA, HIGH);  
   digitalWrite(segB, HIGH);
   digitalWrite(segC, HIGH);
   digitalWrite(segD, LOW);
   digitalWrite(segE, LOW);
   digitalWrite(segF, LOW);
   digitalWrite(segG, LOW);

 delay(temps);

   digitalWrite(segA, HIGH); 
   digitalWrite(segB, HIGH);
   digitalWrite(segC, HIGH);
   digitalWrite(segD, HIGH);
   digitalWrite(segE, HIGH);
   digitalWrite(segF, HIGH);
   digitalWrite(segG, HIGH);

 delay(temps);

   digitalWrite(segA, HIGH); 
   digitalWrite(segB, HIGH);
   digitalWrite(segC, HIGH);
   digitalWrite(segD, LOW);
   digitalWrite(segE, LOW);
   digitalWrite(segF, HIGH);
   digitalWrite(segG, HIGH);

 delay(temps);

   digitalWrite(segA, LOW);  
   digitalWrite(segB, LOW);
   digitalWrite(segC, LOW);
   digitalWrite(segD, LOW);
   digitalWrite(segE, LOW);
   digitalWrite(segF, LOW);
   digitalWrite(segG, LOW);

 delay(temps);
}
//********** Funcions *************************************************************