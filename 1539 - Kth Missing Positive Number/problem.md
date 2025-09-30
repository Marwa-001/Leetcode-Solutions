# 1539. Kth Missing Positive Number

## Problem Statement
Given an array `arr` of positive integers sorted in a strictly increasing order, and an integer `k`, return the `kth` positive integer that is missing from this array.

---

### Example 1:
**Input:**  
arr = [2,3,4,7,11], k = 5  

**Output:**  
9  

---

### Example 2:
**Input:**  
arr = [1,2,3,4], k = 2  

**Output:**  
6  

---

## Constraints:
- 1 <= arr.length <= 1000  
- 1 <= arr[i] <= 1000  
- 1 <= k <= 1000  
- arr is strictly increasing  

---

## Solution Explanation
The task is to find the `k`-th missing positive integer not present in `arr`.  
1. We set an upper bound as the last element in `arr` plus `k`.  
2. Iterate from `1` up to this bound.  
3. For each number, check if it exists in `arr`. If not, push it into a result vector.  
4. Once the vector size reaches `k`, return the last inserted missing number.  

**Time Complexity:** O(n·m) where n = arr.size() and m = last element + k  
**Space Complexity:** O(k)  
