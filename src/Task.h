#include <string>
using namespace std;

class Task {
public:
    int id;
    string name;
    int priority;
    long long timestamp;

    Task() {}

    Task(int id, string name, int priority, long long timestamp) {
        this->id = id;
        this->name = name;
        this->priority = priority;
        this->timestamp = timestamp;
    }
};

#endif
