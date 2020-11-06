#include <Servo.h>
Servo myservo;
int val;
int position=0;
int positionChange=5;

//button pins
#define left 12
#define right 11

void setup()
{   
  Serial.begin(9600);
  //servo is on pin4
  myservo.attach(4);  
  pinMode(left, INPUT);
  pinMode(right, INPUT);
  myservo.write(position);
}

void loop()
{  
  while(digitalRead(right) == LOW){

  if(position > 0 && position <= 180){
  position = position - positionChange;
       if(position < 0){
      position = 0;
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
  
  while(digitalRead(left) == LOW){
    
    if(position >=0 && position <=185){
      position = position + positionChange;
         if(position>180){
        position=180;
      }
     
    }
      else{
        myservo.write(position);
        Serial.print("Moved to: ");
        Serial.print(position);
        Serial.println("degrees");
      }
    }
  }