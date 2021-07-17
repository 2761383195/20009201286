int SHORT=100;
int LONG=500;
int P=13;
void setup()
{
  pinMode(P, OUTPUT);
}

void loop()
{
  dot();
  dot();
  Pause();
  
}
void dot()
{
 digitalWrite(P,HIGH);
  delay(SHORT);
  digitalWrite(P,LOW);
  delay(SHORT);
}
void line()
{
  digitalWrite(P,HIGH);
  delay(LONG);
  digitalWrite(P,HIGH);
  delay(SHORT);
}
void Pause()
{
  delay(LONG);
}
