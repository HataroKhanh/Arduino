byte ledPin[] = {2,3};
byte pinCount;
void setup()
{
  pinCount = sizeof(ledPin);
  for (int i=0;i<pinCount;i++)
  {
    pinMode(ledPin[i],OUTPUT);
    pinMode(ledPin[i],LOW);
  }
}
void loop()
{
  for(int i=0;i<pinCount;i++)
  {
    digitalWrite(ledPin[i],HIGH);
    delay(500);
  }
  for(int i=0;i<pinCount;i++)
  {
    digitalWrite(ledPin[i],LOW);
    delay(500);
  }
}
