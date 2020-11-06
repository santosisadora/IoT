int red = 9 ;
int blue = 10;
int green = 11;

int button1Pin = 2;
int button2Pin = 3;
bool playbutton = false;

void setup(){
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);
}

void loop(){
  
   
   if(digitalRead(button1Pin)==HIGH){
    playbutton=true;
  }
   
  
  if(playbutton==true){
    digitalWrite(red, HIGH);
    digitalWrite(blue, LOW);
    digitalWrite(green, LOW);
    delay(500);
    
    digitalWrite(red, LOW);
    digitalWrite(blue,HIGH);
    digitalWrite(green, LOW);
    delay(500);
    
    digitalWrite(blue, LOW);
    digitalWrite(green, HIGH);
    digitalWrite(red, LOW);
    delay(500);
 
   }
  
  if(digitalRead(button2Pin)==HIGH){
    playbutton=false;
  }
  if(playbutton==false){
    digitalWrite(red, LOW);
    digitalWrite(blue, LOW);
    digitalWrite(green, LOW);
  }
  
   
}
 