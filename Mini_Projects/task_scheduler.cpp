/*
Problem:
Design a task scheduler where each task has a priority.
Higher priority tasks should be executed before lower priority ones.

How I thought about it:
In real systems, tasks are not executed in the order they arrive.
Important tasks should run first, which naturally suggests using a priority-based structure.

Approach:
I use a priority queue (max heap) where each task is stored with its priority.
The task with the highest priority is always processed first.

Why this works:
A priority queue automatically keeps the most important task at the top,
so insertion and removal remain efficient.

Time Complexity:
Insertion: O(log n)
Execution: O(log n)

Space Complexity: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

struct Task {
    int priority;
    string name;

    bool operator<(const Task& other) const {
        return priority < other.priority;
    }
};

int main() {
    priority_queue<Task> pq;

    pq.push({3, "Email Sync"});
    pq.push({5, "Database Backup"});
    pq.push({1, "Log Cleanup"});

    while (!pq.empty()) {
        cout << "Executing: " << pq.top().name << endl;
        pq.pop();
    }

    return 0;
}
