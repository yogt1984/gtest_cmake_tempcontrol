#include "temperaturecontrol.h"
#include "testtemperaturecontrol.h"

using ::testing::Return;


// Test case to verify initial state
TEST_F(TemperatureControlTest, InitialState) {
    EXPECT_FALSE(tc->isHeating());
    EXPECT_FALSE(tc->isCooling());
}

// Test case to verify heating when current temp is below min temp
TEST_F(TemperatureControlTest, HeatingBelowMinTemp) {
    tc->updateTemperature(15.0f);
    EXPECT_TRUE(tc->isHeating());
    EXPECT_FALSE(tc->isCooling());
}

// Test case to verify cooling when current temp is above max temp
TEST_F(TemperatureControlTest, CoolingAboveMaxTemp) {
    tc->updateTemperature(35.0f);
    EXPECT_FALSE(tc->isHeating());
    EXPECT_TRUE(tc->isCooling());
}

// Test case to verify no heating or cooling when current temp is within range
TEST_F(TemperatureControlTest, NoHeatingOrCoolingWithinRange) {
    tc->updateTemperature(25.0f);
    EXPECT_FALSE(tc->isHeating());
    EXPECT_FALSE(tc->isCooling());
}

// Test case to verify heating when current temp equals min temp
TEST_F(TemperatureControlTest, HeatingAtMinTemp) {
    tc->updateTemperature(19.999f);
    EXPECT_TRUE(tc->isHeating());
    EXPECT_FALSE(tc->isCooling());
}

// Test case to verify cooling when current temp equals max temp
TEST_F(TemperatureControlTest, CoolingAtMaxTemp) {
    tc->updateTemperature(30.001f);
    EXPECT_FALSE(tc->isHeating());
    EXPECT_TRUE(tc->isCooling());
}

// Test case to verify no heating or cooling when current temp is exactly between min and max
TEST_F(TemperatureControlTest, NoHeatingOrCoolingAtMidTemp) {
    tc->updateTemperature(25.0f);
    EXPECT_FALSE(tc->isHeating());
    EXPECT_FALSE(tc->isCooling());
}

// Test case to verify no heating or cooling when current temp is NaN
TEST_F(TemperatureControlTest, NoHeatingOrCoolingNaN) {
    tc->updateTemperature(NAN);
    EXPECT_FALSE(tc->isHeating());
    EXPECT_FALSE(tc->isCooling());
}

// Test case to verify no heating or cooling when current temp is infinity
TEST_F(TemperatureControlTest, NoHeatingOrCoolingInfinity) {
    tc->updateTemperature(INFINITY);
    EXPECT_FALSE(tc->isHeating());
    EXPECT_TRUE(tc->isCooling());
}
