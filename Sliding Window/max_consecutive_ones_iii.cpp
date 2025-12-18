/*
Problem:
Find the longest subarray of 1s after flipping at most k zeros.

How I thought about it:
Flipping zeros means I can tolerate up to k zeros in the window.

Approach:
Use a sliding window and track how many zeros are inside.
Shrink the window when zero count exceeds k.

Time Complexity: O(n)
Space Complexity: O(1)
*/
