#ifndef QUEUE_H
#define QUEUE_H

#include "Task.h"
#include <queue>
#include <stdexcept>

using namespace std;

class TaskQueue {
private:
    queue<Task> q;

public:
    void enqueue(const Task& t) {
        q.push(t);
    }

    bool isEmpty() const {
        return q.empty();
    }

    Task getFront() const {
        if (q.empty())
            throw runtime_error("Queue Underflow! No tasks available.");
        return q.front();
    }

    void dequeue() {
        if (q.empty())
            throw runtime_error("Queue Underflow! Cannot dequeue.");
        q.pop();
    }

    int size() const {
        return q.size();
    }
};

#endif
