#include <LiquidCrystal.h>
//Initialise the Serial LCD.
LiquidCrystal lcd( 12,11,5,4,3,2); //These pin numbers are hard coded in on the serial backpackboard.

void setup() {    
  lcd.begin (16,2);     //Initialize the LCD. //16 and 2 corresponds to lines and rows 
  lcd.clear();
  
  
  }

void loop(){
  scroll_right();
  delay(600);
  scroll_left();


}  
//Scrolls message from left to right
void scroll_right(){
  lcd.setCursor(0,0);
  
  lcd.begin(0,1);
  
  lcd.print("ISADORA");
  delay(1000);
    for (int positionCounter = 0; positionCounter < 9; positionCounter++) {
    // scroll one position right:
    lcd.scrollDisplayRight();
    // wait a bit:
    delay(150);
  }
}

//Scrolls message from right to left
  void scroll_left(){
    
    lcd.begin(0,16);
    
  lcd.setCursor(9,4);
  lcd.print("ISADORA");
  delay(1000);
    for (int positionCounter = 10; positionCounter < 19; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
      delay(150);}
  }



