#include "temperaturecontrol.h"

TemperatureControl::TemperatureControl(float minTemp, float maxTemp)
    : minTemp_(minTemp), maxTemp_(maxTemp), heating_(false), cooling_(false) {}

void TemperatureControl::updateTemperature(float currentTemp) {
    if (currentTemp < minTemp_) {
        heating_ = true;
        cooling_ = false;
    } else if (currentTemp > maxTemp_) {
        heating_ = false;
        cooling_ = true;
    } else {
        heating_ = false;
        cooling_ = false;
    }
}

bool TemperatureControl::isHeating() const {
    return heating_;
}

bool TemperatureControl::isCooling() const {
    return cooling_;
}

