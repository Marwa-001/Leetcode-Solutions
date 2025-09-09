# LeetCode Problem 1832: Check if the Sentence Is a Pangram

🔗 [View Problem on LeetCode](https://leetcode.com/problems/check-if-the-sentence-is-a-pangram/)

---

## Description
A **pangram** is a sentence where every letter of the English alphabet appears at least once.  

Given a string `sentence` containing only lowercase English letters, return:
- `true` if `sentence` is a pangram  
- `false` otherwise  

---

## My Approach
I used a **boolean array** to keep track of which letters appeared:

1. Initialize a boolean array `seen[26]` with all `false`.  
   - Each index `0-25` corresponds to a letter `a-z`.  
2. Use a counter `count` initialized to 0.  
3. For each character `c` in the string:  
   - Compute its index as `c - 'a'`.  
   - If not seen before, mark it as seen and increment `count`.  
4. After processing all characters, if `count == 26`, the string is a pangram.  

This ensures only one pass through the string.

---

## Complexity Analysis
- **Time Complexity:** `O(N)`, where `N` is the length of the sentence.  
- **Space Complexity:** `O(1)` → only 26 booleans needed.  

---

## Solution (C++)
```cpp
#include <string>

class Solution {
public:
    bool checkIfPangram(std::string sentence) {
        bool seen[26] = {false};
        int count = 0;
        
        for (char c : sentence) {
            if (!seen[c - 'a']) {
                seen[c - 'a'] = true;
                count++;
            }
        }
        
        return count == 26;
    }
};
