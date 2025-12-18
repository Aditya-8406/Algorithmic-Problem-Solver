/*
Problem:
Rotate an array to the right by k steps.

How I thought about it:
Instead of rotating the array one step at a time, I looked for a pattern.
Reversing parts of the array turned out to be a clean and efficient solution.

Approach:
1. Reverse the entire array
2. Reverse the first k elements
3. Reverse the remaining elements

Why this works:
Reversing rearranges elements in-place and avoids extra memory usage.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    int n = nums.size();

    k %= n;

    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());

    for (int x : nums) cout << x << " ";
    return 0;
}
