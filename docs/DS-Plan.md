| Operation                        | Data Structure Used  | Why this DS is Suitable |
|----------------------------------|----------------------|--------------------------
| Add a new task                   | Queue (FIFO)         | Tasks are received in arrival order. 
| Store all tasks with priority    | Max-Heap             | Extracting highest priority is O(log n). Best for scheduling. 
| Search task by ID                | HashMap              | Instant O(1) lookup for task ID. 
| Delete a completed task          | Linked List          | Easy removal of nodes once done. 
| Display all tasks in order       | Array/List           | Simple traversal and display to user. 

