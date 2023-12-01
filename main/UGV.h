#include<String>
#include "Vehicle.h"
#ifndef UGV_H
#define UGV_H


class UGV : private Vehicle {
    private:
        String rosTopic;

    public:
        String getRosTopic();
};

#endif