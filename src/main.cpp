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

    // TODO 3:
    // Initialize Serial communication (9600 baud rate)

    // TODO 4:
    // Configure IR pin as INPUT

    // TODO 5:
    // Print system initialization message
}

void loop() {

    // TODO 6:
    // Read digital value from IR sensor

    // TODO 7:
    // If obstacle detected
    //     Print "Obstacle Detected"
    // Else
    //     Print "No Obstacle"

    // TODO 8:
    // Add small delay (200–500ms)
}
