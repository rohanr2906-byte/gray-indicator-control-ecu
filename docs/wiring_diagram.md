# Wiring Diagram

This document describes the hardware wiring used for the Automotive Indicator Control ECU Demo based on Arduino Uno.

## Components Used

- Arduino Uno
- 3 Push Buttons
- 2 LEDs
- 2 Resistors for LEDs
- Breadboard
- Jumper wires

## Pin Connections

| Component | Arduino Pin | Description |
|---|---|---|
| Left Button | D2 | Input for left indicator |
| Right Button | D3 | Input for right indicator |
| Hazard Button | D4 | Input for hazard mode |
| Left LED | D8 | Output for left indicator |
| Right LED | D9 | Output for right indicator |
| GND | GND | Common ground connection |

## Wiring Logic

- Each push button is connected to an Arduino digital input pin.
- The buttons use `INPUT_PULLUP`, so each button connects the pin to **GND when pressed**.
- Each LED is connected to an Arduino digital output pin through a resistor.
- The other side of each LED is connected to **GND**.

## Simple Connection Overview

### Buttons
- Left Button: one side to **D2**, other side to **GND**
- Right Button: one side to **D3**, other side to **GND**
- Hazard Button: one side to **D4**, other side to **GND**

### LEDs
- Left LED anode (+) to **D8** through resistor
- Left LED cathode (-) to **GND**

- Right LED anode (+) to **D9** through resistor
- Right LED cathode (-) to **GND**

## Text-Based Diagram

```text
Left Button   ---- D2      Arduino Uno
Right Button  ---- D3      Arduino Uno
Hazard Button ---- D4      Arduino Uno

Left LED (+)  ---- D8 through resistor
Left LED (-)  ---- GND

Right LED (+) ---- D9 through resistor
Right LED (-) ---- GND