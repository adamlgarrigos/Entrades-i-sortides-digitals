/**********************************************************************************
**                                                                               **
**                         Sortides i entrades digitals                          **
**                              Array de 8 LEDs                                  **
**                                                                               **
** ADAM LAAOUAJ                                                       06/03/2017 **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int A = 5; //Cada LED amb un nombre
const int S = 6;
const int D = 7;
const int F = 8;

int a=1000;
//********** Setup ****************************************************************
void setup()
{
  pinMode(5,OUTPUT); // Sortides
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
 
  
}

//********** Loop *****************************************************************
void loop()
{

  digitalWrite (A,HIGH); //A
  digitalWrite (S,HIGH);
  digitalWrite (D,HIGH);
  digitalWrite (F,LOW);
 
  delay(a);
  
  digitalWrite (A,HIGH); //A
  digitalWrite (S,HIGH);
  digitalWrite (D,LOW);
  digitalWrite (F,HIGH);
 
  delay(a);
  
  digitalWrite (A,HIGH); //A
  digitalWrite (S,LOW);
  digitalWrite (D,HIGH);
  digitalWrite (F,LOW);

  delay(a);

  digitalWrite (A,HIGH); //A
  digitalWrite (S,LOW);
  digitalWrite (D,LOW);
  digitalWrite (F,HIGH);
 
  delay(a);

  digitalWrite (A,HIGH); //A
  digitalWrite (S,LOW);
  digitalWrite (D,LOW);
  digitalWrite (F,LOW);
 
  delay(a);

  digitalWrite (A,LOW); //A
  digitalWrite (S,LOW);
  digitalWrite (D,LOW);
  digitalWrite (F,HIGH);
 
  delay(a);
}
  

//********** Funcions *************************************************************
