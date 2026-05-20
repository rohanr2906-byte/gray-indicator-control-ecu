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
│   └── test_cases.md
│
├── media
│
└── README.md
