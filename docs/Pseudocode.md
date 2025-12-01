--1
FUNCTION AddTask(name, priority):
    task.id = generateRandomID()
    task.name = name
    task.priority = priority
    Queue.enqueue(task)
    MaxHeap.insert(task)
    HashMap.put(task.id, task)
END FUNCTION

--2
FUNCTION GetNextTask():
    task = MaxHeap.extractMax()
    IF task NOT NULL:
        HashMap.remove(task.id)
    RETURN task
END FUNCTION

--3
FUNCTION SearchTask(id):
    RETURN HashMap.get(id)
END FUNCTION

--4
FUNCTION DeleteTask(id):
    task = HashMap.get(id)
    IF task NOT NULL:
        LinkedList.remove(task)
        MaxHeap.remove(task)
        Queue.remove(task)
        HashMap.remove(id)
END FUNCTION

--5
FUNCTION DisplayAllTasks():
    FOR each task IN List:
        PRINT task.id, task.name, task.priority
END FUNCTION
