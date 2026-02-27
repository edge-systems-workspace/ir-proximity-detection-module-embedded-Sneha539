#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Obstacle Detection System using IR Sensor
 * @author Sneha Singh
 * @date 2026-02-27
 *
 * @details
 * Reads digital input from IR sensor
 * and detects obstacle presence.
 */

const int irPin = 2;
int irState = 0;

void setup() {

    Serial.begin(9600);
    pinMode(irPin, INPUT);
    Serial.println("IR Obstacle Detection System Initialized...");
}

void loop() {

    irState = digitalRead(irPin);

    if (irState == LOW) {
        Serial.println("Obstacle Detected");
    } else {
        Serial.println("No Obstacle");
    }
    delay(300);
}
