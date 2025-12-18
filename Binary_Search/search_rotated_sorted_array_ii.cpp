/*
Problem:
Search in a rotated sorted array with duplicates.

How I thought about it:
Duplicates can break the usual sorted-half logic.

Approach:
If nums[left] == nums[mid], shrink the window carefully.
Otherwise, apply rotated binary search logic.

Time Complexity: O(log n) average, O(n) worst case
Space Complexity: O(1)
*/
