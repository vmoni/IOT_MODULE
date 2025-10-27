# 🧩 Node-RED Flow Configuration and Dashboard Setup

## 🌐 Step 2 — Install Dashboard Nodes

In the **Node-RED editor**:

1. Go to the **Menu (☰)** → **Manage palette** → **Install**
2. Search for `node-red-dashboard`
3. Click **Install**

This adds dashboard nodes like:

- `ui_chart`
- `ui_gauge`
- `ui_text`
- `ui_tab`
- `ui_group`

---

## 🌐 Step 3 — Configure MQTT Input Nodes

1. Drag an **`mqtt in`** node onto the workspace.
2. Double-click it to configure:

   | Parameter | Value |
   |------------|--------|
   | **Server** | `broker.hivemq.com` |
   | **Port** | `1883` |
   | **Topic** | `IOT/Temperature` and `IOT/Humidity` |

3. Click **Done** after configuration.

---

## 🧠 Step 4 — Add Function Nodes

The **Function** node converts string MQTT data to numerical format for charts/gauges.

### 🔹 Temperature Function Node
```js
msg.topic = "Temperature";
msg.payload = parseFloat(msg.payload);
return msg;
```

### 🔹 Humidity Function Node
```js
msg.topic = "Humidity";
msg.payload = parseFloat(msg.payload);
return msg;
```

---

## 📊 Step 5 — Add Dashboard Nodes

Use these nodes from the **dashboard section**:

- `ui_chart` → for **Temperature**
- `ui_gauge` → for **Humidity**

### 🧭 Example Wiring:
```
[mqtt in: IOT/Temperature] → [Function: Temperature] → [ui_chart: Temperature Chart]
[mqtt in: IOT/Humidity] → [Function: Humidity] → [ui_gauge: Humidity Gauge]
```

---

## 🚀 Step 6 — Deploy and View Dashboard

1. Click the **Deploy** button (top right corner).
2. Open the dashboard in your browser:

   🔗 **http://localhost:1880/ui**

### 🖥️ You will see:
- 🌡️ **Temperature Chart** — showing real-time sensor values  
- 🌫️ **Humidity Gauge** — updating dynamically  

---

## 🧩 Optional — Add UI Customization

You can organize your dashboard by creating tabs and groups.

- **Add Tab:** `IoT Monitoring Dashboard`
- **Add Groups:**
  - `Temperature Sensor Data`
  - `Humidity Sensor Data`

Each UI component can be assigned to a group for better layout and visualization.

---

## 🧠 Step 7 — Export/Import Flow

Easily share your Node-RED configuration across systems.

### 🔹 Export:
1. Select all nodes (`Ctrl + A`)
2. Go to **Menu → Export → Clipboard**
3. Copy the JSON data

### 🔹 Import:
1. Go to **Menu → Import → Clipboard**
2. Paste the JSON data
3. Click **Import**

✅ This will replicate your Node-RED flow setup on another system.
