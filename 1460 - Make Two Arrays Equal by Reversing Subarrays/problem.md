# LeetCode Problem #1460: Make Two Arrays Equal by Reversing Subarrays

🔗 [Link to the problem on LeetCode](https://leetcode.com/problems/make-two-arrays-equal-by-reversing-subarrays/)

---

## 📖 Problem Statement
You are given two integer arrays of equal length, `target` and `arr`.  

In one step, you can select any **non-empty subarray** of `arr` and reverse it.  
You are allowed to perform this operation any number of times.  

Return `true` if you can make `arr` equal to `target`, or `false` otherwise.

---

## 💡 Examples

### Example 1:
**Input:**  
target = [1,2,3,4], arr = [2,4,1,3]  
**Output:**  
true  

**Explanation:**  
By reversing subarray `[2,4,1,3]` → `[3,1,4,2]` and then reversing `[3,1,4,2]` → `[1,2,3,4]`, we get the target.

---

### Example 2:
**Input:**  
target = [7], arr = [7]  
**Output:**  
true  

**Explanation:**  
They are already equal.

---

### Example 3:
**Input:**  
target = [1,12], arr = [12,1]  
**Output:**  
true  

**Explanation:**  
Reverse the entire array `[12,1]` → `[1,12]`.

---

### Example 4:
**Input:**  
target = [3,7,9], arr = [3,7,11]  
**Output:**  
false  

---

## 🔒 Constraints
- 1 <= target.length == arr.length <= 1000  
- 1 <= target[i], arr[i] <= 1000  

---

## 🧩 Solution Explanation
The operation of reversing subarrays allows us to **rearrange elements in any order**.  
Therefore, the problem reduces to checking whether `target` and `arr` contain the **same elements with the same frequencies**.

### Steps:
1. Count the frequency of each number in `arr` and `target`.  
2. If both frequency maps are equal → return `true`.  
3. Otherwise → return `false`.

**Time Complexity:** O(n)  
**Space Complexity:** O(n)  

---
