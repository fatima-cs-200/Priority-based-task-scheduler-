#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <limits>
#include <chrono>
#include <string>

using namespace std;

// Generates a high-resolution timestamp
long long getTimestamp() {
    return chrono::system_clock::now().time_since_epoch().count();
}

// Handles integer input safely
int inputInt(string msg) {
    int x;
    while (true) {
        cout << msg;
        if (cin >> x) return x;

        cout << "Invalid input. Enter a number.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

#endif
