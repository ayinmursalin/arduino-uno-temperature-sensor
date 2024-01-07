#include <Arduino.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

#define DHT_PIN 2
#define DHT_TYPE DHT11

LiquidCrystal_I2C lcd(0x27, 16, 2);
DHT dht(DHT_PIN, DHT_TYPE);

void setup()
{
  lcd.init();
  lcd.backlight();

  dht.begin();
}

void loop()
{
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  if (isnan(temperature) || isnan(humidity))
  {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Failed");
    return;
  }

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperature);
  lcd.print(" C");
  lcd.setCursor(0, 1);
  lcd.print("Humid: ");
  lcd.print(humidity);
  lcd.print(" %");

  delay(2000);
}
