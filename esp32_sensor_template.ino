/*
  GLUCOGEN — ESP32 sensor acquisition starter template
  Illustrative starter code; not a complete or validated device.
  It intentionally does NOT estimate glucose or generate medical alerts.
*/
#include <Arduino.h>

const unsigned long SAMPLE_INTERVAL_MS = 1000;
unsigned long lastSampleMs = 0;

struct SensorSample {
  unsigned long timestampMs;
  float ppgRaw, temperatureC, accelX, accelY, accelZ;
  bool ppgAvailable, temperatureAvailable, motionAvailable;
};

SensorSample readSensorsPlaceholder() {
  SensorSample s{};
  s.timestampMs = millis();

  // TODO: Replace with actual MAX30102 PPG sampling.
  s.ppgRaw = NAN; s.ppgAvailable = false;
  // TODO: Replace with actual MAX30205 reading, if fitted.
  s.temperatureC = NAN; s.temperatureAvailable = false;
  // TODO: Replace with actual MPU6050 accelerometer reading, if fitted.
  s.accelX = s.accelY = s.accelZ = NAN; s.motionAvailable = false;
  return s;
}

void printCsvHeader() {
  Serial.println("timestamp_ms,ppg_raw,temperature_c,accel_x,accel_y,accel_z,ppg_available,temp_available,motion_available");
}

void printSampleCsv(const SensorSample &s) {
  Serial.print(s.timestampMs); Serial.print(',');
  if (s.ppgAvailable) Serial.print(s.ppgRaw); else Serial.print("NA");
  Serial.print(',');
  if (s.temperatureAvailable) Serial.print(s.temperatureC); else Serial.print("NA");
  Serial.print(',');
  if (s.motionAvailable) {
    Serial.print(s.accelX); Serial.print(',');
    Serial.print(s.accelY); Serial.print(',');
    Serial.print(s.accelZ);
  } else Serial.print("NA,NA,NA");
  Serial.print(','); Serial.print(s.ppgAvailable ? 1 : 0);
  Serial.print(','); Serial.print(s.temperatureAvailable ? 1 : 0);
  Serial.print(','); Serial.println(s.motionAvailable ? 1 : 0);
}

void setup() {
  Serial.begin(115200);
  delay(500);
  printCsvHeader();
  Serial.println("# Starter template; sensor functions are placeholders.");
}

void loop() {
  if (millis() - lastSampleMs >= SAMPLE_INTERVAL_MS) {
    lastSampleMs = millis();
    SensorSample sample = readSensorsPlaceholder();
    printSampleCsv(sample);
  }
}
