#ifndef MISSION_H
#define MISSION_H

class Mission{
    private:
        vehicleMission vehicleMissions[];
    public:
        void addVehicleMission(VehicleMission vm);
        bool checkDuplicate(VehicleMission vm);
        void createActionList();

};

#endif
