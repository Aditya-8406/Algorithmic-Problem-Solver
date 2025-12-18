/*
Problem:
Given a string, find the length of the longest substring without repeating characters.

How I thought about it:
Since the substring has to be continuous, I immediately thought about using a sliding window.
Whenever a character repeats, the window needs to move forward until the repetition is removed.

Approach:
Use two pointers to represent the window and a set/map to track characters in the current window.
Move the right pointer to expand the window and the left pointer to shrink it when duplicates appear.

Time Complexity: O(n)
Space Complexity: O(min(n, charset))
*/
