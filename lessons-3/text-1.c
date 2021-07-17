#include <EEPROM.h>

int l1=6;
int r1=7;
int l2=8;
int r2=9;


void setup()
{
  pinMode (l1,OUTPUT);
  pinMode (r1,OUTPUT);
  pinMode (l2,OUTPUT);
  pinMode (r2,OUTPUT);
  Serial.begin(9000);
}
void forward(){
  digitalWrite (l1,HIGH);
  digitalWrite (r1,LOW);
  digitalWrite (l2,LOW);
  digitalWrite (r2,HIGH);
}
void backward(){
  digitalWrite (l1,LOW);
  digitalWrite (r1,HIGH);
  digitalWrite (l2,HIGH);
  digitalWrite (r2,LOW);
}
void left(){
  digitalWrite (l1,HIGH);
  digitalWrite (r1,LOW);
  digitalWrite (l2,HIGH);
  digitalWrite (r2,LOW);
}
void right(){
  digitalWrite (l1,LOW);
  digitalWrite (r1,HIGH);
  digitalWrite (l2,LOW);
  digitalWrite (r2,HIGH);
}
void stop1(){
  digitalWrite (l1,LOW);
  digitalWrite (r1,LOW);
  digitalWrite (l2,LOW);
  digitalWrite (r2,LOW);
}
void loop()
{int i=0;
  if(Serial.available()>0){
    i=Serial.read();
    
  }
 switch(i){
   case 'f':
  forward();
  break;
   case 'b':
  backward();
  break;
   case 'l':
  left();

   break;
   case 's':
  stop1();

   break;
   case 'r':
  right();

   break;
 
 }
  
  
}