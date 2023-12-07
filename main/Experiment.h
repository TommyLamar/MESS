#ifndef EXPERIMENT_H
#define EXPERIMENT_H
#include "Mission.h"
#include "Vehicle.h"
#include "ObstacleMap.h"

class Experiment {
    private:
        Mission mission;
        Vehicle* vehicle;
        Sensor* environmentalSensors;
        ObstacleMap map;
    public:
        Experiment(Mission, Vehicle*, Sensor*, ObstacleMap);
        void runExperiment();
        void exportData();

};

#endif