# LeetCode Problem 2089: Find Target Indices After Sorting Array

## Description
You are given a **0-indexed integer array** `nums` and a target element `target`.  
A **target index** is an index `i` such that `nums[i] == target`.  

Return the list of target indices of `nums` after sorting it in **non-decreasing order**.  
The returned list must be sorted in increasing order.

---

## Approach
- First, sort the array `nums` manually using a nested loop.  
- After sorting, iterate through the array and collect all indices where `nums[i] == target`.  
- Return this list of indices.  

---

## Complexity Analysis
- **Time Complexity:** `O(n^2)`  
  - Due to the nested loop sorting.  
- **Space Complexity:** `O(1)` (ignoring output vector).  

---

## Solution
```cpp
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]>nums[j]){
                    int temp = nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                }
            }
        }
        for(int i=0; i<nums.size(); i++){
            if(target==nums[i]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
