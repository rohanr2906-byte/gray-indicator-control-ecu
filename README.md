# Automotive Indicator Control ECU Demo

This project demonstrates a basic automotive indicator control ECU using Arduino Uno, modular embedded C/C++ firmware, button input handling, LED output control, scheduler logic, PWM, and UART debug logging.

## Project Objective

The objective of this project is to demonstrate embedded systems, automotive ECU logic, modular firmware structure, and basic validation workflow using an Arduino-based indicator control system.

## Tools Used

- Arduino Uno
- Embedded C/C++
- Arduino IDE
- GPIO
- PWM
- UART Serial Monitor
- Basic scheduler logic
- GitHub documentation

## Features

- Left indicator control
- Right indicator control
- Hazard light mode
- Button input handling
- LED blinking logic
- PWM-based brightness control
- UART debug logging
- Modular firmware structure
- Basic validation test cases

## Software Architecture

The project is structured into two main layers:

### Application Software

- Indicator control logic
- Hazard mode handling
- State machine behavior

### Basic Software

- GPIO module
- Button input module
- PWM output module
- UART logging module
- Scheduler module

## Project Structure

```text
gray-indicator-control-ecu
│
├── firmware
│   └── arduino_uno
│       ├── indicator_ecu_uno.ino
│       ├── bsw
│       │   ├── gpio.*
│       │   ├── button.*
│       │   ├── pwm.*
│       │   ├── uart.*
│       │   └── scheduler.*
│       └── asw_gen
│           └── Simulink generated files
│
├── docs
│   ├── system_architecture.md
│   ├── test_cases.md
│   └── project_report.pdf
│
└── media
    ├── demo_video_link.txt
    └── wiring_photos
