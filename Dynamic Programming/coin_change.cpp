/*
Problem:
Find the minimum number of coins needed to make a given amount.

How I thought about it:
Each amount depends on smaller amounts, making this a classic DP problem.

Approach:
Use a DP array where dp[i] stores the minimum coins needed for amount i.

Time Complexity: O(n * amount)
Space Complexity: O(amount)
*/
