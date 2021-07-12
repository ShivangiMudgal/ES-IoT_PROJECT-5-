const byte ledPin=13;
const byte buttonPin1=2;
const byte buttonPin2=3;
void setup() {
  pinMode(ledPin,OUTPUT);
  pinMode(buttonPin1,INPUT_PULLUP);
  pinMode(buttonPin2,INPUT_PULLUP);
}
 
void loop() {
  if(digitalRead(buttonPin1)==0)
  {
    while(digitalRead(buttonPin1)==0);//holding
    digitalWrite(ledPin,1);
    //rising edge
  }
  
  if(digitalRead(buttonPin2)==0)//falling edge
  {
    digitalWrite(ledPin,0);
    while(digitalRead(buttonPin2)==0);
    //falling edge
  }
    
 }
