
int sensorReading;

void setup()
{
  Serial.begin(9600);
  pinMode(11, OUTPUT);
}

void loop()
{
  sensorReading = analogRead(A0); //turns the input into a number between 0 and 1023  
  Serial.println(sensorReading); // using println prints out a new line onto the serial monitor aka console
  if( sensorReading > 650)
  {
    Serial.println("Miss! Miss!");
  }
  else
  {
    Serial.println("Hit!");
    digitalWrite(11, HIGH);
    delay(600);
    digitalWrite(11, LOW);
  }
  
  delay(1);  //otherwise it will not be able to receive instructions easily
}

