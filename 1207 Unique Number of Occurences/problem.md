# LeetCode Problem #1207: Unique Number of Occurrences

🔗 [Link to the problem on LeetCode](https://leetcode.com/problems/unique-number-of-occurrences/)

---

## 📖 Description
Given an array of integers `arr`, return `true` if the number of occurrences of each value in the array is unique, or `false` otherwise.  

---

## 💡 My Approach
- I used an **unordered_map** to count the frequency of each number in the array.  
- Then, I inserted these frequencies into an **unordered_set** to automatically remove duplicates.  
- Finally, I compared the sizes of the map and set:  
  - If they are equal → all counts are unique.  
  - Otherwise → some counts are repeated.  

---

## ⏱️ Complexity Analysis

- **Counting occurrences (map build):** `O(n)`  
- **Building set of frequencies:** `O(n)`  
- **Total Time Complexity:** `O(n)`  
- **Space Complexity:** `O(n)`  

---

## 🧩 Solution (C++)
```cpp
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        // Step 1: Count the occurrences of each number
        unordered_map<int, int> occ;
        for (int num : arr) {
            occ[num]++;
        }

        // Step 2: Store counts in a set to check uniqueness
        unordered_set<int> unique_counts;
        for (const auto& pair : occ) {
            unique_counts.insert(pair.second);
        }

        // Step 3: Compare sizes
        return occ.size() == unique_counts.size();
    }
};
