# Learning Accelerometer Physics with Arduino (MPU6050)

This repository documents what I learned while working with the MPU6050 accelerometer using the Arduino IDE and C.

The focus of this project is **learning**, not building a finished product.

---

## What I Learned

### Gravity is a Vector, Not Just 9.8 m/s²

Before this project, I thought of gravity simply as a constant value:

g = 9.8 m/s²


While working with the accelerometer, I learned that **gravity always acts as a vector**, distributed across three components:

- X component  
- Y component  
- Z component  

Depending on the orientation of the sensor, gravity is **split across these axes**, and the actual value of gravity is obtained by taking the **magnitude** of the vector:

Gravity magnitude is computed as the vector length:

|g| = sqrt(gx^2 + gy^2 + gz^2)

which is approximately 9.8 m/s².


So gravity is **never just “9.8” on one axis** — it always exists in all three components.

---

### Coding This Understanding in C (Arduino IDE)

I learned to write **low-level C code** in the Arduino IDE to:

- Read raw accelerometer registers
- Convert raw values into physical units (g)
- Treat acceleration as a **3D vector**
- Compute the **magnitude** of that vector

This helped connect **physics concepts directly to code**, instead of relying on libraries.

---

### Real Sensor Data Is Messy

Another important lesson was that **real-world sensor data is not clean**:

- Values fluctuate
- Noise is always present
- Small biases exist on every axis
- Results are never perfectly stable

At one point, I got stuck questioning whether my **X, Y, Z values were even correct**.

To verify my understanding, I computed the **magnitude of the acceleration vector**.  
Seeing the magnitude stay close to 1g helped confirm that:
- The math was correct
- The physics was correct
- The data was real (not broken)

---

### Hardware vs Software Confusion

I also learned how hard it can be to distinguish between:
- **Hardware problems**
- **Software bugs**
- **Timing / buffering issues**

When things didn’t behave as expected, I wasn’t sure whether:
- My code was wrong
- The sensor was faulty
- The board was causing issues

---

## Hardware Setup (Physical)

The following image shows the **actual physical hardware setup** used during this learning process, including the Arduino board and the MPU6050 sensor.

This setup helped distinguish between **software logic issues** and **real hardware-related behavior** such as timing, noise, and wiring sensitivity.

![MPU6050 Hardware Setup](/media/photos/Learning_Accelerometer_Physics_with_Arduino_(MPU6050).jpg)

---


### Using Simulation to Debug Thinking

I used **Wokwi simulation** to test the same logic in a controlled environment.

[[The Simulation](https://wokwi.com/projects/454457243086816257)]

In simulation:
- The code worked perfectly
- The physics behaved exactly as expected

This helped me realize that:
- My understanding was correct
- Some issues were **hardware-related**, not conceptual

---

### Arduino vs ESP32 (Timing & Buffering Insight)

While debugging, I also learned that:

- **Arduino boards are less forgiving** with respect to:
  - timing
  - buffering
  - serial communication
- Compared to ESP32, Arduino requires more careful handling of:
  - delays
  - data reads
  - serial output timing

This explained why some behaviors appeared inconsistent on real hardware.

---

## Current Status

This project is **not finished**.

Right now, it represents:
- A solid understanding of accelerometer physics
- Correct vector-based reasoning
- Practical experience debugging real sensor systems

Later sections will continue with:
- Calibration
- Orientation (roll & pitch)
- Gyroscope integration
- Sensor fusion

---

## Key Takeaway

> First, understand the physics.  
> Then, trust the math.  
> Only after that, debug the hardware.

This repository captures that learning process.
