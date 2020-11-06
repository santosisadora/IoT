int blueLED = 13;
void setup()
{
  pinMode(blueLED, OUTPUT);
}

void loop()
{
  digitalWrite(blueLED, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(blueLED, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(blueLED, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(blueLED, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(blueLED, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(blueLED, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(blueLED, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(blueLED, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(blueLED, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(blueLED, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(blueLED, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(blueLED, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}