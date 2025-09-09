LeetCode Problem #151: Reverse Words in a String
Link to the problem on LeetCode

Description
Given an input string s, reverse the order of the words.

A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

Return a string of the words in reverse order concatenated by a single space.

Note:

The input string may contain leading or trailing spaces, or multiple spaces between two words.

The returned string should only have a single space separating the words.

Do not include any extra spaces.

Example 1:

Input: s = "the sky is blue"
Output: "blue is sky the"

Example 2:

Input: s = "  hello world  "
Output: "world hello"
Explanation: Your reversed string should not contain leading or trailing spaces.

Example 3:

Input: s = "a good   example"
Output: "example good a"
Explanation: You need to reduce multiple spaces between two words to a single space in the reversed string.

My Approach
My approach involves iterating through the input string to identify individual words, reversing each word, and then building the final reversed string.

I initialize two empty strings: ans to store the final result and currentWord to build up each word as I iterate.

I loop through the entire input string character by character.

When I encounter a non-space character, I append it to currentWord.

When I hit a space, I know a word has just ended. I check if currentWord is not empty (this handles multiple spaces). If it's not empty, I use the std::reverse function to reverse the word in place and then append it to ans followed by a space. I then reset currentWord to be empty.

After the loop finishes, there might be a last word that wasn't followed by a space. I handle this case separately by reversing and appending currentWord to ans.

Finally, I remove any trailing spaces from the ans string to meet the problem's requirements.

Complexity Analysis
Time Complexity: O(n)

The code iterates through the input string of length n once. While reversing each word takes time, the total time for all word reversals is proportional to the total number of characters, which is at most n. String concatenations can also take time, but in a single pass, the overall time complexity remains linear.

Space Complexity: O(n)

The space required is for the ans and currentWord strings. In the worst case, the total length of the words and the final reversed string is proportional to the input string's length, leading to a linear space complexity.

Solution

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
