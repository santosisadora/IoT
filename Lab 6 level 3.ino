const int buttonPin = 3;
const int redPin = 11;
const int greenPin = 9;
const int bluePin = 10;
int counter = 0;
int potentiometer = A0;
 
 
void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
 
}
 
void loop() {
  
  //read button to change led color
  int buttonState = digitalRead(buttonPin);
  
  
  //read value from potentiometer
  int value = analogRead(potentiometer);
  value = map(value,0,1024,0,255);
  
  
  if (buttonState == LOW) {
    counter++;
    delay(150);
    
  
 
    
  }
  
  else if (counter == 0) {
    
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
    
    analogWrite(value, LOW);
  }
  
  else if (counter == 1) {
    analogWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
  
    analogWrite(value, HIGH);
    digitalWrite(redPin, value);
  }
  
  else if (counter == 2) {
    
 
    
     
    analogWrite(value, HIGH);
    digitalWrite(greenPin, value);
  }
  
  else if (counter == 3) {
    
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, HIGH);
    analogWrite(redPin, HIGH);
    analogWrite(greenPin, HIGH);
    analogWrite(bluePin, HIGH);
    
    analogWrite(value, HIGH);
    digitalWrite(bluePin, value);
  }
  
  else {
    counter = 0;
  }
  Serial.print("Rotation value=");
  Serial.println(value);
}
 
