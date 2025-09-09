# LeetCode Problem #705: Design HashSet

🔗 [Link to the problem on LeetCode](https://leetcode.com/problems/design-hashset/)

---

## 📖 Description
Design a HashSet without using any built-in hash table libraries.

Your `MyHashSet` class should implement the following functions:

- **MyHashSet()** → Initializes the `MyHashSet` object.  
- **void add(int key)** → Inserts the value `key` into the set.  
- **void remove(int key)** → Removes the value `key` from the set.  
- **bool contains(int key)** → Returns `true` if the value `key` exists in the set, and `false` otherwise.  

---

## 💡 My Approach
- I used **C++ STL’s `std::unordered_set`** to efficiently implement the required functionality.  
- The hash-based data structure handles hashing and collision resolution automatically.  

Implementation details:
- `add(key)` → Uses `insert()` which avoids duplicates.  
- `remove(key)` → Uses `erase()` to safely remove if present.  
- `contains(key)` → Uses `find()`. If `find()` returns `end()`, the element doesn’t exist.  

This is the most straightforward and optimized way to solve the problem by leveraging existing STL containers.  

---

## ⏱️ Complexity Analysis

**add()**
- Time: `O(1)` average, `O(n)` worst-case (hash collisions).  
- Space: `O(1)` amortized per insertion.  

**remove()**
- Time: `O(1)` average, `O(n)` worst-case.  
- Space: `O(1)`.  

**contains()**
- Time: `O(1)` average, `O(n)` worst-case.  
- Space: `O(1)`.  

**Overall Space:** `O(k)` where `k` = number of unique elements in the set.  

---

## 🧩 Solution (C++)
```cpp
#include <unordered_set>

class MyHashSet {
private:
    std::unordered_set<int> hashset;

public:
    MyHashSet() {}

    void add(int key) {
        hashset.insert(key); 
    }

    void remove(int key) {
        hashset.erase(key);
    }

    bool contains(int key) {
        return hashset.find(key) != hashset.end();
    }
};
