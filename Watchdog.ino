void setup()
{
  pinMode(13, OUTPUT);
  pinMode(9, INPUT);
}

void loop()
{
  digitalWrite(13, digitalRead(9));
  delay(3);
}
