int blueLED = 13;
int redLED = 8;
void setup()
{
  pinMode(blueLED, OUTPUT);
  pinMode(redLED, OUTPUT);
}

void loop()
{
  digitalWrite(blueLED, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(blueLED, LOW);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(redLED, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(redLED, LOW);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(blueLED, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(blueLED, LOW);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(redLED, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(redLED, LOW);
  delay(100); // Wait for 1000 millisecond(s)
}