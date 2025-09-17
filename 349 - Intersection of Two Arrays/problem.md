# LeetCode Problem #349: Intersection of Two Arrays

🔗 [Link to the problem on LeetCode](https://leetcode.com/problems/intersection-of-two-arrays/)

---

## 📖 Description
Given two integer arrays `nums1` and `nums2`, return an array of their intersection.  
Each element in the result must be **unique**, and the result can be returned in **any order**.  

---

## 💡 My Approach
- I first inserted all elements of `nums1` into an **unordered_set** to allow `O(1)` lookups.  
- Then I iterated over `nums2`:  
  - If the number exists in the set **and** hasn’t already been added to the result, I pushed it into the result vector.  
- To avoid duplicates in the result, I used `find()` to check if the element is already present.  

---

## ⏱️ Complexity Analysis
- **Building the set:** `O(n)`  
- **Iterating nums2 + find check:** `O(m * k)` where `k` is the size of result vector (worst case linear search in result).  
- **Overall Time Complexity:** `O(n + m * k)`  
- **Space Complexity:** `O(n + k)`  

---

## 🧩 Solution (C++)
```cpp
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_set<int> first;

        for (int i = 0; i < nums1.size(); i++) {
            first.insert(nums1[i]);
        }

        for (int i = 0; i < nums2.size(); i++) {
            auto it = find(ans.begin(), ans.end(), nums2[i]);
            if (first.count(nums2[i]) && it == ans.end()) {
                ans.push_back(nums2[i]);
            }
        }

        return ans;
    }
};
