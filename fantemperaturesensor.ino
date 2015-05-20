
int val;
const int tempPin = 1;
const int fanPin = 4;

void setup()
{
pinMode (fanPin,OUTPUT); 
}
void loop()
{
  val = analogRead(tempPin);
  float mv = (val/1024.0)*5000; 
  float cel = mv/10;
  float farh = (cel*9)/5 + 32;
  
  if (farh >= 85) {
    digitalWrite (fanPin, HIGH);
  }
  else {
    digitalWrite (fanPin, LOW);
  }
}


