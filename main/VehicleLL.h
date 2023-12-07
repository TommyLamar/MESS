#ifndef VEHICLELL_H
#define VEHICLELL_H
#endif

#include "VehicleLLNode.h"

class VehicleLL{
    private:
        VehicleLLNode* head;
        int length;
    public:
        VehicleLL();
        void append(Vehicle);
        int getLength();

};