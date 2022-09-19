#include <Arduino.h>

#define IN_PIN 6
#define OUT_PIN 8
#define TEST_PIN 7
#define DELAY_MS 50L  

bool on = false;

void setup() {
  pinMode(OUT_PIN, OUTPUT);
  pinMode(TEST_PIN, OUTPUT);
  pinMode(IN_PIN, INPUT);
  digitalWrite(TEST_PIN,HIGH);
}


void loop() {
  if (digitalRead(IN_PIN) == HIGH) {
    if (!on)
    {
      digitalWrite(OUT_PIN,HIGH);
      on = true;
    }
    delay(DELAY_MS);
  }
  else if (on)
  {
    digitalWrite(OUT_PIN,LOW);
    on = false;
  }
}