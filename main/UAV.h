#include<String>
#include "Vehicle.h"
#ifndef UAV_H
#define UAV_H

#include <string>

class UAV : public Vehicle {
    private:
        std::string ip;

    public:
        std::string getIP();
};

#endif
