#include "gtest/gtest.h"
#include "mocktemperaturecontrol.h"

// Test fixture for TemperatureControl
class TemperatureControlTest : public ::testing::Test {
protected:
    void SetUp(){
        // Set up TemperatureControl object with minTemp = 20 and maxTemp = 30
        tc   = new TemperatureControl(20.0f, 30.0f);
    }

    void TearDown(){
        delete tc;
    }

    TemperatureControl*       tc;
};