# LeetCode Problem #2215: Find the Difference of Two Arrays

🔗 [Link to the problem on LeetCode](https://leetcode.com/problems/find-the-difference-of-two-arrays/)

---

## 📖 Description
Given two integer arrays `nums1` and `nums2`, return a list `answer` of size 2 where:

- `answer[0]` is a list of all distinct integers in `nums1` which are **not present** in `nums2`.  
- `answer[1]` is a list of all distinct integers in `nums2` which are **not present** in `nums1`.  

The integers in the lists may be returned in **any order**.  

---

## 💡 My Approach
- I used **unordered_set** to store unique elements of both arrays.  
- Then, iterated through `set0` and `set1` separately:  
  - For each number in `set0`, if it’s not in `set1`, add it to `ans0`.  
  - For each number in `set1`, if it’s not in `set0`, add it to `ans1`.  
- Finally, combined both results into the answer vector.  

This avoids duplicates and ensures efficient lookups.  

---

## ⏱️ Complexity Analysis
- **Building sets:** `O(n + m)`  
- **Iterating and comparing sets:** `O(n + m)`  
- **Overall Time Complexity:** `O(n + m)`  
- **Space Complexity:** `O(n + m)`  

---

## 🧩 Solution (C++)
```cpp
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> answer;
        vector<int> ans0;
        vector<int> ans1;
        unordered_set<int> set0;
        unordered_set<int> set1;

        for (int num : nums1) {
            set0.insert(num);
        }

        for (int num : nums2) {
            set1.insert(num);
        }

        for (const auto& num : set0) {
            if (!set1.count(num)) {
                ans0.push_back(num);
            }
        }

        for (const auto& num : set1) {
            if (!set0.count(num)) {
                ans1.push_back(num);
            }
        }

        answer.push_back(ans0);
        answer.push_back(ans1);

        return answer;
    }
};
