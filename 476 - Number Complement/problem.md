# 476. Number Complement

## Problem Statement
The **complement** of a positive integer is defined as flipping all the bits in its binary representation.

- For example, the integer `5` is written in binary as `"101"` (without leading zeros).  
- Its complement is `"010"`, which is the integer `2`.

Given an integer `num`, return *its complement*.

---

### Example 1:
**Input:**  
num = 5  

**Output:**  
2  

**Explanation:**  
Binary representation of 5 → `101`  
Flipping bits → `010` → 2  

---

### Example 2:
**Input:**  
num = 1  

**Output:**  
0  

**Explanation:**  
Binary representation of 1 → `1`  
Flipping bits → `0` → 0  

---

## Constraints:
- 1 <= num < 2³¹  

---

## Solution Explanation
We can simulate bit flipping by:
1. Converting `num` to binary (without leading zeros).  
2. Flipping each bit (`0 → 1`, `1 → 0`).  
3. Reconstructing the integer from the flipped binary digits.  

**Time Complexity:** O(log n) – number of bits in `num`  
**Space Complexity:** O(log n) – to store binary representation  
