# LeetCode Problem 1313: Decompress Run-Length Encoded List

🔗 [View Problem on LeetCode](https://leetcode.com/problems/decompress-run-length-encoded-list/)

---

## Description
We are given a list `nums` of integers representing a run-length encoded list.  
Each pair of adjacent elements in `nums` is `[freq, val] = [nums[2i], nums[2i+1]]`.

For each such pair, the encoded list contains `freq` elements with value `val`.  
Your task is to return the **decompressed list**.

---

## My Approach
I implemented a **direct simulation** of the problem statement:

- Iterate through the input vector `nums` in steps of two.  
- The first element in the pair → `freq` (frequency).  
- The second element in the pair → `val` (value).  
- Push `val` into the result vector `freq` times.

This guarantees the decompressed list is generated exactly as specified.

---

## Complexity Analysis
- **Time Complexity:** `O(L)` → where `L` is the length of the decompressed list.  
  (We perform one insertion per element in the final result.)  
- **Space Complexity:** `O(L)` → storing the decompressed list.

---

## Solution (C++)
```cpp
#include <vector>

class Solution {
public:
    std::vector<int> decompressRLElist(std::vector<int>& nums) {
        std::vector<int> ans;
        for (int i = 0; i < nums.size(); i += 2) {
            int freq = nums[i];
            int val = nums[i + 1];
            for (int k = 0; k < freq; k++) {
                ans.push_back(val);
            }
        }
        return ans;
    }
};
