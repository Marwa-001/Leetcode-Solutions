#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
    // This helper function should also take const references
    bool isPrefixAndSuffix(const std::string& str1, const std::string& str2) {
        if (str2.size() < str1.size()) {
            return false;
        }
        return (str2.substr(0, str1.size()) == str1) && (str2.substr(str2.size() - str1.size()) == str1);
    }

    // The function signature now uses a const reference to avoid the error.
    int countPrefixSuffixPairs(const std::vector<std::string>& words) {
        int ans = 0;
        // Use nested loops to check every pair (i, j) where i < j.
        for (int i = 0; i < words.size(); ++i) {
            for (int j = i + 1; j < words.size(); ++j) {
                // If words[i] is a prefix and suffix of words[j], increment the counter.
                if (isPrefixAndSuffix(words[i], words[j])) {
                    ans++;
                }
            }
        }
        return ans;
    }
};

void printResult(const std::string& test_name, const std::vector<std::string>& words, int expected) {
    Solution sol;
    int result = sol.countPrefixSuffixPairs(words);
    std::cout << test_name << " Input: { ";
    for (const auto& word : words) {
        std::cout << "\"" << word << "\" ";
    }
    std::cout << "}" << std::endl;
    std::cout << "Output: " << result << std::endl;
    std::cout << "Expected: " << expected << std::endl;
    std::cout << (result == expected ? "Status: Passed\n" : "Status: Failed\n");
    std::cout << "--------------------------------\n";
}

int main() {
    // Example 1
    std::vector<std::string> words1 = {"a", "b", "c", "ab", "cba", "abc"};
    printResult("Example 1", words1, 3);

    // Example 2
    std::vector<std::string> words2 = {"a", "a", "a"};
    printResult("Example 2", words2, 3);
    
    // Example 3
    std::vector<std::string> words3 = {"apple", "ap"};
    printResult("Example 3", words3, 0);

    return 0;
}
