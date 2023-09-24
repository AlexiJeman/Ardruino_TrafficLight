// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void R() // Red light function
{
  digitalWrite(13, HIGH);
  delay(5000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  for (int i = 0; i < 2; ++i) {
    digitalWrite(13, HIGH);
    delay(1000); // Wait for 1000 milliseconds
    digitalWrite(13, LOW);
    delay(1000); // Wait for 1000 milliseconds
  }
}

void Y() // Yellow light function
{
  digitalWrite(12, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(12, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}

void G() // Green light function
{
  digitalWrite(11, HIGH);
  delay(5000); // Wait for 1000 millisecond(s)
  digitalWrite(11, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  for (int i = 0; i < 2; ++i) {
    digitalWrite(11, HIGH);
    delay(1000); // Wait for 1000 milliseconds
    digitalWrite(11, LOW);
    delay(1000); // Wait for 1000 milliseconds
  }
}


void loop()
{
 R();
 Y();
 G();
}