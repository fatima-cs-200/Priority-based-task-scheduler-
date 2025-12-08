# Priority-based-task-scheduler-
Implementation of a "Priority-driven Task Scheduling System" using suitable data Structures.

GROUP MEMBERS

Fatima Ameen (SP24-BCS-200)

Noor Fatima ((SP24-BCS-019)

Aman Fatima(SP24-BCS-018)

Kashaf Junaid(SP24-BCS-027)

LANGUAGE    (C++)



# Description

This project manages tasks based on their priority.  
The system ensures that the most important task is always executed first using a Priority Queue (Max-Heap).

# Features
- Add new tasks with priority
- Automatically order tasks by priority
- Search tasks by ID
- Delete completed tasks
- Display all tasks in order

# Data Structures Used
- Queue
- Priority Queue (Max-Heap)
- HashMap
- Linked List
- Array/List

## Major Functional Features
✅ 1. Add New Task

User enters:

Task ID

Task Name

Task Priority
Task is:

Added to the Queue

Inserted into the Max-Heap

Stored in the Hash Map

✅ 2. Execute Highest Priority Task

System:

Takes the highest-priority task from Max-Heap

Removes it from:

Queue

Hash Map

Displays which task is executed first

✅ 3. Search Task by ID

User enters a task ID

Hash Map gives O(1) instant search

Task details are displayed immediately

✅ 4. View All Pending Tasks

Shows all tasks currently waiting in the system

Helps user track workload

✅ 5. Safe Deletion & Underflow Protection

Prevents:

Removing from empty Queue

Executing when no task exists

Uses C++ exception handling

✅ 5. Exceptional Case Handling

Your project safely handles:

🚫 Adding duplicate Task IDs

🚫 Executing task when no task exists

🚫 Searching invalid Task ID

🚫 Removing from empty Queue

🚫 Negative priority values

This makes your project robust and test-ready.
