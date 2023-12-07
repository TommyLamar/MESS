#ifndef MISSION_H
#define MISSION_H

#include "VehicleMission.h"

class Mission{
    private:
        VehicleMission* vehicleMissions;
    public:
        void addVehicleMission(VehicleMission vm);
        bool checkDuplicate(VehicleMission vm);
        void createActionList();

};

#endif
