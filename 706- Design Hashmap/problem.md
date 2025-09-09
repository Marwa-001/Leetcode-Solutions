# LeetCode Problem #706: Design HashMap

🔗 [Link to the problem on LeetCode](https://leetcode.com/problems/design-hashmap/)

---

## 📖 Description
Design a **HashMap** without using any built-in hash map libraries.

Your `MyHashMap` class should implement the following functions:

- **MyHashMap()** → Initializes the `MyHashMap` object.  
- **void put(int key, int value)** → Inserts a `(key, value)` pair into the map. If the key already exists, update its corresponding value.  
- **int get(int key)** → Returns the value mapped to `key`, or `-1` if the map contains no mapping for the key.  
- **void remove(int key)** → Removes the key and its corresponding value if it exists.  

---

## 💡 My Approach
- I used **C++ STL’s `std::unordered_map`** to efficiently implement the hash map.  
- The underlying structure handles **hashing, collisions, and memory management** automatically.  

Implementation details:
- `put(key, value)` → Uses the subscript operator `[]`, which inserts if the key does not exist, or updates if it does.  
- `get(key)` → Uses `find()`. If the key exists, return its value; otherwise return `-1`.  
- `remove(key)` → Uses `erase()` to remove a key safely.  

This approach is simple, efficient, and leverages the robustness of STL.  

---

## ⏱️ Complexity Analysis

**put()**
- Time: `O(1)` average, `O(n)` worst-case (collisions).  
- Space: `O(1)` amortized per insertion.  

**get()**
- Time: `O(1)` average, `O(n)` worst-case.  
- Space: `O(1)`.  

**remove()**
- Time: `O(1)` average, `O(n)` worst-case.  
- Space: `O(1)`.  

**Overall Space:** `O(k)` where `k` = number of unique key-value pairs stored.  

---

## 🧩 Solution (C++)
```cpp
#include <unordered_map>

class MyHashMap {
private:
    std::unordered_map<int, int> hashmap;
public:
    MyHashMap() {
    }
    
    void put(int key, int value) {
        hashmap[key] = value;
    }
    
    int get(int key) {
        if (hashmap.find(key) != hashmap.end()) {
            return hashmap[key];
        } else {
            return -1;
        }
    }
    
    void remove(int key) {
        hashmap.erase(key);
    }
};
