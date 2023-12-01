#include<String>
#include "Vehicle.h"
#ifndef UAV_H
#define UAV_H



class UAV : private Vehicle {
    private:
        String ip;

    public:
        String getIP();
};

#endif
