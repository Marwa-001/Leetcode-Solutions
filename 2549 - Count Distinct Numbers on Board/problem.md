# 2549. Count Distinct Numbers on Board

## Problem Statement
You are given a positive integer `n`, starting with only the number `n` on the board.  

Every day, for each number `x` present on the board, you may add any number `y` to the board such that `1 <= y <= n` and `x % y == 1`.  

Return the number of **distinct** integers present on the board after an infinite number of days.

---

### Example 1:
**Input:**  
n = 5  

**Output:**  
4  

**Explanation:**  
Initially, the board has `[5]`.  
On the first day, we can add `4`.  
On the second day, from `4` we can add `3`.  
On the third day, from `3` we can add `2`.  
The board now has `[5,4,3,2]`.  
It is impossible to add `1` because no number on the board is congruent to `1` modulo `1`.  

---

### Example 2:
**Input:**  
n = 3  

**Output:**  
2  

**Explanation:**  
Initially, the board has `[3]`.  
On the first day, we can add `2`.  
The board now has `[3,2]`.  
No more numbers can be added.  

---

## Constraints:
- 1 <= n <= 100  

---

## Solution Explanation
Through reasoning, we observe:
- If `n == 1`, only `1` stays on the board.  
- Otherwise, every number from `2` to `n` will eventually be added.  

Thus, the count of distinct numbers is:
- `1` if `n == 1`  
- `n - 1` otherwise  

**Time Complexity:** O(1)  
**Space Complexity:** O(1)  
