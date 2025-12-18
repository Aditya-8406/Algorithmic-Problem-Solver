/*
Problem:
Find the largest rectangle containing only 1s in a binary matrix.

How I thought about it:
Each row can be treated as a histogram built on top of the previous rows.

Approach:
Apply largest rectangle in histogram logic row by row.

Time Complexity: O(rows * cols)
Space Complexity: O(cols)
*/
