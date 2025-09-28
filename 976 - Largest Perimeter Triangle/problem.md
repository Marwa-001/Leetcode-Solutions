# 976. Largest Perimeter Triangle

## Problem Statement
Given an integer array `nums`, return the largest perimeter of a triangle with a non-zero area, formed from three of these lengths. If it is impossible to form any triangle of a non-zero area, return `0`.

---

### Example 1:
**Input:**  
nums = [2,1,2]  

**Output:**  
5  

---

### Example 2:
**Input:**  
nums = [1,2,1]  

**Output:**  
0  

---

### Example 3:
**Input:**  
nums = [3,2,3,4]  

**Output:**  
10  

---

## Constraints:
- 3 <= nums.length <= 10⁴  
- 1 <= nums[i] <= 10⁶  

---

## Solution Explanation
A triangle is valid if the **sum of the two smaller sides is greater than the largest side**.  
Steps:
1. Sort the array in ascending order.  
2. Traverse the sorted array to check if any three consecutive numbers form a valid triangle.  
3. Return the maximum perimeter if found, otherwise return 0.  

**Time Complexity:** O(n²) (because of manual sorting implementation).  
**Space Complexity:** O(1).  

> Note: This solution uses a brute-force sorting approach (nested loops). An optimal solution would use built-in sort and traverse from the largest numbers downwards (O(n log n)).
