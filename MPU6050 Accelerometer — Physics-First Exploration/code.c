#define ACCELE_RANGE 4
#include <Wire.h>

const int Mpu_addr = 0x68;

void setup() {
  
  Wire.begin();
  
  // Waking up the MPU6050
  Wire.beginTransmission(Mpu_addr);
  Wire.write(0x6B);
  Wire.write(0);
  Wire.endTransmission(true);

  Serial.begin(9600);
}

void loop() {
  
  Wire.beginTransmission(Mpu_addr);
  Wire.write(0x3B);
  Wire.endTransmission(false);
  Wire.requestFrom(Mpu_addr, 6, true);
  
  Serial.print("\n");Serial.print("\n");Serial.print("\n");
  int16_t ac_x = (Wire.read() << 8 | Wire.read());
  int16_t ac_y = (Wire.read() << 8 | Wire.read());
  int16_t ac_z = (Wire.read() << 8 | Wire.read());

  double Ax = ((double) ac_x / 16384);
  Serial.print("Ac_x "); Serial.print(Ax); Serial.print("g| ");
  double Ay = ((double) ac_y / 16384);
  Serial.print("Ac_y "); Serial.print(Ay); Serial.print("g| ");
  double Az = ((double) ac_z / 16384);
  Serial.print("Ac_z "); Serial.print(Az); Serial.print("g| "); Serial.print("\n");
  float mag = sqrt(Ax*Ax + Ay*Ay + Az*Az);
  Serial.print(" | mag = ");
  Serial.println(mag);
  delay(500);
}
