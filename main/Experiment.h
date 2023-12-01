#include "Mission.h"
#include "Vehicle.h"
#include "ObstacleMap.h"
#ifndef EXPERIMENT_H
#define EXPERIMENT_H

class Experiment {
    private:
        Mission mission;
        Vehicle vehicle[];
        Sensor environmentalSensors[];
        ObstacleMap map;
    public:
        void runExperiment();
        void exportData();

};

#endif