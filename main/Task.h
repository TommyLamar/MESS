#ifndef TASK_H
#define TASK_H
#include <string>

class Task{
    private:
        float timeStamp;
        std::string message;
        std::string rosTopicPath;
        std::string taskType;
    public:
        float getTimeStamp();
        std::string getMessage();
        std::string getTopic();
        std::string getType;
        void performTask();
};

#endif