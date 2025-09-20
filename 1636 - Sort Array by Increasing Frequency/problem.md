# LeetCode Problem #1636: Sort Array by Increasing Frequency

🔗 [Link to the problem on LeetCode](https://leetcode.com/problems/sort-array-by-increasing-frequency/)

---

## 📖 Problem Statement
Given an array of integers `nums`, sort the array in increasing order based on the frequency of the values.  
If multiple values have the same frequency, sort them in **decreasing order** of their values.

Return the sorted array.

---

## 💡 Examples

### Example 1:
**Input:**  
nums = [1,1,2,2,2,3]  
**Output:**  
[3,1,1,2,2,2]  

**Explanation:**  
- 3 appears once.  
- 1 appears twice.  
- 2 appears three times.  
- Sorted by frequency → [3,1,1,2,2,2].

---

### Example 2:
**Input:**  
nums = [2,3,1,3,2]  
**Output:**  
[1,3,3,2,2]  

**Explanation:**  
- 1 appears once.  
- 3 and 2 appear twice, but since 3 < 2 is false (decreasing order when equal freq), 3 comes before 2.  

---

### Example 3:
**Input:**  
nums = [-1,1,-6,4,5,-6,1,4,1]  
**Output:**  
[5,-1,4,4,-6,-6,1,1,1]

---

## 🔒 Constraints
- 1 <= nums.length <= 100  
- -100 <= nums[i] <= 100  

---

## 🧩 Solution Explanation
1. Count the frequency of each element using an `unordered_map`.  
2. Store the pairs `(value, frequency)` in a vector.  
3. Sort the vector with custom comparator:
   - If frequencies differ → smaller frequency first.  
   - If frequencies equal → larger value first.  
4. Reconstruct the array from sorted pairs.

**Time Complexity:** O(n log n) (sorting step)  
**Space Complexity:** O(n) (for frequency map and result array)  

---
