# System Architecture

This project demonstrates a basic automotive indicator control ECU using Arduino Uno.

## Software Layers

### Application Layer

- Left indicator logic
- Right indicator logic
- Hazard light logic
- State-based indicator behavior

### Basic Software Layer

- GPIO input handling
- LED output control
- Timing logic using millis()
- UART serial debug logging

## Signal Flow

Button Input → Arduino GPIO → Indicator Logic → LED Output  
System State → UART Serial Monitor → Debug Output

## Working Principle

The system reads left, right, and hazard button inputs. Based on the selected input, the Arduino controls the LED indicators using non-blocking timing logic with `millis()`. UART logging is used to display the active indicator state during testing.