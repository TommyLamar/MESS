#ifndef VEHICLELLNODE_H
#define VEHICLELLNODE_H
#endif

#include "Vehicle.h"

class VehicleLLNode {
    private:
        Vehicle data;
        VehicleLLNode* next;
     
    public:
        VehicleLLNode(Vehicle);
        Vehicle getData();
        VehicleLLNode getNext();
        void append(Vehicle);
};