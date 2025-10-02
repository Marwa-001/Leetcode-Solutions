# 485. Max Consecutive Ones

## Problem Statement
Given a binary array `nums`, return the maximum number of consecutive `1`s in the array.

---

### Example 1:
**Input:**  
nums = [1,1,0,1,1,1]  

**Output:**  
3  

**Explanation:**  
The first two digits or the last three digits are consecutive 1s.  
The maximum number of consecutive 1s is `3`.  

---

### Example 2:
**Input:**  
nums = [1,0,1,1,0,1]  

**Output:**  
2  

---

## Constraints:
- 1 <= nums.length <= 10⁵  
- nums[i] is either `0` or `1`  

---

## Solution Explanation
We scan the array while maintaining:
- A running `count` of consecutive `1`s.
- A variable `max` to track the maximum seen so far.

If the current element is `1`, increment `count` and update `max` if needed.  
If it’s `0`, reset `count` to `0`.

At the end, `max` holds the result.

**Time Complexity:** O(n)  
**Space Complexity:** O(1)  
