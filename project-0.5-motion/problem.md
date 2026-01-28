
# Project 0.5 — Motion Reconstruction
(Foundation Project)

## The Problem

“If an object moves in space, can I reconstruct its motion using only sensor data?”

Given only time-stamped measurements from an inertial sensor, determine whether it is possible to recover meaningful information about the object’s motion in space.

This project explores what **can** and **cannot** be known from acceleration and angular velocity alone.

---

## You’re Given

- MPU6050 (accelerometer + gyroscope)
- ESP32 or Arduino Mega
- Time-stamped acceleration data
- Time-stamped angular velocity data

No external tracking systems are allowed.

---

## You Must Figure Out

- How acceleration relates to velocity
- How velocity relates to position
- How vectors change with time
- How reference frames affect interpretation
- What information is fundamentally missing

---

## Constraints

- Do NOT use external motion capture, cameras, or position sensors
- Do NOT hard-code known motions
- Treat sensor data as the only source of truth
- Noise, bias, and drift must be acknowledged (not ignored)

---

## Walkthrough Hints (No Solutions)

- Start by plotting **raw sensor data** before doing any math
- Ask: *“What does acceleration actually measure?”*
- Ask: *“What must be true for velocity to remain zero?”*
- Decide:
  - which coordinate system you are working in
  - how time enters your calculations
- Observe what breaks when noise appears
- Notice which assumptions silently fail

---

## Checkpoints

You should be able to answer **yes or no** to the following:

- Can I tell when the sensor is not moving?
- Can I distinguish straight-line motion from circular motion?
- Can I explain why reconstructed position drifts over time?

If not, revisit your assumptions.

---

## Mastery Test

You have mastered this project if you can:

- Explain **radial vs tangential acceleration** without using a diagram
- Predict what acceleration and velocity graphs should look like **before** moving the sensor
- Explain why perfect reconstruction of position is fundamentally difficult

---

## Physics Coverage

- Kleppner & Kolenkow — Chapter 1 (Vectors and Kinematics)
