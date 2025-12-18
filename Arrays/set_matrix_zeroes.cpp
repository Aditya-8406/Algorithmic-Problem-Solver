/*
Problem:
Given a matrix, if any element is zero, set its entire row and column to zero.

How I thought about it:
Changing values immediately would affect future checks.
So I needed a way to remember which rows and columns should be zeroed.

Approach:
Use the first row and first column as markers to store zero information.
Then update the matrix in a second pass.

Time Complexity: O(m*n)
Space Complexity: O(1)
*/
