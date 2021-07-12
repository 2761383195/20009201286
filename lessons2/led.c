// C++ code
//
int i=13;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  while(i>6){
  digitalWrite(i, HIGH);
    
  delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(i, LOW);
     delay(1000);
    i--;
    if(i<=6){
      i=13;
    }
  }
}
