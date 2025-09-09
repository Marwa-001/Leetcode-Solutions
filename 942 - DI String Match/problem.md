# LeetCode Problem 942: DI String Match

🔗 [View Problem on LeetCode](https://leetcode.com/problems/di-string-match/)

---

## Description
A permutation `perm` of `0, 1, ..., n` is an array of length `n + 1` where every integer from `0` to `n` appears exactly once.

Given a string `s` of length `n` where `s[i]` is either `'I'` (for increase) or `'D'` (for decrease), you need to find a permutation `perm` of `0, 1, ..., n` such that for all `i`:

- If `s[i] == 'I'`, then `perm[i] < perm[i+1]`.
- If `s[i] == 'D'`, then `perm[i] > perm[i+1]`.

Return the **lexicographically smallest permutation** that satisfies the condition.

---

## My Approach
I used a **greedy algorithm** with two pointers:

- `inc` → starts at `0` (smallest available number).
- `dec` → starts at `n` (largest available number).

For each character in `s`:
- If it’s `'I'`, assign the current element as `inc` and increment `inc`.
- If it’s `'D'`, assign the current element as `dec` and decrement `dec`.

At the end, one number will remain — I append it to the result.  
This ensures the permutation is **valid** and **lexicographically smallest**.

---

## Complexity Analysis
- **Time Complexity:** `O(N)` → one pass over the string.  
- **Space Complexity:** `O(N)` → storing the resulting permutation.

---

## Solution (C++)
```cpp
#include <vector>
#include <string>

class Solution {
public:
    std::vector<int> diStringMatch(std::string s) {
        int size = s.size() + 1;
        std::vector<int> perm(size);
        int inc = 0, dec = s.size();
        int i;
        for (i = 0; i < s.size(); ++i) {
            if (s[i] == 'I') {
                perm[i] = inc;
                inc++;
            } else if (s[i] == 'D') {
                perm[i] = dec;
                dec--;
            }
        }
        // The last element is the remaining number
        perm[i] = inc;
        return perm;
    }
};
