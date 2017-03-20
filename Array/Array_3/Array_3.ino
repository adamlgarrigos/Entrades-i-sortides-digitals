/**********************************************************************************
**                                                                               **
**                         Sortides i entrades digitals                          **
**                              Array de 8 LEDs                                  **
**                                                                               **
** ADAM LAAOUAJ                                                       06/03/2017 **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int led1 = 5; //Cada LED amb un nombre
const int led2 = 6;
const int led3 = 7;
const int led4 = 8;
const int led5 = 9;
const int led6 = 10;
const int led7 = 11;
const int led8 = 12;
int a=100;
//********** Setup ****************************************************************
void setup()
{
  pinMode(5,OUTPUT); // Sortides
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite (led1,HIGH); //Per simular el moviment del cotxe fantàstic
  digitalWrite (led2,LOW);
  digitalWrite (led3,LOW);
  digitalWrite (led4,LOW);
  digitalWrite (led5,LOW);
  digitalWrite (led6,LOW);
  digitalWrite (led7,LOW);
  digitalWrite (led8,LOW);
  delay(a);
  digitalWrite (led1,HIGH);
  digitalWrite (led2,HIGH);
  digitalWrite (led3,LOW);
  digitalWrite (led4,LOW);
  digitalWrite (led5,LOW);
  digitalWrite (led6,LOW);
  digitalWrite (led7,LOW);
  digitalWrite (led8,LOW);
  delay(a);
  digitalWrite (led1,LOW);
  digitalWrite (led2,HIGH);
  digitalWrite (led3,HIGH);
  digitalWrite (led4,LOW);
  digitalWrite (led5,LOW);
  digitalWrite (led6,LOW);
  digitalWrite (led7,LOW);
  digitalWrite (led8,LOW);
  delay(a);
  digitalWrite (led1,LOW);
  digitalWrite (led2,LOW);
  digitalWrite (led3,HIGH);
  digitalWrite (led4,HIGH);
  digitalWrite (led5,LOW);
  digitalWrite (led6,LOW);
  digitalWrite (led7,LOW);
  digitalWrite (led8,LOW);
  delay(a);
  digitalWrite (led1,LOW);
  digitalWrite (led2,LOW);
  digitalWrite (led3,LOW);
  digitalWrite (led4,HIGH);
  digitalWrite (led5,HIGH);
  digitalWrite (led6,LOW);
  digitalWrite (led7,LOW);
  digitalWrite (led8,LOW);
  delay(a);
  digitalWrite (led1,LOW);
  digitalWrite (led2,LOW);
  digitalWrite (led3,LOW);
  digitalWrite (led4,LOW);
  digitalWrite (led5,HIGH);
  digitalWrite (led6,HIGH);
  digitalWrite (led7,LOW);
  digitalWrite (led8,LOW);
  delay(a);
  digitalWrite (led1,LOW);
  digitalWrite (led2,LOW);
  digitalWrite (led3,LOW);
  digitalWrite (led4,LOW);
  digitalWrite (led5,LOW);
  digitalWrite (led6,HIGH);
  digitalWrite (led7,HIGH);
  digitalWrite (led8,LOW);
  delay(a);
  digitalWrite (led1,LOW);
  digitalWrite (led2,LOW);
  digitalWrite (led3,LOW);
  digitalWrite (led4,LOW);
  digitalWrite (led5,LOW);
  digitalWrite (led6,LOW);
  digitalWrite (led7,HIGH);
  digitalWrite (led8,HIGH);
  delay(a);
  digitalWrite (led1,LOW);
  digitalWrite (led2,LOW);
  digitalWrite (led3,LOW);
  digitalWrite (led4,LOW);
  digitalWrite (led5,LOW);
  digitalWrite (led6,LOW);
  digitalWrite (led7,LOW);
  digitalWrite (led8,HIGH);
  delay(a);
  digitalWrite (led1,LOW);
  digitalWrite (led2,LOW);
  digitalWrite (led3,LOW);
  digitalWrite (led4,LOW);
  digitalWrite (led5,LOW);
  digitalWrite (led6,LOW);
  digitalWrite (led7,HIGH);
  digitalWrite (led8,HIGH);
  delay(a);
  digitalWrite (led1,LOW);
  digitalWrite (led2,LOW);
  digitalWrite (led3,LOW);
  digitalWrite (led4,LOW);
  digitalWrite (led5,LOW);
  digitalWrite (led6,HIGH);
  digitalWrite (led7,HIGH);
  digitalWrite (led8,LOW);
  delay(a);
  digitalWrite (led1,LOW);
  digitalWrite (led2,LOW);
  digitalWrite (led3,LOW);
  digitalWrite (led4,LOW);
  digitalWrite (led5,HIGH);
  digitalWrite (led6,HIGH);
  digitalWrite (led7,LOW);
  digitalWrite (led8,LOW);
  delay(a);
  digitalWrite (led1,LOW);
  digitalWrite (led2,LOW);
  digitalWrite (led3,LOW);
  digitalWrite (led4,HIGH);
  digitalWrite (led5,HIGH);
  digitalWrite (led6,LOW);
  digitalWrite (led7,LOW);
  digitalWrite (led8,LOW);
  delay(a);
  digitalWrite (led1,LOW);
  digitalWrite (led2,LOW);
  digitalWrite (led3,HIGH);
  digitalWrite (led4,HIGH);
  digitalWrite (led5,LOW);
  digitalWrite (led6,LOW);
  digitalWrite (led7,LOW);
  digitalWrite (led8,LOW);
  delay(a);
  digitalWrite (led1,LOW);
  digitalWrite (led2,HIGH);
  digitalWrite (led3,HIGH);
  digitalWrite (led4,LOW);
  digitalWrite (led5,LOW);
  digitalWrite (led6,LOW);
  digitalWrite (led7,LOW);
  digitalWrite (led8,LOW);
  delay(a);
  digitalWrite (led1,HIGH);
  digitalWrite (led2,HIGH);
  digitalWrite (led3,LOW);
  digitalWrite (led4,LOW);
  digitalWrite (led5,LOW);
  digitalWrite (led6,LOW);
  digitalWrite (led7,LOW);
  digitalWrite (led8,LOW);
  delay(a);
  digitalWrite (led1,HIGH);
  digitalWrite (led2,LOW);
  digitalWrite (led3,LOW);
  digitalWrite (led4,LOW);
  digitalWrite (led5,LOW);
  digitalWrite (led6,LOW);
  digitalWrite (led7,LOW);
  digitalWrite (led8,LOW);
}

//********** Funcions *************************************************************
