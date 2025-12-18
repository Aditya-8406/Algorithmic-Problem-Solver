/*
Problem:
Find the peak index in a mountain array.

How I thought about it:
In a mountain array, values increase first and then decrease.
So the peak is exactly where this change happens.

Approach:
Use binary search by comparing mid with mid+1 to decide direction.

Time Complexity: O(log n)
Space Complexity: O(1)
*/
