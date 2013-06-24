void setup()
{
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  double sr = analogRead(A0);
  sr = map(sr, 0, 1023, 50, 4000);
  tone(9, sr, 10);
  Serial.println(sr);
  delay(5);
}
