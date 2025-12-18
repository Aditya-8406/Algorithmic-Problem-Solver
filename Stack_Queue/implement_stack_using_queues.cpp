/*
Problem:
Implement a stack using queues.

How I thought about it:
A stack is LIFO while a queue is FIFO, so I need to reorder elements after each push.

Approach:
Push the new element and rotate the queue so it comes to the front.

Time Complexity: Push: O(n), Pop: O(1)
Space Complexity: O(n)
*/
