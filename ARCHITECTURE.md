# GLUCOGEN — Proposed Technical Architecture

## Purpose
Explore local processing of wearable physiological signals for research into glucose-related trends. This architecture is proposed, not evidence of clinical performance.

## Blocks
1. **PPG sensor (e.g., MAX30102):** obtains pulse-related optical signals.
2. **NIR optical sensor:** optional research signal source; document the exact part and wavelength.
3. **Temperature sensor (e.g., MAX30205):** obtains temperature-related readings.
4. **Motion sensor (e.g., MPU6050):** helps identify movement artefacts.
5. **ESP32:** timestamps readings, performs basic signal-quality checks, and can send data.
6. **Research model:** must be trained and evaluated using appropriate data paired with reliable reference glucose measurements. No trained/validated model is included here.
7. **Mobile app (future):** may display sensor quality and research results over Bluetooth.

## Data flow
Sensors -> ESP32 acquisition -> signal-quality checks -> data logging / feature extraction -> research analysis -> optional Bluetooth display.

## Limitations
- PPG, temperature, motion, and NIR readings do not directly measure blood glucose.
- Accuracy requires suitable reference measurements, representative data, independent testing, and error analysis.
- Motion, skin properties, sensor placement, ambient light, perfusion, and temperature can affect optical readings.
- Medical use requires appropriate clinical, regulatory, privacy, and safety evaluation.
- Do not use experimental output for treatment decisions.
