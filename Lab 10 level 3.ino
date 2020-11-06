#include <Servo.h>
Servo myservo;
int val;
int position=0;
int positionChange=10;
int red = 9 ;
int blue = 10;
int green = 11;
int button1Pin = 6;
int button2Pin = 5;

//button pins
#define left 5
#define right 6

void setup()
{   
  Serial.begin(9600);
  //servo is on pin4
  myservo.attach(4);  
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);
  pinMode(left, INPUT);
  pinMode(right, INPUT);
  myservo.write(position);
}

void loop()
{  
  while(digitalRead(button1Pin) == LOW){

  if(position > 0 && position <= 200){
  position = position - positionChange;
    digitalWrite(blue, HIGH);
    if(position < 0){
      position = position-positionChange;
      delay(50);
      
      
    }
    else{
   myservo.write(position);
      Serial.print("Moved to: ");
      Serial.print(position);
      Serial.println("degrees");
    }
  }
    
  delay(100);
  } //end of while loop
  
  while(digitalRead(button2Pin) == LOW){
    
    if(position >=0 && position <=180){
      position = position + positionChange ;
      delay(50);
       digitalWrite(red, HIGH);
    }
      else{
        myservo.write(position);
        Serial.print("Moved to: ");
        Serial.print(position);
        Serial.println("degrees");
      }
  }
   if(position>=1 && position<=100){
      digitalWrite(red, HIGH);
    }
  if(position>=101 && position<=180){
      digitalWrite(blue, HIGH);
    }
}
  
