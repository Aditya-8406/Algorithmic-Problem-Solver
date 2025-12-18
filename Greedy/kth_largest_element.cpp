/*
Problem:
Find the k-th largest element in an array.

How I thought about it:
Sorting works, but greedily keeping only the top k elements is more efficient.

Approach:
Use a min heap of size k to keep track of largest elements.

Time Complexity: O(n log k)
Space Complexity: O(k)
*/
