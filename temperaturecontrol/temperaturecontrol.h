#ifndef TEMPERATURE_CONTROL_H
#define TEMPERATURE_CONTROL_H

class TemperatureControl {
public:
    TemperatureControl(float minTemp, float maxTemp);

    void updateTemperature(float currentTemp);
    bool isHeating() const;
    bool isCooling() const;

private:
    float minTemp_;
    float maxTemp_;
    bool heating_;
    bool cooling_;
};

#endif 
