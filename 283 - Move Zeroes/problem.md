# 283. Move Zeroes

## Problem Statement
Given an integer array `nums`, move all `0`'s to the **end** of it while maintaining the **relative order** of the non-zero elements.  

You must do this **in-place** without making a copy of the array.

---

### Example 1:
**Input:**  
nums = [0,1,0,3,12]  

**Output:**  
[1,3,12,0,0]  

---

### Example 2:
**Input:**  
nums = [0]  

**Output:**  
[0]  

---

## Constraints:
- 1 <= nums.length <= 10⁴  
- -2³¹ <= nums[i] <= 2³¹ - 1  

---

## Solution Explanation
The idea is to **push all non-zero elements to the front** of the array and then fill the rest with zeros:  
1. Use a pointer `pos` that tracks the index of the next non-zero element placement.  
2. Traverse the array and copy each non-zero element to `nums[pos]`.  
3. After traversal, set the remaining positions to zero.  

**Time Complexity:** O(n)  
**Space Complexity:** O(1)  

> Note: The nested loop approach works but has O(n²) time complexity. The two-pointer method is optimal.
