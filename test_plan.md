# GLUCOGEN Initial Test Plan

These are proposed tests. Record actual outcomes only after running them.

| ID | Test | Method | Expected result |
|---|---|---|---|
| T01 | Firmware starts | Flash template; open Serial Monitor at 115200 baud | CSV header appears |
| T02 | Placeholder safety | Run without sensor drivers | Values show `NA`; no glucose estimate is produced |
| T03 | PPG integration | Add the selected PPG driver and inspect readings | Readings are timestamped and logged |
| T04 | Temperature integration | Add sensor and compare with a suitable reference instrument | Readings are stable and within sensor specifications |
| T05 | Motion integration | Add MPU6050 and move board gently | Accelerometer values change as expected |
| T06 | Missing sensor | Disconnect one sensor safely | Missing data is indicated, not fabricated |
| T07 | Data quality | Inspect logs for missing values, clipping, and noise | Issues are documented |
| T08 | Bluetooth (future) | Add and test BLE transfer | Intended test data is transferred |
| T09 | Research model (future) | Evaluate independently using reference glucose measurements | Error metrics and limitations are reported |

## Test record template
- Date/time:
- Hardware revision:
- Firmware version:
- Sensor/module:
- Test setup:
- Expected result:
- Observed result:
- Pass/Fail:
- Notes / issues:

Do not use outputs for medical decisions. Human testing requires appropriate supervision and approvals.
