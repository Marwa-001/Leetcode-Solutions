#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

class Solution {
public:
    std::string reverseWords(std::string s) {
        std::string ans = "";
        std::string currentWord = "";
        
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] != ' ') {
                currentWord += s[i];
            } else {
                if (!currentWord.empty()) {
                    // Reverse the word and append it to the result
                    std::reverse(currentWord.begin(), currentWord.end());
                    ans += currentWord + " ";
                    currentWord = "";
                }
            }
        }
        
        // Handle the last word (no trailing space)
        if (!currentWord.empty()) {
            std::reverse(currentWord.begin(), currentWord.end());
            ans += currentWord;
        }

        // Remove any trailing space if necessary
        if (!ans.empty() && ans.back() == ' ') {
            ans.pop_back();
        }

        return ans;
    }
};

int main() {
    Solution solution;
    std::string test1 = "the sky is blue";
    std::string test2 = "  hello world  ";
    std::string test3 = "a good   example";
    
    std::cout << "Original string: \"" << test1 << "\"" << std::endl;
    std::cout << "Reversed string: \"" << solution.reverseWords(test1) << "\"" << std::endl << std::endl;
    
    std::cout << "Original string: \"" << test2 << "\"" << std::endl;
    std::cout << "Reversed string: \"" << solution.reverseWords(test2) << "\"" << std::endl << std::endl;
    
    std::cout << "Original string: \"" << test3 << "\"" << std::endl;
    std::cout << "Reversed string: \"" << solution.reverseWords(test3) << "\"" << std::endl << std::endl;
    
    return 0;
}
