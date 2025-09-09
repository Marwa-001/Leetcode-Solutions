# LeetCode Problem 1528: Shuffle String

🔗 [View Problem on LeetCode](https://leetcode.com/problems/shuffle-string/)

---

## Description
You are given:
- A string `s`
- An integer array `indices` of the same length  

Your task is to **restore the string `s`** so that the character at the *i-th* position in `s` moves to `indices[i]` in the shuffled string.

---

## My Approach
I followed a direct mapping strategy:

- Create a new string `shuffled` initialized as a copy of `s`.  
- Iterate through `indices`.  
  - For each position `i`, place `s[i]` at `shuffled[indices[i]]`.  

Since every index is covered exactly once, the restored string is formed in a single pass.

---

## Complexity Analysis
- **Time Complexity:** `O(N)` → iterate through the indices once.  
- **Space Complexity:** `O(N)` → extra string `shuffled` of size `N`.

---

## Solution (C++)
```cpp
#include <string>
#include <vector>

class Solution {
public:
    std::string restoreString(std::string s, std::vector<int>& indices) {
        std::string shuffled = s;
        for (int i = 0; i < indices.size(); ++i) {
            shuffled[indices[i]] = s[i];
        }
        return shuffled;
    }
};
