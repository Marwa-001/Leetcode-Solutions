# LeetCode Problem 2185: Counting Words With a Given Prefix

## Description
You are given an array of strings `words` and a string `pref`.  

Return the number of strings in `words` that **contain `pref` as a prefix**.

A string `s` is said to have a prefix `pref` if the first `pref.length()` characters of `s` are equal to `pref`.

---

## Approach
- Iterate through each word in the list.  
- For each word, compare its substring from index `0` to `pref.length()`.  
- If it matches `pref`, increment the count.  
- Return the count at the end.  

---

## Complexity Analysis
- **Time Complexity:** `O(n * m)`  
  - `n` = number of words  
  - `m` = length of `pref`  
- **Space Complexity:** `O(1)` – only a counter is used.  

---

## Solution
```cpp
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0;
        for(int i=0; i<words.size(); i++){
            if(words[i].substr(0, pref.length())==pref){
                count++;
            }
        }
        return count;
    }
};
