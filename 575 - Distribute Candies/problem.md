# LeetCode Problem 575: Design Candies

## Description
Alice has `n` candies, where the `i`th candy is of type `candyType[i]`.  
She wants to eat `n / 2` of them. Alice likes to eat as many **different types** of candies as possible.  

Return the maximum number of different types of candies Alice can eat.

---

## Approach
- Use a **hash set** (`unordered_set`) to keep track of unique candy types.  
- Count the number of unique candy types.  
- The answer is the minimum of:
  1. Number of unique candy types  
  2. `n / 2` (because Alice can only eat half of them).  

---

## Complexity Analysis
- **Time Complexity:** `O(n)`  
  - Each candy is inserted into the hash set once.  
- **Space Complexity:** `O(n)` in the worst case (all candies are unique).  

---

## Solution
```cpp
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> ans;
        for(int i = 0; i < candyType.size(); i++){
            ans.insert(candyType[i]);
        }
        if(ans.size() > candyType.size() / 2){
            return candyType.size()/2;
        }
        return ans.size();
    }
};
