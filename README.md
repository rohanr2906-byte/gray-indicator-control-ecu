# Automotive Indicator Control ECU Demo

This project demonstrates a basic automotive indicator control ECU using Arduino Uno, embedded C/C++, GPIO input handling, LED output control, scheduler-style timing logic, and UART debug logging.

## Project Objective

The objective of this project is to demonstrate embedded systems, automotive ECU logic, basic validation workflow, and GitHub-based technical documentation.

## Tools Used

- Arduino Uno
- Embedded C/C++
- Arduino IDE
- GPIO
- UART Serial Monitor
- millis()-based timing logic
- Git
- GitHub

## Features

- Left indicator control
- Right indicator control
- Hazard light mode
- Button input handling
- LED blinking logic
- UART debug logging
- Basic validation test cases
- Structured GitHub documentation
- Wiring documentation for hardware connections

## Hardware Inputs and Outputs

| Component | Arduino Pin | Purpose |
|---|---|---|
| Left Button | D2 | Activates left indicator |
| Right Button | D3 | Activates right indicator |
| Hazard Button | D4 | Activates hazard mode |
| Left LED | D8 | Left indicator output |
| Right LED | D9 | Right indicator output |

## Software Architecture

The project is divided into:

### Application Logic

- Left indicator state
- Right indicator state
- Hazard mode state
- Indicator off condition

### Basic Software Logic

- GPIO input reading
- LED output control
- Timing control using millis()
- UART serial logging

## Project Structure

```text
gray-indicator-control-ecu
│
├── firmware
│   └── arduino_uno
│       └── indicator_ecu_uno.ino
│
├── docs
│   ├── system_architecture.md
│   ├── test_cases.md
│   └── wiring_diagram.md
│
├── media
│
└── README.md
```

## Additional Documentation

- System architecture: `docs/system_architecture.md`
- Validation test cases: `docs/test_cases.md`
- Wiring diagram: `docs/wiring_diagram.md`

## How to Run

1. Open `firmware/arduino_uno/indicator_ecu_uno.ino` in Arduino IDE.
2. Select Arduino Uno as the board.
3. Connect the Arduino Uno.
4. Upload the code.
5. Open Serial Monitor at 9600 baud rate.
6. Press left, right, or hazard buttons to observe LED behavior and UART logs.

## Wiring Overview

The project uses three push buttons and two LEDs connected to an Arduino Uno.

### Button Connections

| Button | Arduino Pin | Connection Logic |
|---|---|---|
| Left Button | D2 | Button connected between D2 and GND |
| Right Button | D3 | Button connected between D3 and GND |
| Hazard Button | D4 | Button connected between D4 and GND |

The button inputs use `INPUT_PULLUP`, so the default state is HIGH and the pressed state is LOW.

### LED Connections

| LED | Arduino Pin | Connection Logic |
|---|---|---|
| Left LED | D8 | LED connected through resistor to GND |
| Right LED | D9 | LED connected through resistor to GND |

## Validation

Basic validation was documented for:

- Left indicator activation
- Right indicator activation
- Hazard mode
- Indicator off condition
- UART debug output

Detailed test cases are available in:

```text
docs/test_cases.md
```

## Project Outcome

This project demonstrates basic automotive ECU behavior, embedded firmware development, GPIO handling, LED output control, UART logging, timing logic, wiring documentation, and validation-oriented project documentation.

## Future Improvements

- Add modular driver files for GPIO, button, UART, and scheduler
- Add CAN communication simulation
- Add state-machine diagram
- Add image-based wiring diagram
- Add unit-test style validation for indicator logic
