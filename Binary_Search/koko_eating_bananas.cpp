/*
Problem:
Find the minimum eating speed so Koko can eat all bananas within h hours.

How I thought about it:
The faster Koko eats, the fewer hours needed.
This creates a monotonic condition.

Approach:
Binary search on the speed from 1 to max pile size.

Time Complexity: O(n log n)
Space Complexity: O(1)
*/
