#include <IRremote.h>      //including infrared remote header file
int RECV_PIN = 11;        // the pin where you connect the output pin of IR sensor
IRrecv irrecv(RECV_PIN);
decode_results results;
int blueLed = 12;
int redLed = 13;
int value = 0;

void setup(){  
  
Serial.begin(9600);  
irrecv.enableIRIn();
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
  
  //button 1 turns on blue LED
  if(value == 2295){    
    digitalWrite(blueLed,HIGH);    
    delay(500);  
  }    
  
  //button 2 turns on red LED
  if(value == -30601){      
    digitalWrite(redLed,HIGH);    
    delay(500);   
  }
  
  //button 3 turns off blue LED
  if(value == 18615){    
    digitalWrite(blueLed,LOW);    
    delay(500);  
  }    
  
  //button 4 turns off red LED
  if(value == 10455){      
    digitalWrite(redLed,LOW);    
    delay(500);   
  }
  //button 5 flashes both LEDs 3 times
  if(value == -22441){
    digitalWrite(redLed, HIGH);
    digitalWrite(blueLed, HIGH);
    delay(350);
    digitalWrite(redLed, LOW);
    digitalWrite(blueLed, LOW);
    delay(350);
    digitalWrite(redLed, HIGH);
    digitalWrite(blueLed, HIGH);
    delay(350);
    digitalWrite(redLed, LOW);
    digitalWrite(blueLed, LOW);
    delay(350);
    digitalWrite(redLed, HIGH);
    digitalWrite(blueLed, HIGH);
    delay(350);
    digitalWrite(redLed, LOW);
    digitalWrite(blueLed, LOW);
    delay(350);
    }
}
}
