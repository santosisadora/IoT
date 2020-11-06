int lightPin = A1;
int data = 0;
int RGBRedPin = 9;
int RGBBluePin = 11;
int RGBGreenPin = 10;

void setup(){
  Serial.begin(9600);
}

void loop(){
  data=analogRead(lightPin);
  data = map(data,0,1023,0,100);
  Serial.print("Light value=");
  Serial.println(data);
  delay(500);
  
  if (data >0 && data <35 ){
    digitalWrite(RGBRedPin, HIGH);
  }
  
  if(data > 36 && data <45 ){
    digitalWrite(RGBRedPin, LOW);
    delay;
    digitalWrite(RGBBluePin, HIGH);
    
  }
  
  if(data > 46 && data <66){
    digitalWrite(RGBBluePin, LOW);
    digitalWrite(RGBRedPin, LOW);
    digitalWrite(RGBGreenPin, HIGH);
  }
    
}
