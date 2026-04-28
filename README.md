# Traffic-Light-Controller-Arduino
# Smart Traffic Light Controller (Arduino)

An intermediate-level simulation of a 4-phase traffic light system designed in Tinkercad. This project demonstrates precise timing control and modular code structure for urban infrastructure automation.

## 🚦 Project Overview
This project simulates a standard international traffic light sequence:
1. **Red:** Stop (30s)
2. **Red + Yellow:** Prepare to go (3s)
3. **Green:** Go (25s)
4. **Yellow:** Prepare to stop (4s)

## 🛠️ Components Used
* **Microcontroller:** Arduino Uno R3
* **Output:** 3x LEDs (Red, Yellow, Green)
* **Resistors:** 3x 220Ω Resistors
* **Software:** Tinkercad Circuits (Simulation), C++/Arduino Framework

## 📑 Circuit Logic
The code uses a modular `setLights()` function to handle the state of each LED, ensuring the logic is easy to read and modify. The timings are managed using `const int` definitions for easy adjustments.

## 🚀 Future Scope (IoT Integration)
* **Adaptive Timing:** Integrating Ultrasonic sensors to detect traffic density and adjust timings dynamically.
* **Emergency Override:** Implementing an IoT-based override for emergency vehicles (Ambulances/Fire Trucks).
* **Remote Monitoring:** Sending light status data to a central dashboard via ESP8266.

## 🔗 Simulation Link
[Insert your Tinkercad Public Link Here]
