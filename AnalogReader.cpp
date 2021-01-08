// 
// 
// 

#include "AnalogReader.h"
#include "Arduino.h"

float AnalogReader::get() {
    return analogRead(this->inputPin);
}

float AnalogReader::getSensorValue() {
    return this->get();
}

AnalogReader::AnalogReader(int inputPin) {
    this->inputPin = inputPin;
}
/*
AnalogReader* AnalogReader::readSensorValue() {
    float weightOfCurrentValue = 0.5;

    int currentSensorValue = analogRead(this->inputPin);
    this->averageSensorValue = (this->averageSensorValue * weightOfCurrentValue) + currentSensorValue * (1 - weightOfCurrentValue);
    return this;
}
*/
