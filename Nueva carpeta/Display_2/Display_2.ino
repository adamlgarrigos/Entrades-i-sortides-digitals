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
const int polsador = 2;
int a = 500;
int num = 0;
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
  pinMode(2,INPUT);
  
}

//********** Loop *****************************************************************
void loop()
{
  if(digitalRead(2))
  {
    num = num + 1;
    if (num==10){
    num = 0;
    }
    }
    
  
  if(num==0){
  delay (a);
  digitalWrite (A,HIGH); //0
  digitalWrite (B,HIGH);
  digitalWrite (C,HIGH);
  digitalWrite (D,HIGH);
  digitalWrite (E,HIGH);
  digitalWrite (F,HIGH);
  digitalWrite (G,LOW);
  }
  if(num==1)
  {
  delay (a);
  digitalWrite (A,LOW); //1
  digitalWrite (B,HIGH);
  digitalWrite (C,HIGH);
  digitalWrite (D,LOW);
  digitalWrite (E,LOW);
  digitalWrite (F,LOW);
  digitalWrite (G,LOW);
  }
  if(num==2)
  {
    delay(a);
  digitalWrite (A,HIGH); //2
  digitalWrite (B,HIGH);
  digitalWrite (C,LOW);
  digitalWrite (D,HIGH);
  digitalWrite (E,HIGH);
  digitalWrite (F,LOW);
  digitalWrite (G,HIGH);
  
  }
  if(num==3)
  {
    delay (a);
  digitalWrite (A,HIGH); //3
  digitalWrite (B,HIGH);
  digitalWrite (C,HIGH);
  digitalWrite (D,HIGH);
  digitalWrite (E,LOW);
  digitalWrite (F,LOW);
  digitalWrite (G,HIGH);
  }
  if(num==4)
  {
    delay (a);
  digitalWrite (A,LOW); //4
  digitalWrite (B,HIGH);
  digitalWrite (C,HIGH);
  digitalWrite (D,LOW);
  digitalWrite (E,LOW);
  digitalWrite (F,HIGH);
  digitalWrite (G,HIGH);
  }
  if(num==5)
  {
    delay (a);
  digitalWrite (A,HIGH); //5
  digitalWrite (B,LOW);
  digitalWrite (C,HIGH);
  digitalWrite (D,HIGH);
  digitalWrite (E,LOW);
  digitalWrite (F,HIGH);
  digitalWrite (G,HIGH);
  }
  if(num==6)
  {
    delay (a);
  digitalWrite (A,LOW); //6
  digitalWrite (B,LOW);
  digitalWrite (C,HIGH);
  digitalWrite (D,HIGH);
  digitalWrite (E,HIGH);
  digitalWrite (F,HIGH);
  digitalWrite (G,HIGH);
  }
  if(num==7)
  {
    delay (a);
  digitalWrite (A,HIGH); //7
  digitalWrite (B,HIGH);
  digitalWrite (C,HIGH);
  digitalWrite (D,LOW);
  digitalWrite (E,LOW);
  digitalWrite (F,LOW);
  digitalWrite (G,LOW);
  }
  if(num==8)
  {
    delay (a);
  digitalWrite (A,HIGH); //8
  digitalWrite (B,HIGH);
  digitalWrite (C,HIGH);
  digitalWrite (D,HIGH);
  digitalWrite (E,HIGH);
  digitalWrite (F,HIGH);
  digitalWrite (G,HIGH);
  }
  if(num==9)
  {
    delay (a);
  digitalWrite (A,HIGH); //9
  digitalWrite (B,HIGH);
  digitalWrite (C,HIGH);
  digitalWrite (D,LOW);
  digitalWrite (E,LOW);
  digitalWrite (F,HIGH);
  digitalWrite (G,HIGH);
  }
}

//********** Funcions *************************************************************
