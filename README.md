# 🔐 Ultrasonic Security System using Arduino UNO

This project is a simulation of a simple, real-time **ultrasonic security system** built with an **Arduino UNO**, **HC-SR04 sensor**, and **16x2 LCD**, designed and tested using **Proteus 8 Professional**. It measures the distance of an object using ultrasonic waves and can be extended for use in intrusion detection, obstacle sensing, or home automation systems.

---

## 🛠️ Technologies & Components Used

- **Microcontroller**: Arduino UNO (ATmega328P)  
- **Sensor**: HC-SR04 Ultrasonic Distance Sensor  
- **Display**: 16x2 LCD (HD44780 Controller)  
- **Simulation**: Proteus 8 Professional  
- **Code Editor**: Arduino IDE (C/C++)

---

## 🔧 How It Works

1. The **HC-SR04** sensor emits ultrasonic waves.
2. The time taken for the echo to return is measured using `pulseIn()`.
3. Distance is calculated using the formula:

   \[
   \text{Distance (cm)} = \frac{\text{duration} \times 0.034}{2}
   \]

4. The result is displayed on a **16x2 LCD** in real time.


---

## 📁 File Structure

```bash
ultrasonic-security-system/
├── ultrasonic_security.ino          # Arduino sketch
├── ultrasonic_security.dsn          # Proteus simulation file
├── images/
│   └── circuit.png                  # Circuit diagram or simulation screenshot
├── docs/
│   └── system_overview.pdf         #  Project documentation
└── README.md
