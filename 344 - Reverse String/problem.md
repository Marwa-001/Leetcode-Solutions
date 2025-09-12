# LeetCode Problem 344: Reverse String

## Description
Write a function that reverses a string.  
The input string is given as an array of characters `s`.  

You must do this **in-place** by modifying the input array directly with `O(1)` extra memory.  

---

## Approach
- Use the **two-pointer technique**:  
  - One pointer starts from the beginning (`i`), the other from the end (`j`).  
  - Swap the characters at `i` and `j`.  
  - Move both pointers towards the center until they meet.  
- This ensures the string is reversed in place with constant space.  

---

## Complexity Analysis
- **Time Complexity:** `O(n)` – each character is swapped once.  
- **Space Complexity:** `O(1)` – no extra data structure is used.  

---

## Solution
```cpp
#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int i=0, j=s.size()-1; i<s.size()/2; i++, j--){
            char temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
    }
};
