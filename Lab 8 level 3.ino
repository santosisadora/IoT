#include <LiquidCrystal.h>
//Initialise the Serial LCD.
LiquidCrystal lcd( 12,11,5,4,3,2); //These pin numbers are hard coded in on the serial backpackboard.
int LCD_LIGHT_PIN=A0;
int buttonPin =8;
int hits=0;
int buttonState = 0;
int prevButtonState=0;

void setup() {    
  lcd.begin (16,2);//Initialize the LCD. 16 and 2 corresponds to rows and lines
  lcd.clear();
  
  //set the button pin as an input
  pinMode(buttonPin,INPUT);
  
  
 }

void loop(){
 buttonState = digitalRead(buttonPin);
  
  
  if(buttonState == !prevButtonState){
    if(buttonState == HIGH){
   hits = hits+1;
    delay(500);
  }
  }
  
  if (hits == 1){
 // Print some text to the LCD.
 lcd.clear();
 lcd.setCursor(0, 0);
 lcd.print("Isadora Simoes");
 }
  else if (hits == 2 ){
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("running");
 }
  else if (hits >= 3 ){
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Strogonoff");
 }

}  