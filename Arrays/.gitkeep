/*
Problem:
Given an array of integers and a target value, find the indices of two numbers such that they add up to the target.

How I thought about it:
The first idea that comes to mind is to try all possible pairs, but that would be inefficient for large arrays.
Instead, while scanning the array, I realized that if I already know one number, I only need to check whether
the remaining required value has appeared before.

Approach:
I use a hash map to store numbers I have already visited along with their indices.
For every element, I calculate (target - current element).
If this value exists in the map, I have found the required pair.

Why this works:
The hash map allows constant-time lookups, so the array is traversed only once.

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++) {
        int need = target - nums[i];
        if (mp.count(need)) {
            cout << mp[need] << " " << i;
            return 0;
        }
        mp[nums[i]] = i;
    }
    return 0;
}
