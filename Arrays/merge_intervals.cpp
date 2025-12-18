/*
Problem:
Merge all overlapping intervals.

How I thought about it:
Overlaps are easier to detect when intervals are sorted by start time.

Approach:
Sort intervals, then iterate and merge whenever the current interval overlaps
with the previous one.

Time Complexity: O(n log n)
Space Complexity: O(n)
*/
