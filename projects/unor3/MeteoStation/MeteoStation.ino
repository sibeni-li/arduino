
#include <LiquidCrystal.h>
#include <DHT.h>

#define DHTTYPE DHT11

// DHT pin
const int dhtPin = 2;

// LED pins
const int bLedPin = 6;
const int gLedPin = 5;
const int yLedPin = 4;
const int rLedPin = 3;

// Initialize DHT sensor
DHT dht(dhtPin, DHTTYPE);

// Initialize LCD (RS, E, D4, D5, D6, D7)
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup()
{
    pinMode(bLedPin, OUTPUT);
    pinMode(gLedPin, OUTPUT);
    pinMode(yLedPin, OUTPUT);
    pinMode(rLedPin, OUTPUT);

    digitalWrite(bLedPin, LOW);
    digitalWrite(gLedPin, LOW);
    digitalWrite(yLedPin, LOW);
    digitalWrite(rLedPin, LOW);

    Serial.begin(9600);
    dht.begin();
    lcd.begin(16,2);
}

void loop()
{
    delay(2000);

    // Turn off all LEDs
    digitalWrite(bLedPin, LOW);
    digitalWrite(gLedPin, LOW);
    digitalWrite(yLedPin, LOW);
    digitalWrite(rLedPin, LOW);

    // Read the temperature from the DHT sensor
    float h = dht.readHumidity();
    float t = dht.readTemperature();

    // Check sensor reading failure
    if (isnan(h) || isnan(t))
    {
      Serial.println("DHT sensor reading failure");
      return;
    }

    lcd.clear();

    // Check which temperature range it falls into
    // Turn on the appropriate LED and display the message
    lcd.setCursor(0,0);

    lcd.print("T: ");
    lcd.print(t);
    lcd.print(" ");

    if (t <= 19)
    {
      digitalWrite(bLedPin, HIGH);
      lcd.print("COLD");
    }
    else if (t <= 23)
    {
      digitalWrite(gLedPin, HIGH);
      lcd.print("COZY");
    }
    else if (t <= 27)
    {
      digitalWrite(yLedPin, HIGH);
      lcd.print("WARM");
    }
    else
    {
      digitalWrite(rLedPin, HIGH);
      lcd.print("HOT");
    }

    // Check humidity range an display message
    lcd.setCursor(0,1);

    lcd.print("H: ");
    lcd.print(h);
    lcd.print(" ");

    if (0 <= h && h <= 20) lcd.print("V.DRY");
    else if (h <= 40) lcd.print("DRY");
    else if (h <= 60) lcd.print("GOOD");
    else if (h <= 80) lcd.print("HUM");
    else if (h <= 100) lcd.print("V.HUM");
}
