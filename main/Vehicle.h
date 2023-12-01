#include "Sensor.h"
#ifndef VEHICLE_H
#define VEHICLE_H


class Vehicle{
    private:
        String viconID;
        Sensor vehicleSensors[];
    public:
        String getViconID();
        Sensor* getVehicleSensors();

};

#endif