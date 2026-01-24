const int d = 15;

void setup() {
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_BLUE, OUTPUT);
}

void loop() {
  // Red to Yellow (add green)
  for (int i = 0; i <= 255; i++) {
    analogWrite(LED_RED, 255);
    analogWrite(LED_GREEN, i);
    analogWrite(LED_BLUE, 0);
    delay(d);
  }
  
  // Yellow to Green (remove red)
  for (int i = 255; i >= 0; i--) {
    analogWrite(LED_RED, i);
    analogWrite(LED_GREEN, 255);
    analogWrite(LED_BLUE, 0);
    delay(d);
  }
  
  // Green to Cyan (add blue)
  for (int i = 0; i <= 255; i++) {
    analogWrite(LED_RED, 0);
    analogWrite(LED_GREEN, 255);
    analogWrite(LED_BLUE, i);
    delay(d);
  }
  
  // Cyan to Blue (remove green)
  for (int i = 255; i >= 0; i--) {
    analogWrite(LED_RED, 0);
    analogWrite(LED_GREEN, i);
    analogWrite(LED_BLUE, 255);
    delay(d);
  }
  
  // Blue to Magenta (add red)
  for (int i = 0; i <= 255; i++) {
    analogWrite(LED_RED, i);
    analogWrite(LED_GREEN, 0);
    analogWrite(LED_BLUE, 255);
    delay(d);
  }
  
  // Magenta to Red (remove blue)
  for (int i = 255; i >= 0; i--) {
    analogWrite(LED_RED, 255);
    analogWrite(LED_GREEN, 0);
    analogWrite(LED_BLUE, i);
    delay(d);
  }
}
