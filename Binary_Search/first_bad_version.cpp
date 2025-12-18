/*
Problem:
Find the first bad version using an API call.

How I thought about it:
Once a version is bad, all versions after it are also bad.
That monotonic behavior is perfect for binary search.

Approach:
Binary search on version numbers to find the first bad one.

Time Complexity: O(log n)
Space Complexity: O(1)
*/
