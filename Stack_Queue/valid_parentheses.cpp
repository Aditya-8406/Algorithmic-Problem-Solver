/*
Problem:
Check whether a string of brackets is valid.

How I thought about it:
Every closing bracket must match the most recent opening bracket.
This behavior fits perfectly with a stack.

Approach:
Push opening brackets onto a stack.
When a closing bracket appears, check if it matches the top of the stack.

Time Complexity: O(n)
Space Complexity: O(n)
*/
