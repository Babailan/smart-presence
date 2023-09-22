# Motion Sensor Warning System

This Arduino sketch implements a motion sensor warning system using LEDs. The system consists of a motion sensor, two red LEDs, and a green LED.

## Pins

- **Red LED (redLed)**: Pin 9
  - This LED is used for indicating warnings.
- **Second Red LED (red2Led)**: Pin 11
  - This LED is used in conjunction with the red LED for warning indications.
- **Green LED (greenLed)**: Pin 10
  - This LED is used to indicate normal operation or when no motion is detected.
- **Motion Sensor (motionSensor)**: Pin 8
  - This sensor detects motion and triggers the warning system.

## Usage

1. Connect the components to the corresponding pins on the Arduino board as mentioned above.

2. Upload the provided Arduino sketch to the board.

3. When motion is detected, the red and second red LEDs will alternate between on and off states for 10 seconds, indicating a warning.

4. After 10 seconds, the system will return to normal operation, with the green LED on.
