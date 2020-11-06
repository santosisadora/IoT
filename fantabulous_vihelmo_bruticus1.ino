
int rotationPin = A0;
int data=0;
int RGBRedPin = 9;
int RGBGreenPin = 10;
int RGBBluePin = 11;
int waitTime = 2000;

void setup()  {
  Serial.begin(9600);
  pinMode(rotationPin, INPUT);
  pinMode(RGBRedPin, OUTPUT);
  pinMode(RGBGreenPin, OUTPUT);
  pinMode(RGBBluePin, OUTPUT);
} 
  void loop(){
  data = analogRead(rotationPin);
  Serial.print("Rotation value=");
  Serial.println(data);
  delay(1000);
    
     if(rotationPin >200 && rotationPin <1000){
    digitalWrite(RGBRedPin, HIGH);
    delay(waitTime);
    digitalWrite(RGBRedPin, LOW);
    delay(waitTime);
    
    digitalWrite(RGBGreenPin, HIGH);
    delay(waitTime);
    digitalWrite(RGBGreenPin, LOW);
    delay(waitTime);
    
    digitalWrite(RGBBluePin, HIGH);
    delay(waitTime);
    digitalWrite(RGBBluePin, LOW);
    delay(waitTime);
       
  
     }
  }





