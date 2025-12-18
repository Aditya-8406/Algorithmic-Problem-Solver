/*
Problem:
Given a set of intervals, merge all overlapping intervals.

How I thought about it:
Overlaps are easier to detect once the intervals are sorted by start time.
After sorting, I only need to compare the current interval with the previous one.

Approach:
Sort intervals by start.
Traverse and merge whenever the current interval overlaps with the last merged interval.

Time Complexity: O(n log n)
Space Complexity: O(n)
*/
