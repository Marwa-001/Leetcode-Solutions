# 217. Contains Duplicate

## Problem Statement
Given an integer array `nums`, return `true` if any value appears **at least twice** in the array, and return `false` if every element is distinct.

---

### Example 1:
**Input:**  
nums = [1,2,3,1]  

**Output:**  
true  

---

### Example 2:
**Input:**  
nums = [1,2,3,4]  

**Output:**  
false  

---

### Example 3:
**Input:**  
nums = [1,1,1,3,3,4,3,2,4,2]  

**Output:**  
true  

---

## Constraints:
- 1 <= nums.length <= 10⁵  
- -10⁹ <= nums[i] <= 10⁹  

---

## Solution Explanation
We can use a `set` to track unique values:  
1. Iterate through each number in the array.  
2. Insert it into the set.  
3. If the size of the set is less than the number of processed elements, a duplicate exists.  

**Time Complexity:** O(n)  
**Space Complexity:** O(n)  

> **Note:** An alternative solution could be sorting the array and checking adjacent elements (O(n log n), O(1) space if sorting in-place).
