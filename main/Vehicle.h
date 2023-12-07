#ifndef VEHICLE_H
#define VEHICLE_H

#include "Sensor.h"
#include "SensorLL.h"
#include <string>

class Vehicle{
    private:
        std::string viconID;
        SensorLL vehicleSensors;
    public:
        Vehicle(std::string);
        std::string getViconID();
        SensorLL getVehicleSensors();

};

#endif