/*
Problem:
Search for a value in a 2D matrix where rows and columns are sorted.

How I thought about it:
Starting from top-right allows me to eliminate one row or column each step.

Approach:
Move left if current value is too big, move down if too small.

Time Complexity: O(m+n)
Space Complexity: O(1)
*/
