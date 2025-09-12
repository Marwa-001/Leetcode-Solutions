# LeetCode Problem 771: Jewels and Stones

## Description
You are given strings `jewels` representing the types of stones that are jewels,  
and `stones` representing the stones you have.  

Each character in `stones` is a type of stone you have.  
You want to know how many of the stones you have are also jewels.  

Letters are case-sensitive, so `"a"` is considered a different type of stone from `"A"`.  

---

## Approach
- Use two nested loops:  
  - Iterate through each character in `stones`.  
  - For each character, check if it exists in `jewels`.  
- Increment a counter each time a jewel is found among the stones.  

---

## Complexity Analysis
- **Time Complexity:** `O(n * m)`  
  - `n` = length of `stones`, `m` = length of `jewels`.  
- **Space Complexity:** `O(1)` – only a counter variable is used.  

---

## Solution
```cpp
#include <string>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count =0;
        for (int i=0; i<stones.size(); i++){
            for(int j=0; j<jewels.size(); j++){
                if(stones[i]==jewels[j]){
                    count++;
                }
            }
        }
        return count;
    }
};
