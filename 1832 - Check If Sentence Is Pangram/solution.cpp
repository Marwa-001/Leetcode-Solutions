#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
    bool checkIfPangram(std::string sentence) {
        // A fixed-size boolean array to track which letters have been seen.
        // There are 26 letters in the English alphabet (a-z).
        bool seen[26] = {false};

        // A counter to keep track of the number of unique letters found.
        int count = 0;
        
        // Iterate through each character in the sentence.
        for (char c : sentence) {
            // Check if the current letter has not been seen before.
            // We use 'c - 'a'' to get the 0-25 index for the letter.
            if (!seen[c - 'a']) {
                // If it's a new letter, mark it as seen and increment the count.
                seen[c - 'a'] = true;
                count++;
            }
        }
        
        // A sentence is a pangram if we have seen all 26 letters.
        return count == 26;
    }
};

int main() {
    Solution sol;
    
    // Example 1: a true pangram
    std::string sentence1 = "thequickbrownfoxjumpsoverthelazydog";
    std::cout << "Sentence: \"" << sentence1 << "\"" << std::endl;
    std::cout << "Is it a pangram? " << (sol.checkIfPangram(sentence1) ? "true" : "false") << std::endl; // Expected: true

    std::cout << "\n------------------\n";

    // Example 2: not a pangram
    std::string sentence2 = "leetcode";
    std::cout << "Sentence: \"" << sentence2 << "\"" << std::endl;
    std::cout << "Is it a pangram? " << (sol.checkIfPangram(sentence2) ? "true" : "false") << std::endl; // Expected: false

    return 0;
}
