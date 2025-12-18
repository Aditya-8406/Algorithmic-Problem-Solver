/*
Problem:
Count the number of 1 bits in an integer.

How I thought about it:
Each time I remove the lowest set bit, the count increases by one.

Approach:
Use n & (n - 1) to drop the lowest set bit repeatedly.

Time Complexity: O(number of set bits)
Space Complexity: O(1)
*/
