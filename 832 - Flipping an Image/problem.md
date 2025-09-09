# LeetCode Problem #832: Flipping an Image

🔗 [Link to the problem on LeetCode](https://leetcode.com/problems/flipping-an-image/)

---

## 📖 Description
Given an `n x n` binary matrix `image`, flip the image **horizontally**, then **invert** it.

- **Flip horizontally** → Each row of the image is reversed.  
  Example: `[1,1,0]` → `[0,1,1]`.  

- **Invert** → Replace every `0` with `1` and every `1` with `0`.  
  Example: `[0,1,1]` → `[1,0,0]`.  

---

## 💡 My Approach
- I created a **new matrix** to store the result, ensuring the original image remains unchanged.  
- For each row:
  - Perform the **horizontal flip** by copying elements in reverse order.  
  - **Invert** the value at the same time (turn `0 → 1`, `1 → 0`).  
- By combining flip + invert in a single pass, the algorithm is efficient and avoids unnecessary steps.  

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(N²)` → Each of the `N x N` elements is visited once.  
- **Space Complexity:** `O(N²)` → A new matrix of the same size is created to store the result.  

---

## 🧩 Solution (C++)
```cpp
#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> flipAndInvertImage(std::vector<std::vector<int>>& image) {
        int rows = image.size();
        if (rows == 0) {
            return {};
        }
        int cols = image[0].size();
        
        std::vector<std::vector<int>> resulting(rows, std::vector<int>(cols));
        
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                // Flip horizontally by mapping j to its reversed position (cols - 1 - j)
                // And invert the value (1 becomes 0, 0 becomes 1)
                resulting[i][j] = 1 - image[i][cols - 1 - j];
            }
        }
        return resulting;
    }
};
