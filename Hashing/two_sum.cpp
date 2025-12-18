/*
Problem:
Find two numbers in an array that add up to a given target.

How I thought about it:
Checking all pairs would be slow. If I know the current number,
I only need to check if the remaining value has appeared before.

Approach:
Store seen numbers in a hash map with their indices.
For each element, check if target - element exists.

Time Complexity: O(n)
Space Complexity: O(n)
*/
