# LeetCode Problem #412: Fizz Buzz

🔗 [Link to the problem on LeetCode](https://leetcode.com/problems/fizz-buzz/)

---

## 📖 Problem Statement
Given an integer `n`, return a string array `answer` (**1-indexed**) where:

- `answer[i] == "FizzBuzz"` if `i` is divisible by **3 and 5**.  
- `answer[i] == "Fizz"` if `i` is divisible by **3**.  
- `answer[i] == "Buzz"` if `i` is divisible by **5**.  
- `answer[i] == i` (as a string) if none of the above conditions are true.

---

## 💡 Examples

### Example 1:
**Input:**  
n = 3  
**Output:**  
["1","2","Fizz"]

---

### Example 2:
**Input:**  
n = 5  
**Output:**  
["1","2","Fizz","4","Buzz"]

---

### Example 3:
**Input:**  
n = 15  
**Output:**  
["1","2","Fizz","4","Buzz","Fizz","7","8","Fizz","Buzz","11","Fizz","13","14","FizzBuzz"]

---

## 🔒 Constraints
- 1 <= n <= 10⁴  

---

## 🧩 Solution Explanation
We iterate from `1` to `n` and check divisibility:

- If divisible by 3 and 5 → `"FizzBuzz"`.  
- Else if divisible by 3 → `"Fizz"`.  
- Else if divisible by 5 → `"Buzz"`.  
- Otherwise, append the number itself as a string.

**Time Complexity:** O(n)  
**Space Complexity:** O(n) (for storing the result array)  

---
