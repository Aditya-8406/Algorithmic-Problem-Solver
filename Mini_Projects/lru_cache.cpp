/*
Project:
LRU (Least Recently Used) Cache Implementation

What this project does:
This project implements an LRU Cache with a fixed capacity.
When the cache is full, the least recently used item is removed
before inserting a new one.

Why I chose this design:
A real cache system needs:
1. Fast access to elements
2. A way to track usage order

Using only a list is slow for lookups.
Using only a map cannot track usage order.

So I combined:
- Hash Map → O(1) access to elements
- Doubly Linked List → O(1) update of usage order

How it works:
- Most recently used items are kept at the front of the list
- Least recently used items are at the back
- On every get() or put(), the accessed item is moved to the front

Why this approach is efficient:
Both get() and put() operations run in constant time,
which is critical for real-world cache systems.

Time Complexity:
get() → O(1)
put() → O(1)

Space Complexity:
O(capacity)
*/

#include <bits/stdc++.h>
using namespace std;

class LRUCache {
private:
    int capacity;
    list<pair<int, int>> cache; 
    unordered_map<int, list<pair<int, int>>::iterator> mp;

public:
    LRUCache(int cap) {
        capacity = cap;
    }

    int get(int key) {
        if (mp.find(key) == mp.end()) {
            return -1; // Key not found
        }

        // Move the accessed node to the front (most recently used)
        auto it = mp[key];
        int value = it->second;

        cache.erase(it);
        cache.push_front({key, value});
        mp[key] = cache.begin();

        return value;
    }

    void put(int key, int value) {
        // If key already exists, remove old entry
        if (mp.find(key) != mp.end()) {
            cache.erase(mp[key]);
        }
        // If cache is full, remove least recently used item
        else if (cache.size() == capacity) {
            auto lru = cache.back();
            mp.erase(lru.first);
            cache.pop_back();
        }

        // Insert new item at front
        cache.push_front({key, value});
        mp[key] = cache.begin();
    }
};

int main() {
    LRUCache cache(2);

    cache.put(1, 10);
    cache.put(2, 20);

    cout << cache.get(1) << endl; // 10

    cache.put(3, 30); // evicts key 2
    cout << cache.get(2) << endl; // -1

    cache.put(4, 40); // evicts key 1
    cout << cache.get(1) << endl; // -1
    cout << cache.get(3) << endl; // 30
    cout << cache.get(4) << endl; // 40

    return 0;
}
