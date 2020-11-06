
int rotationPin = A0;
int data=0;
int RGBRedPin = 9;
int RGBGreenPin = 11;
int RGBBluePin = 10;
int waitTime = 1000;

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
    
     if(data >0 && data <170){
    digitalWrite(RGBRedPin, HIGH);
    delay(waitTime);
    digitalWrite(RGBRedPin, LOW);
       delay(waitTime);
     }
       
        if(data > 170 && data<340){
    digitalWrite(RGBBluePin, HIGH);
    delay(waitTime);
    digitalWrite(RGBBluePin, LOW);
    delay(waitTime);
    }
    
         if(data > 340 && data < 510){
      digitalWrite(RGBGreenPin, HIGH);
      delay(waitTime);
      digitalWrite(RGBGreenPin, LOW);
      delay(waitTime);
      }
    
    if(data > 510 && data <680){
      digitalWrite(RGBRedPin, HIGH);
      digitalWrite(RGBBluePin, HIGH);
      delay(waitTime);
      digitalWrite(RGBRedPin, LOW);
      digitalWrite(RGBBluePin, LOW);
      delay(waitTime);
    }
    
    if(data > 680 && data < 850){
      digitalWrite(RGBRedPin, HIGH);
      digitalWrite(RGBGreenPin, HIGH);
      delay(waitTime);
      digitalWrite(RGBRedPin, LOW);
      digitalWrite(RGBGreenPin, LOW);
      delay(waitTime);
    }
    
    if(data > 850 && data < 1020){
      digitalWrite(RGBBluePin, HIGH);
      digitalWrite(RGBGreenPin, HIGH);
      delay(waitTime);
      digitalWrite(RGBBluePin, LOW);
      digitalWrite(RGBGreenPin, LOW); 
      delay(waitTime);
  }
  }
