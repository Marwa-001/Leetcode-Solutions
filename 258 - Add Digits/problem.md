# 258. Add Digits

## Problem Statement
Given an integer `num`, repeatedly add all its digits until the result has only one digit, and return it.

---

### Example 1:
**Input:**  
num = 38  

**Output:**  
2  

**Explanation:**  
- 3 + 8 = 11  
- 1 + 1 = 2  

---

### Example 2:
**Input:**  
num = 0  

**Output:**  
0  

---

## Constraints:
- 0 <= num <= 2³¹ - 1  

---

## Solution Explanation
We can repeatedly sum the digits of the number until the result is a single digit.

**Steps:**
1. Initialize `sum = 0`.
2. Extract digits using modulo `%` and add them to `sum`.
3. Replace `num` with `sum`.
4. Repeat until `sum` is a single-digit number.

**Time Complexity:** O(log n) per iteration (digit extraction), may repeat a few times.  
**Space Complexity:** O(1)  

> **Note:** This problem also has a constant-time solution using the **digital root formula**:  
> `return 0 if num == 0 else 1 + (num - 1) % 9`  
