#include <AFMotor.h>
AF_DCMotor motor1(1); // motor 1 için bir motor nesnesi oluştur
AF_DCMotor motor2(2); // motor 2 için bir motor nesnesi oluştur

void setup() {
  motor1.setSpeed(255); // motor 1 hızını ayarla (0-255)
  motor2.setSpeed(255); // motor 2 hızını ayarla (0-255)
}

void loop() {
  motor1.run(FORWARD); // motor 1'i ileri çalıştır
  delay(10000); // 10 saniye bekle
  motor1.run(RELEASE); // motor 1'i durdur
  
  motor2.run(FORWARD); // motor 2'yi ileri çalıştır
  delay(10000); // 10 saniye bekle
  motor2.run(RELEASE); // motor 2'yi durdur
}
