#include "DHT.h"

#define DHTPIN 5       // D5 pin for DHT11 sensor
#define DHTTYPE DHT11   // Type of DHT sensor (DHT11 or DHT22)

#define MQ7_PIN 4      // GPIO4 (ADC2_0) pin for MQ7 sensor
#define MQ135_PIN 2    // GPIO2 (ADC2_2) pin for MQ135 sensor

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(2000);  // Delay between sensor readings
  
  float temperature = dht.readTemperature();  // Read temperature (in Celsius)
  float humidity = dht.readHumidity();        // Read humidity (in %)

  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  float mq7Voltage = analogRead(MQ7_PIN) * (5.0 / 4095.0); // Convert analog reading to voltage (ESP32 ADC resolution is 12 bits)
  float mq7PPM = 10 * mq7Voltage; // Convert voltage to PPM (Parts Per Million)

  float mq135Voltage = analogRead(MQ135_PIN) * (5.0 / 4095.0); // Convert analog reading to voltage (ESP32 ADC resolution is 12 bits)
  // Adjust this formula based on your MQ135 calibration

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" °C\t");
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print(" %\t");
  Serial.print("MQ7 PPM: ");
  Serial.print(mq7PPM);
  Serial.print("\tMQ135 PPM: ");
  Serial.println(mq135Voltage);
}
