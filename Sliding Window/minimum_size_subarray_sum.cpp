/*
Problem:
Find the minimal length of a subarray with sum >= target.

How I thought about it:
Since all numbers are positive, increasing the window size increases the sum.

Approach:
Expand the window to reach the target sum, then shrink it to minimize length.

Time Complexity: O(n)
Space Complexity: O(1)
*/
