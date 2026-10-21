<img width="1915" height="901" alt="circuit png" src="https://github.com/user-attachments/assets/bce04f47-db9f-41bd-a5ee-ab3909776998" /># diwali-tinkercad-project-DIWALI-AIRGUARD
Smart Air Quality Monitoring &amp; Alert System built with Arduino on Autodesk tinkercad to track and alert post-Diwali pollution levels.

# 🪔 Smart Air Quality & Pollution Alert System (Diwali Edition)

An IoT-based air quality monitoring simulation designed on Autodesk Tinkercad. This project detects rising pollution and smoke levels during festive seasons (like Diwali) and triggers multi-level alerts based on Air Quality Index (AQI) thresholds.

---

## 📌 Project Overview
During festivals like Diwali, firecracker emissions significantly spike particulate matter and smoke levels. This project simulates an automated monitoring unit that:
- Continuously reads air quality levels using a gas/smoke sensor.
- Visualizes status with a multi-level LED traffic-light system.
- Triggers an audible buzzer alarm when pollution reaches hazardous levels.
- Displays real-time status and ppm readings on an LCD screen / Serial Monitor.

---

## 🛠️ Components Used
- **Microcontroller:** Arduino Uno R3
- **Sensors:** Gas Sensor (MQ-2 / Smoke Sensor simulation)
- **Indicators:** LEDs (Green = Safe, Yellow = Moderate, Red = Hazardous)
- **Alert:** Piezo Buzzer
- **Display:** 16x2 I2C LCD Display (or Serial Monitor)
- **Others:** 220Ω Resistors, Breadboard, Jumper Wires

---

## 🚦 Alert Logic & Thresholds
| Pollution Level | Indicator | Buzzer Alert | Action / Advice |
|---|---|---|---|
| **Low / Clean** | 🟢 Green LED | OFF | Air quality is safe |
| **Moderate** | 🟡 Yellow LED | OFF | Smoke detected, stay cautious |
| **Hazardous** | 🔴 Red LED | ON (Beeping) | High smoke level! Stay indoors |

---

## 🔗 Live Tinkercad Simulation
You can test and run the live circuit simulation here:  
👉 https://www.tinkercad.com/things/bOwFWFjXmst-diwali-airguard/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard&sharecode=7PZY7rAA-phnLyYIYZm7gPdaHpONYDICGjy8He7DBPk

## 📷 Circuit Diagram & Simulation Preview
<img width="1915" height="901" alt="circuit png" src="https://github.com/user-attachments/assets/aebd70cb-d293-4b05-aad4-ac09a4f825d3" />

Simulation Note (Sensor Substitution):
"Due to the absence of a dedicated physical air quality/gas sensor module in Tinkercad, a potentiometer was utilized as a functional analog substitute. It simulates dynamic analog input values (0–1023) corresponding to varying particulate and smoke concentrations. In real-world hardware deployment, this will be replaced with an actual gas sensor, such as the MQ-135 (for air quality/hazardous gases) or MQ-2 (for smoke and flammable gases)."

