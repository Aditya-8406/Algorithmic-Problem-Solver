/*
Problem:
Move all zeroes in the array to the end while maintaining the relative order of non-zero elements.

How I thought about it:
The key requirement is to keep the order of non-zero elements unchanged.
This made me think of using a pointer to track where the next non-zero value should go.

Approach:
I iterate through the array and whenever I find a non-zero element,
I place it at the position indicated by the pointer and move the pointer forward.

Why this works:
Each element is moved at most once, and the order of non-zero elements remains intact.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {0,1,0,3,12};
    int index = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[index++] = nums[i];
        }
    }

    while (index < nums.size()) {
        nums[index++] = 0;
    }

    for (int x : nums) cout << x << " ";
    return 0;
}
