// Simple first program

int delayTime = 2000;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("Hello, World!");
  delay(delayTime);
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("Goodbye, World!");
  delay(delayTime);
}
