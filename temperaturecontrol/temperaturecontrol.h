#ifndef TEMPERATURE_CONTROL_H
#define TEMPERATURE_CONTROL_H

class TemperatureControl {
public:
    TemperatureControl(float minTemp, float maxTemp);

    virtual void updateTemperature(float currentTemp);
    virtual bool isHeating() const;
    virtual bool isCooling() const;
    bool heating_;
    bool cooling_;

private:
    float minTemp_;
    float maxTemp_;

};

#endif 
