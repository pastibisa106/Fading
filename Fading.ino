/*
FADING

Author: RAFIQUL HAKIM
Date/Time : Minggu/16 Desember 2018
*/

int ledPin = 9;

void setup() {
}

void loop() {
  for (int fadeValue = 0; fadeValue <= 255; fadeValue += 5) {
    analogWrite(ledPin, fadeValue);
    delay(30);
  }

  for (int fadeValue = 255; fadeValue >= 0; fadeValue -= 5) {
    analogWrite(ledPin, fadeValue);
    delay(30);
  }
}
