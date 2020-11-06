int blueLedPin = 13;
int button1Pin=2;

int redLedPin = 12;
int button2Pin=4;


void setup(){
  pinMode(blueLedPin, OUTPUT);
  pinMode(button1Pin,INPUT);
  
  pinMode(redLedPin, OUTPUT);
  pinMode(button2Pin, INPUT);
}

void loop(){
  
  if(digitalRead(button1Pin)==HIGH){
    digitalWrite(blueLedPin, HIGH);
  }
  
  else{
    digitalWrite(blueLedPin, LOW);
  }
  
  if(digitalRead(button2Pin)==HIGH){
    digitalWrite(redLedPin, HIGH);
  }
  
  else{
    digitalWrite(redLedPin, LOW);
  }
}