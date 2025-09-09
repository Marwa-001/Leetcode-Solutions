#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    std::vector<int> diStringMatch(std::string s) {
        // The resulting permutation will have a size of n + 1.
        int size = s.size() + 1;
        std::vector<int> perm(size);

        // 'inc' pointer starts at 0, 'dec' pointer at n.
        int inc = 0;
        int dec = s.size();
        
        // Loop through the input string.
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == 'I') {
                // If 'I', we need an increasing sequence.
                // Take the smallest available number from the 'inc' pointer.
                perm[i] = inc;
                inc++;
            } else if (s[i] == 'D') {
                // If 'D', we need a decreasing sequence.
                // Take the largest available number from the 'dec' pointer.
                perm[i] = dec;
                dec--;
            }
        }
        
        // After the loop, the last remaining number is either 'inc' or 'dec'.
        // Since we've used all numbers except one, inc and dec will point to the same value.
        perm[s.size()] = inc;
        
        return perm;
    }
};

void printVector(const std::vector<int>& vec) {
    std::cout << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i];
        if (i < vec.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
}

int main() {
    Solution sol;
    
    // Example 1
    std::string s1 = "IDID";
    std::cout << "Input string: " << s1 << std::endl;
    std::vector<int> result1 = sol.diStringMatch(s1);
    std::cout << "Permutation: ";
    printVector(result1); // Expected: [0, 4, 1, 3, 2]

    std::cout << "\n------------------\n";

    // Example 2
    std::string s2 = "III";
    std::cout << "Input string: " << s2 << std::endl;
    std::vector<int> result2 = sol.diStringMatch(s2);
    std::cout << "Permutation: ";
    printVector(result2); // Expected: [0, 1, 2, 3]

    std::cout << "\n------------------\n";

    // Example 3
    std::string s3 = "DDD";
    std::cout << "Input string: " << s3 << std::endl;
    std::vector<int> result3 = sol.diStringMatch(s3);
    std::cout << "Permutation: ";
    printVector(result3); // Expected: [3, 2, 1, 0]

    return 0;
}
