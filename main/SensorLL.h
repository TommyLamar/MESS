#ifndef SENSORLL_H
#define SENSORLL_H
#endif

#include "SensorLLNode.h"

class SensorLL{
    private:
        SensorLLNode* head;
        int length;
    public:
        SensorLL();
        void append(Sensor);
        int getLength();

};