# 🌐 IoT Project: ESP32 + DHT22 + Node-RED Dashboard (MQTT Cloud Integration)

---

## 📡 3️⃣ MQTT Cloud Connection Settings

| Parameter | Value |
|------------|--------|
| **Host** | `broker.hivemq.com` |
| **TCP Port** | `1883` |
| **WebSocket Port** | `8000` |
| **TLS TCP Port** | `8883` |
| **TLS WebSocket Port** | `8884` |

> ⚠️ **Note:**  
> These are public MQTT ports. Avoid publishing sensitive data since this is a shared broker.

---

## 🧠 4️⃣ Configure Node-RED for MQTT

### Step 1 — Configure MQTT In Nodes
1. Open **Node-RED** and drag **two “mqtt in” nodes** into your flow.  
2. Double-click each node and configure:
   - **Server** → click ✏️ →  
     - Server: `broker.hivemq.com`  
     - Port: `1883`  
   - **Topics:**
     - Humidity → `IOT/Humidity`
     - Temperature → `IOT/Temperature`
3. Click **Add → Done**.  
4. A **green dot** on the MQTT nodes indicates successful connection.

✅ Node-RED is now subscribed to your MQTT topics.

---

### Step 2 — Add Debug Nodes
1. Drag two **debug** nodes from the sidebar.  
2. Connect:  
   `[mqtt in: IOT/Humidity] → [debug]`  
   `[mqtt in: IOT/Temperature] → [debug]`
3. Click **Deploy**.  
4. Open the **Debug sidebar** to view incoming MQTT messages.

✅ Confirms that your IoT data is successfully received by Node-RED.

---

### Step 3 — Install Node-RED Dashboard
1. Open **Menu → Manage palette → Install**.  
2. Search for `node-red-dashboard`.  
3. Click **Install** and restart Node-RED if required.

✅ Dashboard nodes (Gauge, Chart, etc.) will now appear in the sidebar.

---

### Step 4 — Create Dashboard Tab & Group
1. Drag a **ui_gauge** node into the flow.  
2. Double-click it → under **Group**, click ✏️ →  
   - **Create a new Tab:**  
     - Tab name: `IoT Dashboard`  
   - **Create a new Group:**  
     - Group name: `Humidity and Temperature`  
3. Click **Add → Done**.

✅ All UI nodes will now belong to this Tab and Group.

---

### Step 5 — Add Dashboard Nodes

#### 🧭 Humidity Gauge
| Setting | Value |
|----------|--------|
| Label | Humidity |
| Units | % |
| Range | 0 → 100 |
| Group | IoT Dashboard / Humidity and Temperature |

**Wiring:**  
`[mqtt in: IOT/Humidity] → [ui_gauge]`

---

#### 🌡️ Temperature Chart
| Setting | Value |
|----------|--------|
| Label | Temperature |
| Chart Type | Line chart |
| X-axis | Last 1 hour / 1000 points |
| Y-axis | 0 → 50 |
| Group | IoT Dashboard / Humidity and Temperature |

If the temperature data appears as text, insert a **Function node** before the chart with the following logic:

```js
msg.payload = parseFloat(msg.payload);
return msg;

---

## 🚀 Step 6 — Deploy and View Dashboard

### 🖥️ Deploy
Click **Deploy** in **Node-RED** to apply your changes.

---

### 🌐 Open Dashboard
Open your browser and navigate to:  
🔗 **http://localhost:1880/ui**

You will see:

- 🌫️ A **Humidity Gauge** showing real-time humidity levels.  
- 🌡️ A **Temperature Chart** dynamically plotting temperature data.

✅ The **MQTT–Node-RED–Dashboard** integration is now complete.

---

### ⚠️ Important Notes
- Ensure that your **ESP32** device publishes data to the same MQTT topics:  
  - `IOT/Humidity`  
  - `IOT/Temperature`  
- If connection fails, verify:
  - **Broker address:** `broker.hivemq.com`  
  - **Port:** `1883`  
  - **Active internet connection**
- The **HiveMQ public broker** is a shared service; data may be visible to others.

---

## 🧩 Summary

| Component | Function |
|------------|-----------|
| **ESP32 + DHT22** | Sends sensor data to MQTT Broker |
| **MQTT Broker (HiveMQ)** | Cloud-based data channel |
| **Node-RED** | Receives MQTT messages |
| **Dashboard** | Displays real-time humidity and temperature |

---

## 📊 Final Output

A **live IoT Dashboard** displaying:

- 🌫️ Real-time **Humidity Gauge**  
- 🌡️ Real-time **Temperature Line Chart**

✅ Connected through **MQTT Cloud (`broker.hivemq.com`)**
