# 242. Valid Anagram

## Problem Statement
Given two strings `s` and `t`, return `true` if `t` is an anagram of `s`, and `false` otherwise.

An **Anagram** is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

---

### Example 1:
**Input:**  
s = "anagram", t = "nagaram"  

**Output:**  
true  

---

### Example 2:
**Input:**  
s = "rat", t = "car"  

**Output:**  
false  

---

## Constraints:
- 1 <= s.length, t.length <= 5 * 10⁴  
- `s` and `t` consist of lowercase English letters.  

---

## Solution Explanation
We can solve this using frequency maps:  
1. Count occurrences of each character in both strings.  
2. Compare the two frequency maps.  
3. If they are equal, return `true`; otherwise, `false`.

**Time Complexity:** O(n)  
**Space Complexity:** O(n)  

> **Note:** Since only lowercase English letters are used, we could also solve this using a fixed-size array of length 26 instead of hashmaps.  
