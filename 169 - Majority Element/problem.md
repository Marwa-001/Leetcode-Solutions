# 169. Majority Element

## Problem Statement
Given an array `nums` of size `n`, return the majority element.  

The majority element is the element that appears **more than ⌊n / 2⌋ times**.  
You may assume that the majority element always exists in the array.

---

### Example 1:
**Input:**  
nums = [3,2,3]  

**Output:**  
3  

---

### Example 2:
**Input:**  
nums = [2,2,1,1,1,2,2]  

**Output:**  
2  

---

## Constraints:
- n == nums.length  
- 1 <= n <= 5 * 10⁴  
- -10⁹ <= nums[i] <= 10⁹  

---

## Solution Explanation
We can solve this using a **hashmap**:  

1. Traverse the array and count the frequency of each number.  
2. If any number’s frequency exceeds `n / 2`, return it immediately.  

Since the problem guarantees the existence of a majority element, this approach always works.  

**Time Complexity:** O(n)  
**Space Complexity:** O(n)  

> **Note:** There is also an optimized **Boyer–Moore Voting Algorithm** solution that uses O(1) space.  
