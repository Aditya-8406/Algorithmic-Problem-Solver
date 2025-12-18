/*
Problem:
Solve the 0/1 Knapsack problem.

How I thought about it:
For each item, I can either include it or exclude it.
Both choices affect remaining capacity.

Approach:
Use DP where dp[i][w] represents max value using first i items and capacity w.

Time Complexity: O(n * W)
Space Complexity: O(n * W)
*/
