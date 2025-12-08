#ifndef HASHMAP_H
#define HASHMAP_H

#include "Task.h"
#include <unordered_map>
#include <stdexcept>

class TaskMap {
private:
    unordered_map<int, Task> mp;

public:
    void insertTask(Task t) {
        mp[t.id] = t;
    }

    bool exists(int id) {
        return mp.find(id) != mp.end();
    }

    Task get(int id) {
        if (!exists(id)) throw runtime_error("Task ID not found!");
        return mp[id];
    }

    void remove(int id) {
        if (!exists(id)) throw runtime_error("Task not found! Cannot delete.");
        mp.erase(id);
    }
};

#endif
