#include "VehicleLLNode.h"

class VehicleLLNode {
    private:
        Vehicle data;
        VehicleLLNode* next;
    public:
        VehicleLLNode(Vehicle v) {
            data = v;
            next = NULL;
        }
        Vehicle getData() {
            return data;
        }
        VehicleLLNode* getNext() {
            return next;
        }
        void append(Vehicle v) {
            if (next == NULL) {
                next = new VehicleLLNode(v);
            } else {
                next->append(v);
            }
        }

};