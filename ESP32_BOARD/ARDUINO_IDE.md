
## ⚙️ Arduino IDE Installation & ESP Setup

### 🪄 Step 1: Download and Install Arduino IDE
1. Go to: https://www.arduino.cc/en/software  
2. Download for your OS (Windows / macOS / Linux).  
3. Install using default settings.

---

### 🔌 Step 2: Install USB Driver (If Required)
If your board is not detected:  
Install the **CP210x USB to UART driver** from Silicon Labs:  
🔗 https://www.silabs.com/software-and-tools/usb-to-uart-bridge-vcp-drivers?tab=downloads

---

### 🔍 Step 3: Add ESP Board Manager URL
1. Open Arduino IDE → **File → Preferences**
2. Paste the following URLs in *Additional Boards Manager URLs* field:

```
https://dl.espressif.com/dl/package_esp32_index.json
https://arduino.esp8266.com/stable/package_esp8266com_index.json
```
3. Click **OK**.
> 💡 *If you have a different board, look for the appropriate `.json` file corresponding to your board name.*

---
---

### ⚡ Step 4: Install the Board Package
1. Go to **Tools → Board → Boards Manager**
2. Type **ESP32** or **ESP8266**
3. Install:
   - *ESP32 by Espressif Systems*
   - *ESP8266 by ESP8266 Community*

---

### 🧩 Step 5: Select Board and Port
1. **Tools → Board → ESP32 Arduino → ESP32 Dev Module**
   *(or NodeMCU 1.0 for ESP8266)*  
2. **Tools → Port** → Select the correct COM port.

---

### 📦 Step 6: Install Required Libraries
1. **Sketch → Include Library → Manage Libraries…**
2. Search and install:
   - WiFi.h
   - ThingSpeak
   - DHT sensor library
   - Adafruit Unified Sensor
3. Restart Arduino IDE.

---

### ✅ Step 7: Verify Setup
1. **File → Examples → WiFi → WiFiScan**
2. Upload to ESP32.
3. Open **Serial Monitor** → You should see Wi-Fi networks listed.

---

### 🧠 Notes
- Always check the **COM port** before uploading.
- Hold the **BOOT** button if upload errors occur.
- Use **Wokwi (https://wokwi.com/)** to test code online.

---

🎯 **Result:**  
You are now ready to **program and upload IoT projects** on your ESP8266 / ESP32 boards using Arduino IDE!
