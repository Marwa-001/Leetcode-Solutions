LeetCode Problem #1832: Check if the Sentence Is a Pangram
Link to the problem on LeetCode

Description
A pangram is a sentence where every letter of the English alphabet appears at least once.

Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

My Approach
My approach to this problem is to use a simple boolean array to keep track of which letters of the alphabet have appeared in the sentence.

I initialize a boolean array, seen, of size 26 to false. Each index from 0 to 25 corresponds to a letter of the alphabet (a-z).

I also use a counter, count, initialized to 0, to track the number of unique letters found.

I then iterate through each character in the input sentence.

For each character c, I determine its corresponding index in the alphabet by subtracting the ASCII value of 'a' (i.e., c - 'a').

I check if the boolean value at that index in the seen array is false.

If it is false, it means this is the first time I have encountered this letter. I set seen[c - 'a'] to true and increment the count.

If it is true, I do nothing and continue to the next character.

After iterating through the entire sentence, I simply check if the count is equal to 26. If it is, it means I have seen every letter of the alphabet, so the sentence is a pangram.

This method is efficient because it requires only a single pass through the sentence.

Complexity Analysis
Time Complexity: O(N), where N is the length of the sentence. The algorithm iterates through the string once.

Space Complexity: O(1). The space used by the seen array is constant (26 booleans), regardless of the input sentence's length.

Solution
#include <string>

class Solution {
public:
    bool checkIfPangram(std::string sentence) {
        bool seen[26] = {false};
        int count = 0;
        
        for (char c : sentence) {
            if (!seen[c - 'a']) {
                seen[c - 'a'] = true;
                count++;
            }
        }
        
        return count == 26;
    }
};
