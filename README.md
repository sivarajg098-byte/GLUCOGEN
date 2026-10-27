# GLUCOGEN
## Edge-AI Wearable for Glucose Trend Monitoring and Early Hypoglycemia Risk Alerts

GLUCOGEN is a student research prototype concept exploring whether wearable physiological signals can be processed locally to study glucose-related trends and possible low-glucose risk patterns.

> **Safety notice:** This is an educational research starter, not a medical device. It does not measure blood glucose directly and is not clinically validated. Never use its output to diagnose, treat, or change medication. Any research estimate must be compared with suitable reference measurements under qualified supervision.

## Proposed hardware
- ESP32 development board
- MAX30102 PPG sensor
- NIR optical sensor (exact part depends on the hardware selected)
- MAX30205 temperature sensor (if fitted)
- MPU6050 motion sensor
- Rechargeable battery with suitable charging/protection circuit
- Optional OLED display / haptic motor / buzzer
- Mobile phone for future Bluetooth display

Only mark components as implemented once they have actually been connected and tested.

## Proposed data flow
Sensors -> ESP32 -> signal quality checks and preprocessing -> feature extraction -> research model (not included/trained yet) -> optional Bluetooth output -> mobile app.

## Repository contents
- `firmware/esp32_sensor_template.ino` — illustrative ESP32 starter firmware
- `docs/ARCHITECTURE.md` — proposed architecture and limitations
- `data/sample_sensor_log.csv` — synthetic example data for software testing only
- `tests/test_plan.md` — initial test plan
- `LICENSE` — MIT License

## Setup
1. Install Arduino IDE or PlatformIO.
2. Install ESP32 board support.
3. Add libraries for the exact sensor modules used.
4. Open `firmware/esp32_sensor_template.ino`.
5. Adjust pin assignments and replace placeholder functions with real sensor drivers.
6. Compile and test with sensors disconnected first, then connect one sensor at a time.
7. Document actual test results. The sample CSV is synthetic, not patient data.

This template intentionally does not output glucose values or clinical alerts because no validated model or reference dataset has been supplied.

## Current status
Starter documentation and illustrative firmware template. Sensor integration, data collection, model training, app integration, and clinical validation remain future work unless separately demonstrated and documented.
