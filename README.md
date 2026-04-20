# 🔌 AC Lights Controlling Using IR Remote

## 📖 Introduction

In modern households and workplaces, automation plays a key role in improving convenience and efficiency. This project demonstrates a simple home automation system that controls three AC lights using an IR (Infrared) remote and an Arduino.

The system uses an IR receiver to capture signals from a remote, which are decoded by the Arduino to control lights through a relay module. This ensures safe interaction between low-voltage control circuits and high-voltage AC appliances.

---

## 🎯 Key Objectives

* To wirelessly control multiple AC lights using an IR remote
* To demonstrate relay-based isolation between low and high voltage circuits
* To build a scalable system for future automation extensions

---

## ✨ Project Features

* Wireless control using IR remote
* Energy-efficient operation
* Cost-effective components
* Safe design using relay isolation

---

## 📌 Applications

* Home automation systems
* Classrooms and office lighting control
* Accessibility support for physically challenged users

---

## 🧰 Apparatus Required

* Arduino Uno
* IR Receiver Module (TSOP1838)
* 4-Channel Relay Module
* AC Lights (Bulbs)
* IR Remote
* Power Supply (5V/9V for Arduino, 230V AC for lights)
* Connecting wires
* Breadboard

---

## 🧩 Block Diagram

IR Remote → IR Receiver → Arduino → Relay Module → AC Lights

---

## 🔌 Circuit Description

According to the *circuit diagram shown in the PDF (page 3)* :

* IR receiver OUT → Arduino pin D11
* Relay inputs connected to Arduino pins D8, D9, D10
* Relay COM → AC Live wire
* Relay NO → Lights
* Neutral connected directly to lights

---

## 🔍 IR Remote Decoding

IR decoding involves capturing signals from the remote using the TSOP1838 sensor.
The Arduino reads these signals using the IRremote library and prints corresponding HEX codes on the Serial Monitor.

As shown in *page 4 of the PDF*, each button press generates a unique HEX value that can be mapped to specific actions. 

---

## 🎮 Button HEX Codes

| Operation           | HEX Code  | Button |
| ------------------- | --------- | ------ |
| Toggle Light 1      | 0x1FE50AF | 1      |
| Toggle Light 2      | 0x1FED827 | 2      |
| Toggle Light 3      | 0x1FEF807 | 3      |
| Turn OFF All Lights | 0x1FEE01F | 0      |
| Turn ON All Lights  | 0x1FE48B7 | Power  |

---

## ⚙️ Methodology

### Step 1: Gather Components

### Step 2: Circuit Connections

* Connect IR receiver (VCC, GND, OUT → D11)
* Connect relay module (IN1–IN3 → D8–D10)
* Connect AC wiring carefully using COM and NO terminals

### Step 3: Upload Code

* Upload Arduino sketch using Arduino IDE

### Step 4: Test IR Remote

* Open Serial Monitor
* Capture HEX codes
* Map them in the code

### Step 5: Final Testing

* Verify all connections
* Power the system
* Control lights using remote

---

## 💻 Code Overview

The Arduino program:

* Reads IR signals
* Matches HEX values using `switch-case`
* Toggles relays (Active LOW)
* Provides ALL ON / ALL OFF control

---

## 📷 System Overview

![Image](https://images.openai.com/static-rsc-4/1sv1phtuvuObl-ZjT5ONyQaYMidmLKhZ2Z2h62hJkUuhEqEfjG8ndTI-GhxlS3k4IjHfFrqYYDGq4EIzAuXfqet0fo2e1RiPgoiQuTX7bwp4NItchbb54Z87X17tSC06FyXrXHQKVIuLFhca00XI1EHwV23Ib3-a3qoMRVQYeEhX9CAo3biQ95MmZ-PuJI9g?purpose=fullsize)

![Image](https://images.openai.com/static-rsc-4/4AYHfLwLi9mXQ-9V98E0vp6dU6p8ODr_0Cz8ihRGoYMj7Xe4IXhccGhU0ic2Rie1rYEqZCGt3SIlhMXpOqD4nms9pLeNrBew5XiJ9oaP_7V1uq-TUNJTs67IihG5jkQJCsaJ13a3aJ_jFJUhRPs__NrPXw3rdAUwLNpNNOJiVIlvp4vMRRZXCY9fCvPdmApF?purpose=fullsize)

![Image](https://images.openai.com/static-rsc-4/wLb5CTnnpN7Ng1SFJj71eIu5Co5rJZtvX2zil_NTWQsAUtBay0lgFenWFsNuapQrvFw7pTIPWBZ-HPmfybA1-rZ-Ds_KPkG7jFkBx5mQtv9BO1_wNGJ6tUgdEvDJ7X6r7HVSW1WkbD9E1j8YdUGLkYd111966ZBqzJJ6n65zsbDqKxZKEmnjWDn54CvpiBwn?purpose=fullsize)

![Image](https://images.openai.com/static-rsc-4/55_kJ1-fzCP_wP2IMOXb2EGQl4AtnhRKkzK1UPo_mSs3RSlpx-g0R5S_ueMAinq8fUu7kUH3D7w1EwgUObqwcILQAl4nhZwZLkixAc4_52gMLcaMW_H5xjSYDzYf2tlOFnUz3hDBSg2wGPWHSZNe-rU28c_c-bXnNNfdEivR60BdW81NvdjgHe7OTr5Ra9Dl?purpose=fullsize)

![Image](https://images.openai.com/static-rsc-4/dutYu-QDNV--ues5sTUe_C2l-X6Bjjbr-Y3Yaws1vATZCf3mrSmncBTkgVyJPaxHgOl6bJ7VGRi4xl6Yiw4kE1gBqd8BR658pw6BIM9J3ZdF3HG8TOAYgrmp8iYVpFItSbgDo-Z8xaqFh6qA6SQHrVJ_8LsWdnA9vRzJsFUtn1qkplDch27i1HKNICsEwP40?purpose=fullsize)

![Image](https://images.openai.com/static-rsc-4/wkZYHLAulYBxwS8bPzlJUKh1uc3ygl6Rz90tHlGf3NEnbFqnFoBtNcYPnUctQo3ldEVLi4Oxjmt1aUTOvzi1-qU6vdWPFBw_possIyqMqp30M-KBZsP6egNCqYo7039GqtmY4sDz2l3vlSU4kpm6XtFtmGQd6-bLs7O1ySukSh3V5RFLTZ359cIRacmKRCEU?purpose=fullsize)

---

## ⚠️ Safety Notes

* Handle AC connections carefully
* Use proper insulation
* Avoid direct contact with live wires
* Prefer relay modules with optocouplers

---

## 📊 Conclusion

This project provides a simple and cost-effective solution for home automation. It successfully demonstrates wireless control of AC lights using an IR remote and Arduino while maintaining electrical safety through relay isolation.

However, it has limitations such as:

* Short IR range (line-of-sight required)
* No automation or scheduling features
* Limited number of controllable devices

Future improvements can include Wi-Fi, Bluetooth, or voice-based control for advanced smart home functionality.

---

## 🚀 Future Enhancements

* Wi-Fi control (ESP8266 / ESP32)
* Mobile app integration
* Voice assistant support
* Sensor-based automation

---
