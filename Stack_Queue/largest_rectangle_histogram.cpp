/*
Problem:
Find the largest rectangle in a histogram.

How I thought about it:
Each bar can act as the smallest bar in a rectangle.
A monotonic stack helps track valid ranges.

Approach:
Use a stack to maintain increasing heights and calculate areas.

Time Complexity: O(n)
Space Complexity: O(n)
*/
