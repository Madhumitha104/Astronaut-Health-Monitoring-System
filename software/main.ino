// Astronaut Health Monitoring System
// Hardware: ESP32 + MAX30102 + DS18B20
// Author: Madhumitha R

#include <Wire.h>
#include <MAX30105.h>
#include <DallasTemperature.h>

MAX30105 particleSensor;
OneWire oneWire(4);
DallasTemperature sensors(&oneWire);

void setup() {
  Serial.begin(115200);
  sensors.begin();
  particleSensor.begin();
  Serial.println("System Started...");
}

void loop() {
  // Heart Rate
  long irValue = particleSensor.getIR();
  Serial.print("IR Value: ");
  Serial.println(irValue);

  // Temperature
  sensors.requestTemperatures();
  float tempC = sensors.getTempCByIndex(0);
  Serial.print("Temp: ");
  Serial.println(tempC);

  delay(1000);
}
