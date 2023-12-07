#include "Vehicle.h"

class Vehicle {
    private:
        std::string viconID;
        SensorLL vehicleSensors;
    public:
        Vehicle(std::string vid){
            viconID = vid;
            vehicleSensors = SensorLL();
        }
        std::string getViconID(){
            return viconID;
        }
        SensorLL getVehicleSensors(){
            return vehicleSensors;
        }


};