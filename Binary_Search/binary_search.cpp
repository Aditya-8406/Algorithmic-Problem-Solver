/*
Problem:
Search for a target element in a sorted array.

How I thought about it:
Since the array is sorted, checking elements one by one is unnecessary.
Binary search lets me discard half of the array at every step.

Approach:
Compare the middle element with the target and move left or right accordingly.

Time Complexity: O(log n)
Space Complexity: O(1)
*/
