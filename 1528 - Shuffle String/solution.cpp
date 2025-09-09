#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
    std::string restoreString(std::string s, std::vector<int>& indices) {
        // Create a new string with the same length as the original string
        // to store the result.
        std::string shuffled = s;

        // Iterate through the original string and the indices vector.
        for (int i = 0; i < indices.size(); ++i) {
            // The character at s[i] moves to the position specified by indices[i].
            shuffled[indices[i]] = s[i];
        }
        return shuffled;
    }
};

int main() {
    Solution sol;
    
    // Example 1
    std::string s1 = "codeleet";
    std::vector<int> indices1 = {4, 5, 6, 7, 0, 1, 2, 3};
    std::cout << "Original string: " << s1 << std::endl;
    std::string result1 = sol.restoreString(s1, indices1);
    std::cout << "Shuffled string: " << result1 << std::endl; // Expected: leetcode

    std::cout << "\n------------------\n";

    // Example 2
    std::string s2 = "abc";
    std::vector<int> indices2 = {0, 1, 2};
    std::cout << "Original string: " << s2 << std::endl;
    std::string result2 = sol.restoreString(s2, indices2);
    std::cout << "Shuffled string: " << result2 << std::endl; // Expected: abc

    return 0;
}
