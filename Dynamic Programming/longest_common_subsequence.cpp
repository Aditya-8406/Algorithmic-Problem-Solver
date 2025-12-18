/*
Problem:
Find the length of the longest common subsequence between two strings.

How I thought about it:
Each character choice affects future matches, so brute force is impractical.

Approach:
Use a 2D DP table to build the solution gradually.

Time Complexity: O(n * m)
Space Complexity: O(n * m)
*/
