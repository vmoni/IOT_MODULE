# 🌡️ ESP32 + DHT22 IoT Temperature & Humidity Monitoring using ThingSpeak

This project connects an **ESP32** and **DHT22 sensor** to the **ThingSpeak Cloud** for real-time monitoring of temperature and humidity.  
Data is sent every 15 seconds to your ThingSpeak channel and visualized as live plots.

---

## 📘 Prerequisites

Before you begin, make sure you have:

- A **ThingSpeak account** → [https://thingspeak.com](https://thingspeak.com)
- **ESP32** development board  
- **DHT22** temperature and humidity sensor  
- **Arduino IDE** (with the following libraries installed):
  - `WiFi.h`
  - `ThingSpeak.h`
  - `DHTesp.h`

---

## ⚙️ Step 1: Create a ThingSpeak Channel

1. Log in to your ThingSpeak account → [https://thingspeak.com/login](https://thingspeak.com/login)
2. Navigate to **Channels → My Channels → New Channel**
3. Fill in the details:
   - **Name:** IOT_TEMPERATURE_MONITORING  
   - **Field 1:** Temperature  
   - **Field 2:** Humidity  
4. Click **Save Channel**

📸 Example (My Channels page):
![ThingSpeak My Channels](71f60bf1-c41e-4f4f-a084-0de4070cc84d.png)

---

## 🔎 Step 2: Find Your Channel Number

1. After saving, open your channel (e.g., `IOT_DATA`).
2. Under the **Channel Settings** tab, note your **Channel ID** (e.g., `3115706`).

📸 Example (Channel Settings page):
![ThingSpeak Channel Settings](c0029b42-0c47-4ca7-91d0-fdf248bb561d.png)

---

## 🔑 Step 3: Get Your Write API Key

1. Click on the **API Keys** tab in your channel.  
2. Copy the **Write API Key** — this allows your ESP32 to send data to ThingSpeak.

Example use in code:
```cpp
const char* myapikey = "YOUR_WRITE_API_KEY";
