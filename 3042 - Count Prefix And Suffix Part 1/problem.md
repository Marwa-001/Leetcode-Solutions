# LeetCode Problem 3042: Count Prefix and Suffix Pairs I

🔗 [View Problem on LeetCode](https://leetcode.com/problems/count-prefix-and-suffix-pairs-i/)

---

## Description
You are given a 0-indexed string array `words`.

A pair of indices `(i, j)` is called a **prefix-suffix pair** if `i < j` and `words[i]` is both a prefix **and** a suffix of `words[j]`.

Your task is to return the number of prefix-suffix pairs in `words`.

---

## My Approach
I implemented a **brute-force** solution using nested loops:

1. The outer loop iterates with index `i` through the array.  
2. The inner loop starts from `j = i + 1` to ensure `i < j`.  
3. For each pair `(words[i], words[j])`, I check if `words[i]` is both:  
   - A prefix of `words[j]` → `words[j].substr(0, words[i].size()) == words[i]`  
   - A suffix of `words[j]` → `words[j].substr(words[j].size() - words[i].size()) == words[i]`  
4. If both conditions hold, increment the counter `ans`.  
5. Return the final count.  

This ensures every valid prefix-suffix pair is considered.

---

## Complexity Analysis
- **Time Complexity:** `O(N^2 * L)`  
  - `N` = number of words, `L` = average length of the strings.  
  - Each pair check takes `O(L)` due to substring comparisons.  
- **Space Complexity:** `O(1)` → constant extra space.

---

## Solution (C++)
```cpp
#include <string>
#include <vector>

class Solution {
public:
    bool isPrefixAndSuffix(std::string str1, std::string str2) {
        if (str2.size() < str1.size()) {
            return false;
        }
        return (str2.substr(0, str1.size()) == str1) && 
               (str2.substr(str2.size() - str1.size()) == str1);
    }

    int countPrefixSuffixPairs(std::vector<std::string>& words) {
        int ans = 0;
        for (int i = 0; i < words.size(); ++i) {
            for (int j = i + 1; j < words.size(); ++j) {
                if (isPrefixAndSuffix(words[i], words[j])) {
                    ans++;
                }
            }
        }
        return ans;
    }
};
