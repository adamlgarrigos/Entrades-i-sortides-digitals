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
const int B = 6;
const int C = 7;
const int D = 8;
const int E = 9;
const int F = 10;
const int G = 11;
int a=1000;
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
  
  
}

//********** Loop *****************************************************************
void loop()
{

  digitalWrite (A,HIGH); //A
  digitalWrite (B,HIGH);
  digitalWrite (C,HIGH);
  digitalWrite (D,LOW);
  digitalWrite (E,HIGH);
  digitalWrite (F,HIGH);
  digitalWrite (G,HIGH);
  delay(a);
  
  digitalWrite (A,LOW); //D
  digitalWrite (B,HIGH);
  digitalWrite (C,HIGH);
  digitalWrite (D,HIGH);
  digitalWrite (E,HIGH);
  digitalWrite (F,LOW);
  digitalWrite (G,HIGH);
  delay(a);
  
  digitalWrite (A,HIGH); //A
  digitalWrite (B,HIGH);
  digitalWrite (C,HIGH);
  digitalWrite (D,LOW);
  digitalWrite (E,HIGH);
  digitalWrite (F,HIGH);
  digitalWrite (G,HIGH);
  delay(a);

  digitalWrite (A,HIGH); //M
  digitalWrite (B,LOW);
  digitalWrite (C,HIGH);
  digitalWrite (D,LOW);
  digitalWrite (E,HIGH);
  digitalWrite (F,LOW);
  digitalWrite (G,LOW);
  delay(a);
  
  digitalWrite (A,LOW); //ESPAI
  digitalWrite (B,LOW);
  digitalWrite (C,LOW);
  digitalWrite (D,LOW);
  digitalWrite (E,LOW);
  digitalWrite (F,LOW);
  digitalWrite (G,LOW);
  delay(a);
  
  digitalWrite (A,LOW); //L
  digitalWrite (B,LOW);
  digitalWrite (C,LOW);
  digitalWrite (D,HIGH);
  digitalWrite (E,HIGH);
  digitalWrite (F,HIGH);
  digitalWrite (G,LOW);
  delay(a);
  
  digitalWrite (A,HIGH); //A
  digitalWrite (B,HIGH);
  digitalWrite (C,HIGH);
  digitalWrite (D,LOW);
  digitalWrite (E,HIGH);
  digitalWrite (F,HIGH);
  digitalWrite (G,HIGH);
  delay(a);
  
  digitalWrite (A,HIGH); //A
  digitalWrite (B,HIGH);
  digitalWrite (C,HIGH);
  digitalWrite (D,LOW);
  digitalWrite (E,HIGH);
  digitalWrite (F,HIGH);
  digitalWrite (G,HIGH);
  delay(a);
  
  digitalWrite (A,HIGH); //O
  digitalWrite (B,HIGH);
  digitalWrite (C,HIGH);
  digitalWrite (D,HIGH);
  digitalWrite (E,HIGH);
  digitalWrite (F,HIGH);
  digitalWrite (G,LOW);
  delay(a);
  
  digitalWrite (A,LOW); //U
  digitalWrite (B,HIGH);
  digitalWrite (C,HIGH);
  digitalWrite (D,HIGH);
  digitalWrite (E,HIGH);
  digitalWrite (F,HIGH);
  digitalWrite (G,LOW);
  delay(a);
  
  digitalWrite (A,HIGH); //A
  digitalWrite (B,HIGH);
  digitalWrite (C,HIGH);
  digitalWrite (D,LOW);
  digitalWrite (E,HIGH);
  digitalWrite (F,HIGH);
  digitalWrite (G,HIGH);
  delay(a);
  
  digitalWrite (A,LOW); //J
  digitalWrite (B,HIGH);
  digitalWrite (C,HIGH);
  digitalWrite (D,HIGH);
  digitalWrite (E,HIGH);
  digitalWrite (F,LOW);
  digitalWrite (G,LOW);
  delay(a);
  
  digitalWrite (A,LOW); //ESPAI
  digitalWrite (B,LOW);
  digitalWrite (C,LOW);
  digitalWrite (D,LOW);
  digitalWrite (E,LOW);
  digitalWrite (F,LOW);
  digitalWrite (G,LOW);
  delay(a);
}
  

//********** Funcions *************************************************************
