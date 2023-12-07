#include "VehicleLL.h"

class VehicleLL {
    private:
        VehicleLLNode* head;
        int length;
    public: 
        VehicleLL(){
            head = NULL;
            length = 0;
        }

        int getLength() {
            return length;
        }

        void append(Vehicle v) {
            length++;
            if (head == NULL){
                head = new VehicleLLNode(v);
            } else {
                head->append(v);
            }
        }
};