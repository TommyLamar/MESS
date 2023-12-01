#include "Vehicle.h"
#include "Task.h"
#ifndef VEHICLEMISSION_H
#define VEHICLEMISSION_H


class VehicleMission{
    private:
        Vehicle vehicle;
        Task tasks[];
    public:
        void addTask (Task t);
        Vehicle getVehicle();
        Task* getTasks();
        
};

#endif