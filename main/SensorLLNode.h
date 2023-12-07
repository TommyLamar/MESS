#ifndef SENSORLLNODE_H
#define SENSORLLNODE_H
#endif

#include "Sensor.h"

class SensorLLNode {
    private:
        Sensor data;
        SensorLLNode* next;
     
    public:
        SensorLLNode(Sensor);
        Sensor getData();
        SensorLLNode getNext();
        void append(Sensor);
};