/*
Problem:
Find the smallest substring that contains all characters of another string.

How I thought about it:
This is a classic sliding window problem where the window expands to include required characters
and shrinks to find the minimum valid window.

Approach:
Use a frequency map to track required characters.
Expand the window until valid, then shrink from the left to minimize length.

Time Complexity: O(n)
Space Complexity: O(n)
*/
