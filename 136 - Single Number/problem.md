# LeetCode Problem #136: Single Number

🔗 [Link to the problem on LeetCode](https://leetcode.com/problems/single-number/)

---

## 📖 Problem Statement
Given a **non-empty array** of integers `nums`, every element appears **twice** except for one.  
Find that single element.

⚡ You must implement a solution with **linear runtime complexity** and use only **constant extra space**.

---

## 💡 Examples

### Example 1:
**Input:**  
nums = [2,2,1]  
**Output:**  
1  

### Example 2:
**Input:**  
nums = [4,1,2,1,2]  
**Output:**  
4  

### Example 3:
**Input:**  
nums = [1]  
**Output:**  
1  

---

## 🔒 Constraints
- 1 <= nums.length <= 3 * 10⁴  
- -3 * 10⁴ <= nums[i] <= 3 * 10⁴  
- Each element in the array appears **twice** except for one element which appears only once.  

---

## 🔄 Alternative Approaches

### 1. HashMap Approach
- Use an `unordered_map<int, int>` to count frequencies.  
- Iterate again to find the element with frequency = 1.  

**Complexity:**  
- Time: `O(n)`  
- Space: `O(n)` (extra memory for hashmap).  

**⚠️ Why not suitable?**  
- Problem requires **constant extra space**, but hashmap uses additional memory proportional to input size.  
- Works, but not optimal for large inputs.

---

### 2. XOR Approach ✅ (Optimal)
We can solve this using the **XOR (`^`) operator**:  

- `a ^ a = 0` (a number XOR with itself cancels out).  
- `a ^ 0 = a`.  
- XOR is **commutative** and **associative**, so order doesn’t matter.  

Thus, XORing all elements cancels out the pairs, leaving the single unique number.

**Complexity:**  
- Time: `O(n)`  
- Space: `O(1)` ✅  

This is the **most efficient and elegant** solution.

---

## 🧩 Solutions (C++)

### 🔹 HashMap Approach (`solution_hashmap.cpp`)
```cpp
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class SolutionHashMap {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> count;

        for (int num : nums) {
            count[num]++;
        }

        for (const auto& pair : count) {
            if (pair.second == 1) {
                return pair.first;
            }
        }

        return 0; // Should never reach here
    }
};

int main() {
    SolutionHashMap sol;
    vector<int> nums = {4,1,2,1,2};
    cout << "Single Number (HashMap): " << sol.singleNumber(nums) << endl;
    return 0;
}
