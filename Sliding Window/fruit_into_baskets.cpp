/*
Problem:
Pick fruits from trees using only two baskets such that the total fruits picked is maximum.

How I thought about it:
At any time, I can only keep two types of fruits, which fits perfectly with a sliding window.

Approach:
Use a window with a map counting fruit types.
If types exceed two, shrink the window from the left.

Time Complexity: O(n)
Space Complexity: O(1)
*/
