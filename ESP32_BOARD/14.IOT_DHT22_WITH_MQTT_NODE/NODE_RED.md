# ⚙️ Node-RED Installation & Setup Guide (Windows)

## 🖥️ Overview
This guide explains how to install and run **Node-RED** on a **Windows system (Windows 10 or higher)** using **PowerShell** or **Command Prompt (cmd)**.  
Node-RED is a flow-based development tool for visual programming used in **IoT**, **automation**, and **data integration**.

---

## 🚀 Quick Start Steps

### ✅ Step 1: Install Node.js

1. Download the **latest LTS version** of Node.js from the official website:  
   👉 [https://nodejs.org/en/download/](https://nodejs.org/en/download/)

2. Run the downloaded `.msi` installer.  
   - Accept all defaults during installation.

---

### 🧰 Step 2: Install Windows Build Tools (Recommended)

Some Node-RED nodes require compilation. Install Windows Build Tools globally:

```powershell
npm install --global --production windows-build-tools


## 🧬 Step 2: Add Python 2.7 to System PATH

To also add **Python 2.7** to your system PATH, run:

```bash
npm install --global --production --add-python-to-path windows-build-tools
```

💡 **Note:**
Some minor `node-gyp` warnings are normal.
Only **fatal errors (red text)** require troubleshooting.

---

## ⚙️ Step 3: Allow PowerShell Scripts to Run Temporarily

If PowerShell blocks npm scripts, use the following command:

```bash
Set-ExecutionPolicy -Scope Process -ExecutionPolicy Bypass
```

This allows scripts to run for the **current session only**.
Administrator privileges are required.

---

## 🔍 Step 4: Verify Installation

Once installation completes, close and reopen **PowerShell** or **Command Prompt (cmd)** to refresh environment variables.

### In PowerShell:

```bash
node --version; npm --version
```

### In Command Prompt (cmd):

```bash
node --version && npm --version
```

**Example Output:**

```
v18.15.0
9.5.0
```

If both versions appear, **Node.js** and **npm** are correctly installed.

---

## ✅ Step 5: Install Node-RED

Install **Node-RED** globally using npm:

```bash
npm install -g --unsafe-perm node-red
```

This will add the `node-red` command to your system PATH.

---

## ▶️ Step 6: Run Node-RED

Start Node-RED by typing:

```bash
node-red
```

Once started, Node-RED will:

* Create a folder:
  `%HOMEPATH%\.node-red`
* Launch the server and display logs in your terminal.

By default, it runs at:

👉 [http://127.0.0.1:1880](http://127.0.0.1:1880)

⚠️ **Keep the terminal open** to keep Node-RED running.
You can stop it anytime by pressing **Ctrl + C**.

---

## 🔁 Step 7: Repeat Steps (If Needed)

If you encounter installation issues or command errors:

1. Run **PowerShell as Administrator**.
2. Repeat **Steps 1–6** in the same order.
3. Finally, re-run Node-RED using:

   ```bash
   node-red
   ```

When successful, open your browser and visit:

👉 [http://localhost:1880](http://localhost:1880)

You will see the **Node-RED flow editor interface**.

---

## 🎉 Installation Complete!

✅ **Node-RED Installation Successful!**
You are now ready to start building **IoT**, **automation**, and **data visualization** flows using **Node-RED**.

