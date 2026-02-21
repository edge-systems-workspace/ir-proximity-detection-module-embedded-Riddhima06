#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Obstacle Detection System using IR Sensor
 * @author Riddhima Rajput
 * @date 2026-02-21
 *
 * @details
 * Reads digital input from IR sensor
 * and detects obstacle presence.
 */

int irPin = 2;

int irState;

void setup() {

    Serial.begin(9600);

    pinMode(irPin, INPUT);

    Serial.println("IR Obstacle Detection System Initialized");
}

void loop() {

    irState = digitalRead(irPin);

    if(irState == LOW){ // Active LOW sensor
        Serial.println("Obstacle Detected");
    } else {
        Serial.println("No Obstacle");
    }

    // TODO 8:
    // Add small delay (200–500ms)
}
