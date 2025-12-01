

**📌 Operation 1: Add New Task**

**What it does:**
Adds a new user task into the system with a priority.

**Data Structure:**
Queue

**Why?**
Because tasks should enter the system in the order they arrive.

**User Interaction:**
User enters task name + priority → system queues it.




# **📌 Operation 2: Get Highest-Priority Task**

**What it does:**
Finds the most important task.

**Data Structure:**
Max-Heap (Priority Queue)

**Why?**
Priority Queue gives the task with highest priority in O(1) time.

**User Interaction:**
User clicks “Run Task” → system pops highest priority.




 **📌 Operation 3: Search Task by ID**

**What it does:**
Finds a task quickly by its ID.

**Data Structure:**
HashMap

**Why?**
HashMap gives O(1) lookup — fastest search possible.

**User Interaction:**
User enters task ID → system instantly finds the task.

