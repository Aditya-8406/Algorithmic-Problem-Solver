/*
Problem:
Given an array of integers, find the contiguous subarray with the maximum sum.

How I thought about it:
At first, I considered checking all subarrays, but that would take too much time.
While iterating through the array, I noticed that if the current sum becomes negative,
it will only reduce the sum of any future subarray.

Approach:
I keep track of the current subarray sum and reset it to zero whenever it becomes negative.
At each step, I update the maximum sum found so far.

Why this works:
A negative sum cannot help in building a larger sum ahead, so discarding it makes the solution optimal.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int currSum = 0, maxSum = INT_MIN;

    for (int x : nums) {
        currSum += x;
        maxSum = max(maxSum, currSum);
        if (currSum < 0) currSum = 0;
    }

    cout << maxSum;
    return 0;
}
