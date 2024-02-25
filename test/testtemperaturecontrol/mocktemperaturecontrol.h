#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "temperaturecontrol.h"

// Mock class for TemperatureControl
class MockTemperatureControl : public TemperatureControl {
public:
    // Use the constructor of the base class
    using TemperatureControl::TemperatureControl;

    MOCK_METHOD(void, updateTemperature, (float currentTemp));
};

