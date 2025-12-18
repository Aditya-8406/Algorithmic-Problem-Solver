/*
Problem:
Find the integer square root of a non-negative number.

How I thought about it:
The square root lies between 0 and the number itself.
The answer space is sorted, so binary search fits well.

Approach:
Binary search on numbers and compare mid*mid with x.

Time Complexity: O(log n)
Space Complexity: O(1)
*/
