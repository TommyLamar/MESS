#include <String>
#ifndef SENSOR_H
#define SENSOR_H


class Sensor{
    private:
        String rosPackage;
        int refreshRate;
    public:
        String getReading();
};

#endif