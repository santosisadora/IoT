int green = 10;
int potentiometer = A0;

void setup()
{
  pinMode(green, OUTPUT);
}

void loop()
 {
  //create the new variable called value
  //value is equal to what the potentiometer is reading
  int value = analogRead(potentiometer);
  //map is a function
  //it maps(creates a correspondence)the max value from the potentiometer(1024) to the max value of LED(255)
  value = map(value, 0, 1024, 0, 255);
  //outputs to the LED whatever value is mapping from the potentiometer:
  analogWrite(green, value);
  }