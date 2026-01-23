int ledPin = 12;
int sensorPin = 7;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  
  digitalWrite(ledPin, LOW);
}

void loop()
{
  int sensorValue = digitalRead(sensorPin);
  digitalWrite(ledPin, sensorValue);
}
