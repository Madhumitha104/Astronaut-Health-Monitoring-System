# 🛸 Astronaut Health Monitoring System

> Real-time physiological monitoring system for astronauts using wearable sensors, ESP32 microcontroller, and wireless dashboard.

![Status](https://img.shields.io/badge/Status-In%20Progress-yellow)
![Platform](https://img.shields.io/badge/Platform-ESP32%20%7C%20Arduino-blue)
![License](https://img.shields.io/badge/License-MIT-green)

---

## 📌 Overview

Astronauts face extreme conditions — microgravity, radiation, and isolation — with limited access to medical facilities. This project provides **continuous automated health monitoring** to detect anomalies early and enable timely intervention.

---

## 🎯 Objectives

- Monitor **heart rate** and **body temperature** in real-time
- Transmit data wirelessly to a ground dashboard
- Trigger **alerts** when vitals go abnormal
- Lay groundwork for AI-based health prediction in future phases

---

## 🔧 Hardware Used

| Component | Purpose |
|-----------|---------|
| ESP32 | Main microcontroller (Wi-Fi enabled) |
| Heart Rate Sensor (MAX30102) | Pulse monitoring |
| Temperature Sensor (DS18B20) | Body temperature |
| OLED Display | Local vitals display |
| GSM Module | Wireless transmission |

---

## 💻 Software & Tools

- **Arduino IDE** – Firmware development
- **Python** – Data processing
- **Firebase / Blynk** – Cloud dashboard and alerts

---

## 🏗️ System Architecture

Sensors → ESP32 → Wi-Fi → Firebase → Dashboard → Alerts


---

## 📊 Work Done So Far

- [x] Literature review (Astroskin, NASA Bio-monitor, Edge AI)
- [x] Identified key health parameters
- [x] Selected sensors for prototype
- [x] Designed block diagram and system architecture
- [x] Basic data acquisition tested on microcontroller

## 🔜 Future Work

- [ ] Multi-sensor integration into single prototype
- [ ] Real-time wireless transmission to base station
- [ ] AI/ML model for health anomaly prediction
- [ ] Simulated microgravity environment testing

---

## 📁 Project Structure

## 📁 Project Structure
├── hardware/     → Circuit diagrams, component list
├── software/     → Arduino and Python code
├── docs/         → Presentation, literature review
└── images/       → Prototype photos, screenshots


---

## 👩‍💻 Author

**Madhumitha R**  
[VSB Engineering College,Karur]  
 [mitha8675091622@gmail.com]

---

## 📚 References

1. Toscano et al. (2020) – NASA Bio-Monitor Wearable Garment
2. Dcosta et al. (2023) – Flexible Biosensors for Space, Frontiers in Space Technologies
3. Mani et al. (2024) – Edge ML for Arrhythmia in Spaceflight, npj Microgravity
4. 
