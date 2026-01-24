// Define the LED pins
const int RED = D2;
const int YELLOW = D3;
const int GREEN = D4;
const int BLUE = D5;

const int d = 2000;

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
}

void loop() {
  // Red  and Green light
  digitalWrite(RED, HIGH);
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, LOW);
  delay(d);
  
  // Yellow and Blue light
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, HIGH);
  digitalWrite(BLUE, HIGH);
  delay(d);
  
  // Green and Blue light
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, HIGH);
  delay(d);
  
  // Red and Yellow light
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
  digitalWrite(RED, HIGH);
  digitalWrite(YELLOW, HIGH);
  delay(d);
}
