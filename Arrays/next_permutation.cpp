/*
Problem:
Rearrange numbers into the next lexicographically greater permutation.

How I thought about it:
The next permutation differs from the current one only at the rightmost place possible.

Approach:
Find the first decreasing element from the end, swap it with a slightly larger value,
and reverse the remaining suffix.

Time Complexity: O(n)
Space Complexity: O(1)
*/
