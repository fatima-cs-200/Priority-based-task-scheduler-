#ifndef MAXHEAP_H
#define MAXHEAP_H

#include "Task.h"
#include <vector>
#include <stdexcept>

class MaxHeap {
private:
    vector<Task> heap;

    bool compare(Task &a, Task &b) {
        if (a.priority != b.priority) return a.priority > b.priority;
        return a.timestamp < b.timestamp; // earlier added = higher precedence
    }

    void heapifyUp(int index) {
        while (index > 0) {
            int parent = (index - 1) / 2;
            if (compare(heap[index], heap[parent])) {
                swap(heap[index], heap[parent]);
                index = parent;
            } else break;
        }
    }

    void heapifyDown(int index) {
        int size = heap.size();
        while (true) {
            int left = index * 2 + 1;
            int right = index * 2 + 2;
            int largest = index;

            if (left < size && compare(heap[left], heap[largest]))
                largest = left;

            if (right < size && compare(heap[right], heap[largest]))
                largest = right;

            if (largest != index) {
                swap(heap[index], heap[largest]);
                index = largest;
            } else break;
        }
    }

public:
    void push(Task t) {
        heap.push_back(t);
        heapifyUp(heap.size() - 1);
    }

    Task top() {
        if (heap.empty()) throw runtime_error("Heap is empty!");
        return heap[0];
    }

    void pop() {
        if (heap.empty()) throw runtime_error("Heap Underflow!");
        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);
    }

    bool isEmpty() {
        return heap.empty();
    }

    int size() {
        return heap.size();
    }
};

#endif
