#include <IRremote.h>      //including infrared remote header file
int RECV_PIN = 12;        // the pin where you connect the output pin of IR sensor
IRrecv irrecv(RECV_PIN);
decode_results results;
int redLed = 9;
int greenLed = 10;
int blueLed = 11;
int value = 0;
int test = 12;

int plusButton =-30601;
int minusButton =  18615;

int ledRStr;
int ledYStr;

void setup(){  
  
Serial.begin(9600);  
irrecv.enableIRIn();
  
  ledRStr = 0;
  ledYStr = 0;
}

void loop(){  
  
if (irrecv.decode(&results)){    
  value = results.value;    
  Serial.println(" ");    
  Serial.print("Code: ");    
  Serial.println(value); //prints the value a a button press    
  Serial.println(" ");    
  irrecv.resume();// Receive the next value    
  Serial.println("*****************");   
  
  //button power turns red rgb on
  if(value == 255){    
    digitalWrite(redLed,HIGH);    
    delay(500);
    ledRStr -=1;
    ledYStr -=1;
  }
//button 2 turns brightness up
  if(value == -30601 ){      
    digitalWrite(redLed,HIGH);
    analogWrite(redLed, ledRStr);
    ledRStr +=1;
    ledYStr +=1;
    delay(500);   
  }
  
  //button 3 turns brightness down
  if(value == 18615){    
    digitalWrite(redLed,HIGH);
    digitalWrite(blueLed, LOW);
    ledRStr -=1;
    ledYStr -=1;
    delay(500);  
  }    
  
  //button 4 changes to magenta (red+blue)
  if(value == 10455){      
    digitalWrite(redLed,HIGH);
    digitalWrite(blueLed, HIGH);
    delay(500);   
  }
 
}
}
