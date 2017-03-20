/**********************************************************************************
**                                                                               **
**                         Sortides i entrades digitals                          **
**                              Cruilla de semafors                              **
**                                                                               **
** ADAM LAAOUAJ                                                       06/03/2017 **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int aroig = 7;
const int at = 8;
const int av = 9;
const int broig = 10;
const int bt = 11;
const int bv = 12;
int a = 500;
//********** Setup ****************************************************************
void setup()
{
  pinMode(5,OUTPUT);
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
  digitalWrite (aroig,HIGH);
  digitalWrite (at,LOW);
  digitalWrite (av,LOW);
  digitalWrite (broig,HIGH);
  digitalWrite (bt,LOW);
  digitalWrite (bv,LOW);
  delay(a);
  digitalWrite (aroig,HIGH);
  digitalWrite (at,LOW);
  digitalWrite (av,LOW);
  digitalWrite (broig,LOW);
  digitalWrite (bt,LOW);
  digitalWrite (bv,HIGH);
  delay(a);
  digitalWrite (aroig,HIGH);
  digitalWrite (at,LOW);
  digitalWrite (av,LOW);
  digitalWrite (broig,LOW);
  digitalWrite (bt,LOW);
  digitalWrite (bv,HIGH);
  delay(a);
  digitalWrite (aroig,HIGH);
  digitalWrite (at,LOW);
  digitalWrite (av,LOW);
  digitalWrite (broig,LOW);
  digitalWrite (bt,LOW);
  digitalWrite (bv,HIGH);
  delay(a);
  digitalWrite (aroig,HIGH);
  digitalWrite (at,LOW);
  digitalWrite (av,LOW);
  digitalWrite (broig,LOW);
  digitalWrite (bt,LOW);
  digitalWrite (bv,HIGH);
  delay(a);
  digitalWrite (aroig,HIGH);
  digitalWrite (at,LOW);
  digitalWrite (av,LOW);
  digitalWrite (broig,LOW);
  digitalWrite (bt,HIGH);
  digitalWrite (bv,LOW);
  delay(a);
  digitalWrite (aroig,HIGH);
  digitalWrite (at,LOW);
  digitalWrite (av,LOW);
  digitalWrite (broig,HIGH);
  digitalWrite (bt,LOW);
  digitalWrite (bv,LOW);
  delay(a);
  digitalWrite (aroig,LOW);
  digitalWrite (at,LOW);
  digitalWrite (av,HIGH);
  digitalWrite (broig,HIGH);
  digitalWrite (bt,LOW);
  digitalWrite (bv,LOW);
  delay(a);
  digitalWrite (aroig,LOW);
  digitalWrite (at,LOW);
  digitalWrite (av,HIGH);
  digitalWrite (broig,HIGH);
  digitalWrite (bt,LOW);
  digitalWrite (bv,LOW);
  delay(a);
  digitalWrite (aroig,LOW);
  digitalWrite (at,LOW);
  digitalWrite (av,HIGH);
  digitalWrite (broig,HIGH);
  digitalWrite (bt,LOW);
  digitalWrite (bv,LOW);
  delay(a);
  digitalWrite (aroig,LOW);
  digitalWrite (at,LOW);
  digitalWrite (av,HIGH);
  digitalWrite (broig,HIGH);
  digitalWrite (bt,LOW);
  digitalWrite (bv,LOW);
  delay(a);
  digitalWrite (aroig,LOW);
  digitalWrite (at,HIGH);
  digitalWrite (av,LOW);
  digitalWrite (broig,HIGH);
  digitalWrite (bt,LOW);
  digitalWrite (bv,LOW);
  delay(a);
  digitalWrite (aroig,HIGH);
  digitalWrite (at,LOW);
  digitalWrite (av,LOW);
  digitalWrite (broig,HIGH);
  digitalWrite (bt,LOW);
  digitalWrite (bv,LOW);
  delay(a);
  
}

//********** Funcions *************************************************************
