# Automated-Car
An Arduino-based project integrating force, ultrasonic, and infrared (IR) sensors to enhance the safety, automation, and user experience of modern vehicles.

## 🔍 Problem Statement

Modern vehicles demand intelligent systems for enhanced safety and automation. This project addresses the need for:
- **Driver seat detection** to enforce seatbelt usage or activate safety systems.
- **Obstacle detection** to aid in parking and prevent collisions.
- **User presence sensing** for automatic door unlocking or lighting systems.

## 🎯 Objective

To develop a low-cost, sensor-based smart car system using an Arduino Uno, integrating:
- **Force Sensor** for seat occupancy detection
- **Ultrasonic Sensor** for distance measurement (e.g., parking assist)
- **IR Sensor** for user proximity or gesture detection

## 🧰 Components Used

- Arduino Uno R3
- Force Sensor (FSR)
- Ultrasonic Sensor (HC-SR04)
- Infrared (IR) Receiver Sensor
- IR Remote Control (for testing)
- Buzzer (for alerts)
- Resistors, jumper wires, breadboards
- USB Cable (for Arduino)

## 🔌 Circuit Overview

This project combines:
- **Force Sensor** on the driver's seat area (analog input)
- **Ultrasonic Sensor** mounted at the rear for detecting distance to obstacles (digital trigger/echo)
- **IR Sensor** to detect remote signals or user proximity (digital input)
- **Buzzers** to provide audible feedback based on sensor conditions

## 📐 Features

- Detects if someone is seated in the driver’s seat using an FSR sensor
- Alerts driver with a buzzer when an obstacle is detected while reversing
- Activates lights or features based on IR sensor input (e.g., door unlock simulation)

## 🧠 How It Works

1. **Seat Occupancy Detection:**  
   The force sensor checks for a certain pressure threshold. If exceeded, it assumes the seat is occupied and enables system functions.

2. **Obstacle Detection:**  
   The ultrasonic sensor constantly measures the distance from the rear of the vehicle. If an object is closer than a set distance, it activates a buzzer warning.

3. **User Interaction (IR Sensor):**  
   The IR sensor detects signals from a remote or hand motion, used to simulate unlocking or lighting up the car.

## 🚀 Getting Started

### Prerequisites

- Arduino IDE
- USB cable for uploading code
- Libraries:
  - `IRremote` for IR functionality

### Uploading the Code

1. Connect the Arduino to your PC.
2. Open the project in the Arduino IDE.
3. Select the correct COM port and board.
4. Upload the code.

## 📦 Future Improvements

- Add Bluetooth control via smartphone
- Display sensor data on an LCD/OLED
- Integrate a GPS/GSM module for alerts
- Real-time cloud monitoring using IoT

## 📸 Schematic

![Circuit Diagram](insert-circuit-image-url-here)

## 👨‍💻 Author

Created by [Your Name]  
For academic or prototyping purposes.

---

