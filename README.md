
# 🌱 IoT Based Plant Watering System

**Project By:** Makeswaran K, KPR Institute of Engineering and Technology
**Guided By:** Dr. Prasad Joshee & Dr. Jaikumar

---

## 🎯 Objective

To develop a smart irrigation system that intelligently monitors and regulates soil moisture levels to optimize water usage, minimize water wastage, and ensure effective water management for agriculture and home gardening.

---

## 🔧 Methodology

### Step-by-step Process:

1. **Plant Identification:** Select plant type based on environmental and societal needs.
2. **Data Collection:** Use sensors to gather soil moisture, rainfall, and temperature data.
3. **Microcontroller Integration:** Transfer data to the **NodeMCU** (ESP8266) board.
4. **Programming:** Develop Arduino code to process sensor data and trigger irrigation events.
5. **IoT App Interface:** Connect the system with the **Blynk** mobile application for real-time updates.
6. **Automation:** Relay is used to turn irrigation pump ON/OFF based on the sensor values and user alerts.

---

## 🧪 Prototype Model

### 📦 Sensors Used:

* **Soil Moisture Sensor** – Measures soil wetness.
* **DHT11** – Monitors ambient temperature and humidity.
* **Rain Drop Sensor** – Detects rainfall.

### 🖥️ Data Display:

* Real-time sensor values printed to the **Serial Monitor**.

### 🔌 Relay Control:

* Future integration planned for **automatic water pump** control using a relay based on moisture threshold.

### ☁️ IoT Upgrade:

* Connection to cloud services via **Blynk app** will enable **remote control and monitoring** using a smartphone.

### 💧 Efficient Irrigation:

* Irrigation is triggered **only when necessary**, conserving water and supporting sustainable agriculture.

---

## ⚙️ Hardware Components

| Component                    | Purpose                                  |
| ---------------------------- | ---------------------------------------- |
| **NodeMCU / Arduino Uno**    | Main microcontroller for control & Wi-Fi |
| **DHT11 Sensor**             | Measures humidity and temperature        |
| **Soil Moisture Sensor**     | Detects soil water content               |
| **Rain Drop Sensor**         | Detects presence of rain                 |
| **Relay Module**             | Controls pump or irrigation valve        |
| **Blynk App**                | IoT interface for remote access          |
| **Jumper Wires, Breadboard** | Circuit assembly                         |

---


## 🚀 Future Scope

* Add **relay-based water pump control** for complete automation
* Integrate with **Blynk/ThingSpeak** for cloud-based alerts and control
* Add **solar panel** for power supply in remote areas
* Send notifications/alerts via **mobile or email**
* Implement **AI-based prediction** for watering schedules based on weather forecasts

---

## 📜 License

This project is open-source and can be reused, modified, and distributed for educational, research, or sustainability-related projects.

---

## 👨‍💻 Contributor

**Makeswaran K**
IoT Developer | Embedded Systems Enthusiast | Sustainable Tech Innovator

---

Let me know if you'd like a **PDF**, **`.md` file download**, **circuit diagram**, or help integrating with Blynk or IoT dashboards!
