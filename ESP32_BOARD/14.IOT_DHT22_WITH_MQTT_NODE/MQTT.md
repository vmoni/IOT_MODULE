# 🌐 MQTT Configuration for ESP32 + Node-RED Dashboard

## 📘 Objective
To connect an **ESP32-based DHT22 sensor system** with **Node-RED Dashboard** using the **public MQTT broker** (`broker.hivemq.com`).

---

## ⚙️ Step 1 — MQTT Broker Setup

We will use the **public HiveMQ broker** for this project.

- **Broker Address:** `broker.hivemq.com`  
- **Port:** `1883`  
- **Topic:** `IOT/Temperature` and `IOT/Humidity`

💡 *MQTT (Message Queuing Telemetry Transport)* is a lightweight protocol designed for IoT communication.

---

## 🔌 Step 2 — ESP32 MQTT Code

The ESP32 will:
- Read temperature and humidity data from the **DHT22 sensor**
- Publish the values to the **HiveMQ broker**

### 🧠 Required Libraries
Install these in **Arduino IDE**:
- `WiFi.h`
- `PubSubClient.h`
- `DHT.h`
