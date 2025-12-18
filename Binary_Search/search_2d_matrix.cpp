/*
Problem:
Search for a value in a 2D matrix where rows are sorted and first element of each row
is greater than the last of previous row.

How I thought about it:
The matrix behaves like a flattened sorted array.

Approach:
Apply binary search treating the matrix as a single sorted list.

Time Complexity: O(log(m*n))
Space Complexity: O(1)
*/
