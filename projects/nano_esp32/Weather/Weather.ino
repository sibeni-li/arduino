#include <DHT.h>

#define RED D2
#define YELLOW D3
#define GREEN D4
#define BLUE D5

#define DHTPIN D6
#define DHTTYPE DHT11

// Initialize DHT sensor
DHT dht(DHTPIN, DHTTYPE);

int d = 1000;

void setup()
{
    pinMode(RED, OUTPUT);
    pinMode(YELLOW, OUTPUT);
    pinMode(GREEN, OUTPUT);
    pinMode(BLUE, OUTPUT);
    
    Serial.begin(115200);
    dht.begin();
}

void loop()
{
    delay(d);

    digitalWrite(RED, LOW);
    digitalWrite(YELLOW, LOW);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);

    // Read the temperature from the DHT sensor
    float h = dht.readHumidity();
    float t = dht.readTemperature();

    // Check sensor reading failure
    if (isnan(h) || isnan(t))
    {
      Serial.println("DHT sensor reading failure");
      return;
    }


    // Check which temperature range it falls into, turn on the appropriate LED and print the message
    Serial.print("T: ");
    Serial.print(t);
    Serial.print(" ");

    if (t <= 19)
    {
      digitalWrite(BLUE, HIGH);
      Serial.print("COLD");
    }
    else if (t <= 23)
    {
      digitalWrite(GREEN, HIGH);
      Serial.print("COZY");
    }
    else if (t <= 27)
    {
      digitalWrite(YELLOW, HIGH);
      Serial.print("WARM");
    }
    else
    {
      digitalWrite(RED, HIGH);
      Serial.print("HOT");
    }

    // Check humidity range and print message
    Serial.print("H: ");
    Serial.print(h);
    Serial.print(" ");

    if (0 <= h && h <= 20) Serial.print("V.DRY");
    else if (h <= 40) Serial.print("DRY");
    else if (h <= 60) Serial.print("GOOD");
    else if (h <= 80) Serial.print("HUM");
    else if (h <= 100) Serial.print("V.HUM");

    Serial.println();  // New line after each reading

}