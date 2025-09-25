# 268. Missing Number

## Problem Statement
Given an array `nums` containing `n` distinct numbers in the range `[0, n]`,  
return the only number in the range that is missing from the array.

---

### Example 1:
**Input:**  
nums = [3,0,1]  

**Output:**  
2  

---

### Example 2:
**Input:**  
nums = [0,1]  

**Output:**  
2  

---

### Example 3:
**Input:**  
nums = [9,6,4,2,3,5,7,0,1]  

**Output:**  
8  

---

## Constraints:
- n == nums.length  
- 1 <= n <= 10⁴  
- 0 <= nums[i] <= n  
- All numbers in `nums` are unique.  

---

## Solution Explanation
We can solve this problem using a **set**:  
1. Insert all numbers into a set.  
2. Iterate through all numbers from `0` to `n`.  
3. Return the first number that is not found in the set.  

**Time Complexity:** O(n²) worst-case (because of `find` inside loop).  
**Space Complexity:** O(n)  

> **Note:** A more optimal solution uses the formula for the sum of the first `n` natural numbers:  
> `missing = n*(n+1)/2 - sum(nums)` (O(n) time, O(1) space).  
