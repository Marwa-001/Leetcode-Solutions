# 3005. Count Elements With Maximum Frequency

## Problem Statement
You are given an array of positive integers `nums`.

Count the **frequency** of each integer in the array.  
Return the **total number of elements** that have the **highest frequency**.

### Example 1:
**Input:**  
nums = [1,2,2,3,1,4]  

**Output:**  
4  

**Explanation:**  
- The numbers 1 and 2 both appear twice (maximum frequency = 2).  
- Thus, the total count of elements with frequency 2 is 2 + 2 = 4.  

---

### Example 2:
**Input:**  
nums = [1,2,3,4,5]  

**Output:**  
1  

**Explanation:**  
- Each element appears only once (maximum frequency = 1).  
- So, only 1 element counts.  

---

## Constraints:
- 1 <= nums.length <= 100  
- 1 <= nums[i] <= 100  

---

## Solution Explanation
1. Use a frequency map to count how many times each element appears.  
2. Track the maximum frequency encountered.  
3. Finally, sum the frequencies of all elements that match this maximum.  

**Time Complexity:** O(n) – single pass for counting and one pass for summing  
**Space Complexity:** O(n) – frequency map  
