#include <String>
#ifndef TASK_H
#define TASK_H


class Task{
    private:
        float timeStamp;
        String message;
        String rosTopicPath;
        String taskType;
    public:
        float getTimeStamp();
        String getMessage();
        String getTopic();
        String getType;
        void performTask();
};

#endif