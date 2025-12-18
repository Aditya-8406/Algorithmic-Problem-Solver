/*
Problem:
Given an array, return a new array such that each element is the product of all other elements except itself.

How I thought about it:
Using division seems easy, but it fails when the array contains zeros.
So I decided to compute the product from the left and from the right separately.

Approach:
I first compute prefix products (product of elements before the current index).
Then I compute suffix products (product of elements after the current index).
Multiplying both gives the required result for each position.

Why this works:
Each element gets the contribution of all elements except itself without using division.

Time Complexity: O(n)
Space Complexity: O(1) (excluding output array)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4};
    int n = nums.size();

    vector<int> ans(n, 1);

    int prefix = 1;
    for (int i = 0; i < n; i++) {
        ans[i] = prefix;
        prefix *= nums[i];
    }

    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        ans[i] *= suffix;
        suffix *= nums[i];
    }

    for (int x : ans) cout << x << " ";
    return 0;
}
