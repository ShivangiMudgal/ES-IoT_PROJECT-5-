const byte buttonPin[3]={2,3,4};
const byte mpins[2]={7,8};

void setup() {
  for(int i=0;i<2;i++)
  {
    pinMode(mpins[i],OUTPUT);
  }
  for(int j=0;j<3;j++)
  {
    pinMode(buttonPin[j],INPUT_PULLUP);
  }
}

void loop() {
  if(digitalRead(buttonPin[0])==0)
  {
    while(digitalRead(buttonPin[0])==0);
    digitalWrite(mpins[0],0);
    digitalWrite(mpins[1],1);
  }
  if(digitalRead(buttonPin[1])==0)
  {
    while(digitalRead(buttonPin[1])==0);
    digitalWrite(mpins[0],1);
    digitalWrite(mpins[1],0);
  }
  if(digitalRead(buttonPin[2])==0)
  {
    digitalWrite(mpins[0],0);
    digitalWrite(mpins[1],0);
    while(digitalRead(buttonPin[2])==0);
  }

  

  
  
}
