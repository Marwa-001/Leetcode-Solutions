# 1047. Remove All Adjacent Duplicates In String

## Problem Statement
You are given a string `s` consisting of lowercase English letters.  
A duplicate removal consists of choosing two adjacent and equal letters and removing them.

We repeatedly make duplicate removals on `s` until we no longer can.

Return the final string after all such duplicate removals have been made.  
It is guaranteed that the answer is unique.

### Example 1:
**Input:**  
s = "abbaca"  

**Output:**  
"ca"  

**Explanation:**  
- Remove "bb" → "aaca"  
- Remove "aa" → "ca"  

### Example 2:
**Input:**  
s = "azxxzy"  

**Output:**  
"ay"  

---

## Constraints:
- 1 <= s.length <= 10⁵  
- `s` consists of lowercase English letters.  

---

## Solution Explanation
We can use a **stack** to solve this problem:  
- Iterate through each character of the string.  
- If the stack is not empty and the top of the stack equals the current character, pop it (remove duplicates).  
- Otherwise, push the character onto the stack.  
- Finally, reconstruct the string from the stack.  

**Time Complexity:** O(n) – each character is pushed/popped at most once  
**Space Complexity:** O(n) – stack may hold all characters in worst case  
