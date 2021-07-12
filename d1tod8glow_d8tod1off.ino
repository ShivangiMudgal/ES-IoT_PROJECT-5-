void setup() {
  for(int i=4;i<=11;i++)
  {
    pinMode(i,OUTPUT);
  }
}

void loop() {
  for(int i=4;i<=11;i++)
  {
    digitalWrite(i,HIGH);
    delay(1000);
  }
  for(int j=11;j>=4;j--)
  {
    digitalWrite(j,LOW);
    delay(1000);
  }
  
  
}
