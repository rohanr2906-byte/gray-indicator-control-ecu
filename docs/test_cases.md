# Validation Test Cases

| Test ID | Test Scenario | Input | Expected Output | Status |
|---|---|---|---|---|
| TC_01 | Left indicator activation | Left button pressed | Left LED blinks | Passed |
| TC_02 | Right indicator activation | Right button pressed | Right LED blinks | Passed |
| TC_03 | Hazard mode activation | Hazard button pressed | Both LEDs blink | Passed |
| TC_04 | Indicator off condition | No button pressed | Both LEDs remain off | Passed |
| TC_05 | UART debug logging | Button input changes | Active state printed on Serial Monitor | Passed |