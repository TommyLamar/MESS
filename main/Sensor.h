#ifndef SENSOR_H
#define SENSOR_H
#include <string>

class Sensor{
    private:
        std::string rosPackage;
        int refreshRate;
    public:
        std::string getReading();
};

#endif