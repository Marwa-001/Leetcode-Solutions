# 448. Find All Numbers Disappeared in an Array

## Problem Statement
Given an array `nums` of `n` integers where `nums[i]` is in the range `[1, n]`, return an array of all the integers in the range `[1, n]` that do not appear in `nums`.

---

### Example 1:
**Input:**  
nums = [4,3,2,7,8,2,3,1]  

**Output:**  
[5,6]  

---

### Example 2:
**Input:**  
nums = [1,1]  

**Output:**  
[2]  

---

## Constraints:
- n == nums.length  
- 1 <= n <= 10⁵  
- 1 <= nums[i] <= n  

---

## Solution Explanation
We can solve this problem in O(n) time and O(1) extra space (ignoring output storage) by using the input array itself as a marker:

1. Iterate through `nums`, for each number map it to its index (`abs(num) - 1`).  
2. Negate the value at that index to mark the number as seen.  
3. After marking, iterate through the array again. The indices that remain positive correspond to the missing numbers.  

**Time Complexity:** O(n)  
**Space Complexity:** O(1) (excluding the result array).
