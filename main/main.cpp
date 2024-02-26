#include <iostream>
#include <cstdlib>
#include "temperaturecontrol.h"

int main() {
    TemperatureControl control(20, 25);
    srand(time(nullptr));

    for (int ii=1; ii<=100; ii++)
    {
	    // create a random temperature btwn 0 and 50 degrees celcius
	    float randomtemp = static_cast<float>(rand()) / static_cast<float>(RAND_MAX / 50.0f);
	    std::cout<<"random temp = "<<randomtemp<<std::endl;
	    
	    control.updateTemperature(randomtemp);
	    if (control.isHeating()) {
		    std::cout << "Heating...\n";
	    } else if (control.isCooling()) {
		    std::cout << "Cooling...\n";
	    } else {
		    std::cout << "Temperature is within range.\n";
	    }
    }

    return 0;
}
