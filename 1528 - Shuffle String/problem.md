LeetCode Problem #1528: Shuffle String
Description
Given a string s and an integer array indices of the same length, your task is to restore the string s to its original position. The character at the i-th position in s moves to indices[i] in the shuffled string.

My Approach
My approach is a straightforward implementation of the problem description. I create a new string, shuffled, with the same characters as the original string s. I then iterate through the indices array.

For each position i in the original string s, I take the character s[i] and place it at the position indices[i] in the shuffled string. This single pass correctly places each character in its new, restored position.

Complexity Analysis
Time Complexity: O(N), where N is the length of the string s. The algorithm iterates through the indices array once.

Space Complexity: O(N), as I am creating a new string of size N to store the result.

Solution
#include <string>
#include <vector>

class Solution {
public:
    std::string restoreString(std::string s, std::vector<int>& indices) {
        std::string shuffled = s;
        for (int i = 0; i < indices.size(); ++i) {
            shuffled[indices[i]] = s[i];
        }
        return shuffled;
    }
};
