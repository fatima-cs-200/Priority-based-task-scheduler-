#include <iostream>
#include <limits>
#include <chrono>

#include "Queue.h"
#include "MaxHeap.h"
#include "HashMap.h"

using namespace std;

TaskQueue taskQueue;
MaxHeap taskHeap;
TaskMap taskMap;

long long getTimestamp() {
    return chrono::system_clock::now().time_since_epoch().count();
}

int inputInt(string msg) {
    int x;
    while (true) {
        cout << msg;
        if (cin >> x) break;

        cout << "Invalid input. Enter a number.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return x;
}

void addTask() {
    int id = inputInt("Enter Task ID: ");
    if (taskMap.exists(id)) {
        cout << "Task ID already exists!\n";
        return;
    }

    cin.ignore();
    cout << "Enter Task Name: ";
    string name;
    getline(cin, name);

    int priority;
    while (true) {
        priority = inputInt("Enter Priority (1–10): ");
        if (priority >= 1 && priority <= 10) break;
        cout << "Priority must be between 1–10.\n";
    }

    Task t(id, name, priority, getTimestamp());

    taskQueue.enqueue(t);
    taskHeap.push(t);
    taskMap.insertTask(t);

    cout << "Task added successfully!\n";
}

void runHighestPriority() {
    if (taskHeap.isEmpty()) {
        cout << "No tasks available.\n";
        return;
    }

    Task t = taskHeap.top();
    cout << "Running Task: " << t.id << " | " << t.name << " | Priority: " << t.priority << "\n";

    taskHeap.pop();
    taskMap.remove(t.id);
}

void searchTask() {
    int id = inputInt("Enter Task ID: ");
    try {
        Task t = taskMap.get(id);
        cout << "Found: " << t.id << " | " << t.name << " | Priority: " << t.priority << "\n";
    } catch (exception &e) {
        cout << e.what() << "\n";
    }
}

int main() {
    int choice;

    while (true) {
        cout << "\n=== PRIORITY BASED TASK SCHEDULER ===\n";
        cout << "1. Add Task\n";
        cout << "2. Run Highest Priority Task\n";
        cout << "3. Search Task\n";
        cout << "4. Exit\n";

        choice = inputInt("Choose: ");

        switch (choice) {
            case 1: addTask(); break;
            case 2: runHighestPriority(); break;
            case 3: searchTask(); break;
            case 4: cout << "Exiting...\n"; return 0;
            default: cout << "Invalid option.\n";
        }
    }
}
