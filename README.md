# 📐 Classical Mechanics — CS50 Style (Build to Learn)

> “I don’t read physics. I build it.”

This repository documents my **public, project-driven mastery of Classical Mechanics**
using **Kleppner & Kolenkow** as the theoretical backbone and **embedded systems**
(Arduino / ESP32 / sensors) as the proving ground.

The learning philosophy is inspired by **CS50**:
- Problems first
- Theory as a database
- Mastery proven by building, measuring, and explaining

---

## 🎯 Objective

To master **Chapters 1–10 of Classical Mechanics** by:
- Converting abstract equations into **real sensor data**
- Validating theory against **physical reality**
- Developing **engineering intuition**, not memorization
- Learning **publicly and reproducibly**

---

## 🧠 Learning Philosophy

Traditional physics study:
Theory → Examples → Problems


This project uses:
Problem → Failure → Theory → Build → Measure → Explain


Every chapter ends with a **working system or experiment**.
No project = no mastery.

---

## 🛠 Hardware Stack

- ESP32 / Arduino Mega 2560
- MPU6050 (Accelerometer + Gyroscope)
- DC Motor, Servo, Stepper
- Ultrasonic Sensor
- Breadboard + basic electronics
- Serial Plotter / Python / p5.js for visualization

---

## 📚 Textbook Reference

**Kleppner & Kolenkow — *An Introduction to Mechanics***

All theory is sourced **surgically** from this book as needed.

---

## 🧩 Project Roadmap (Chapters 1–10)

### ✅ Project 0.5 — Motion Reconstruction (Foundation)
**Question:**  
> Can motion be reconstructed using only sensor data?

**Core Physics**
- Vectors & kinematics
- Velocity from acceleration
- Circular vs linear motion

**Chapters Covered**
- Chapter 1 (Fully)

**Outcome**
- Acceleration → Velocity → Position pipeline
- Radial vs tangential acceleration understood physically

---

### ✅ Project 1 — Rotation, Centripetal & Coriolis Visualizer
**Question:**  
> Why do forces appear when we rotate?

**Core Physics**
- Newton’s laws in rotating frames
- Angular momentum
- Fictitious forces

**Chapters Covered**
- Chapter 2
- Chapter 7
- Chapter 9

**Outcome**
- Centripetal acceleration measured
- Inertial vs non-inertial frames understood experimentally

---

### ✅ Project 2 — Energy & Momentum Launcher (Digital Twin)
**Question:**  
> Can physics predict the future of motion?

**Core Physics**
- Momentum conservation
- Energy methods
- Central force intuition

**Chapters Covered**
- Chapter 4
- Chapter 5
- Chapter 10

**Outcome**
- Real trajectory vs predicted trajectory
- Energy loss and modeling errors analyzed

---

### ✅ Project 3 — Self-Balancing Platform (Final Boss)
**Question:**  
> Can instability be controlled using physics alone?

**Core Physics**
- Equations of motion
- Rigid body rotation
- Stability and feedback

**Chapters Covered**
- Chapter 3
- Chapter 8

**Outcome**
- Stability analyzed physically (not PID magic)
- Rotation treated as a vector system

---

### ✅ Project 4 — Smart Pendulum (Mini but Deep)
**Question:**  
> Can oscillatory motion be fully predicted and explained?

**Core Physics**
- Small oscillations
- Nonlinear dynamics
- Energy vs force methods

**Chapters Covered**
- Chapter 1
- Chapter 2
- Chapter 3
- Chapter 5
- Chapter 6
- Chapter 7

**Outcome**
- Equation of motion derived and tested
- Small-angle approximation understood deeply

---

## 📊 Mastery Criteria

A project is considered **complete** only if I can:

- Predict outcomes **before** running experiments
- Explain results using **multiple physics methods**
- Identify where theory **breaks down**
- Solve related textbook problems faster and cleaner

---

## 🎥 Public Learning

This repository is designed to support:
- DevLogs
- YouTube explanations
- Physics visualization demos
- Open discussion and critique

> Learning is not private. Understanding should be reproducible.

---

## 🚧 Project Status — Temporary Pause (Intentional)

This project is temporarily paused due to a scope mismatch identified during development.

The initial approach combined classical mechanics, signal interpretation, and embedded sensor systems at an early stage. While each area is tractable independently, their simultaneous treatment introduced unnecessary complexity that hindered clear engagement with the theoretical framework of Kleppner & Kolenkow.

Further progress will resume after strengthening the classical mechanics foundation using idealized models and controlled physical demonstrations. Sensor-based analysis will be revisited subsequently, with clearer separation between theory and instrumentation.

---

## 📌 Author

**Arindam Bhattacharjee**  
Embedded Systems | Physics  
Learning classical mechanics the way engineers actually use it.


