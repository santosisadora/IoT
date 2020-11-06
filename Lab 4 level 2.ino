int lightPin = A1;
int data = 0;
int redLED = 12;
int blueLED = 13;

void setup(){
  Serial.begin(9600);
}

void loop(){
  data=analogRead(lightPin);
  data = map(data,0,1023,0,100);
  Serial.print("Light value=");
  Serial.println(data);
  delay(1000);
  
  if (data < 33 ){
    digitalWrite(blueLED, HIGH);
    digitalWrite(redLED, HIGH);
  }
  
  if(data > 33){
    digitalWrite(blueLED, LOW);
    digitalWrite(redLED, LOW);
  }
    
}
