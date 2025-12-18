/*
Problem:
Determine if a person can attend all meetings given their time intervals.

How I thought about it:
If any two meetings overlap, attending all of them is impossible.

Approach:
Sort intervals by start time and check for overlap with the previous meeting.

Time Complexity: O(n log n)
Space Complexity: O(1)
*/
