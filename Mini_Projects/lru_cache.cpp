/*
Project:
LRU Cache Implementation

What this project is about:
This project simulates an LRU (Least Recently Used) cache.
It stores a fixed number of key-value pairs and removes the least recently
used item when the cache exceeds its capacity.

How I thought about the design:
I needed two things:
1. Fast access to cache items
2. A way to track usage order

A hash map gives fast access, while a doubly linked list keeps track
of recently used items.

Approach:
- Hash map maps keys to nodes in the list
- Most recently used items are kept at the front
- Least recently used items are removed from the back

Why this works:
Both get() and put() operations run in constant time, which is
essential for real cache systems.

Time Complexity:
get(): O(1)
put(): O(1)

Space Complexity:
O(capacity)
*/

#include <bits/stdc++.h>
using namespace std;

class LRUCache {
    int capacity;
    list<pair<int,int>> dll; // {key, value}
    unordered_map<int, list<pair<int,int>>::iterator> mp;

public:
    LRUCache(int cap) {
        capacity = cap;
    }

    int get(int key) {
        if (mp.find(key) == mp.end()) return -1;

        auto it = mp[key];
        int value = it->second;

        dll.erase(it);
        dll.push_front({key, value});
        mp[key] = dll.begin();

        return value;
    }

    void put(int key, int value) {
        if (mp.find(key) != mp.end()) {
            dll.erase(mp[key]);
        }
        else if (dll.size() == capacity) {
            auto last = dll.back();
            mp.erase(last.first);
            dll.pop_back();
        }

        dll.push_front({key, value});
        mp[key] = dll.begin();
    }
};

int main() {
    LRUCache cache(2);

    cache.put(1, 10);
    cache.put(2, 20);
    cout << cache.get(1) << endl; // 10

    cache.put(3, 30); // evicts key 2
    cout << cache.get(2) << endl; // -1

    return 0;
}
