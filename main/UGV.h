#ifndef UGV_H
#define UGV_H

#include<string>
#include "Vehicle.h"


class UGV : public Vehicle {
    private:
        std::string rosTopic;

    public:
        std::string getRosTopic();
};

#endif