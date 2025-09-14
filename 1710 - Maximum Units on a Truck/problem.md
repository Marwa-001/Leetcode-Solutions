# LeetCode Problem #1710: Maximum Units on a Truck

🔗 [Link to the problem on LeetCode](https://leetcode.com/problems/maximum-units-on-a-truck/)

---

## 📖 Description
You are assigned to put some amount of boxes onto one truck. You are given a 2D array `boxTypes`, where:

- `boxTypes[i][0]` is the number of boxes of type `i`.  
- `boxTypes[i][1]` is the number of units in each box of type `i`.  

You are also given an integer `truckSize`, which is the maximum number of boxes that can be put on the truck.  

Return the **maximum total number of units** that can be put on the truck.  

---

## 💡 My Approach
- First, I **sorted the box types** in descending order by units per box.  
- Then, I used a **greedy approach**:  
  - Pick as many boxes as possible from the box type with the highest units per box.  
  - Continue until the truck is full or all box types are exhausted.  

Implementation details:
- I implemented sorting using **bubble sort** (instead of `std::sort`) to manually order the box types.  
- Then iterated through each type, adding boxes until the truck reached capacity.  

---

## ⏱️ Complexity Analysis

**Sorting (bubble sort)**  
- Time: `O(n^2)`  
- Space: `O(1)`  

**Filling the truck**  
- Time: `O(n)`  
- Space: `O(1)`  

**Overall Complexity**  
- Time: `O(n^2)` due to bubble sort.  
- Space: `O(1)` (in-place operations).  

---

## 🧩 Solution (C++)
```cpp
#include <vector>
using namespace std;

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        // Bubble sort by units per box in descending order
        for (int i = 0; i < boxTypes.size(); i++) {
            for (int j = 0; j < boxTypes.size() - 1; j++) {
                if (boxTypes[j][1] < boxTypes[j + 1][1]) {
                    vector<int> temp = boxTypes[j];
                    boxTypes[j] = boxTypes[j + 1];
                    boxTypes[j + 1] = temp;
                }
            }
        }

        int size = 0, units = 0;
        for (int i = 0; i < boxTypes.size(); i++) {
            if (size < truckSize && size + boxTypes[i][0] < truckSize) {
                size += boxTypes[i][0];
                units += boxTypes[i][0] * boxTypes[i][1];
            } else if (size == truckSize) {
                break;
            } else {
                int remaining = truckSize - size;
                size += remaining;
                units += remaining * boxTypes[i][1];
            }
        }
        return units;
    }
};
