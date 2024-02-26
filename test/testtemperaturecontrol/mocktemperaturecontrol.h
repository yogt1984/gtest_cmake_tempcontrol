#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "temperaturecontrol.h"


class MockTemperatureControl : public TemperatureControl {
public:
    MockTemperatureControl(float minTemp, float maxTemp)
        : TemperatureControl(minTemp, maxTemp) {}

    // Mocked method to update temperature
    MOCK_METHOD(void, updateTemperature, (float currentTemp), (override));
};
