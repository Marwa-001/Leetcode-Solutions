LeetCode Problem #3042: Count Prefix and Suffix Pairs I
Description
You are given a 0-indexed string array words.

A pair of indices (i, j) is called a prefix-suffix pair if i < j and words[i] is both a prefix and a suffix of words[j].

Your task is to return the number of prefix-suffix pairs in words.

My Approach
My approach is a straightforward brute-force solution using a nested loop. I iterate through all possible pairs of indices (i, j) such that i < j.

The outer loop iterates with index i from the start of the words array. The inner loop starts with index j from i + 1, ensuring that j is always greater than i.

For each pair (words[i], words[j]), I use a helper function isPrefixAndSuffix to check if words[i] is a prefix and a suffix of words[j]. If the condition is met, I increment a counter ans. Finally, I return the total count.

The isPrefixAndSuffix helper function performs the following checks:

Verifies if the lengths are correct (str2 must be at least as long as str1).

Checks if str1 is a prefix of str2 using str2.substr(0, str1.size()).

Checks if str1 is a suffix of str2 using str2.substr(str2.size() - str1.size()).

Complexity Analysis
Time Complexity: O(N 
2
 
cdotL), where N is the number of words in the input array, and L is the average length of the strings. The nested loops result in O(N 
2
 ) pairs, and the string substring operations take O(L) time.

Space Complexity: O(1), as the solution uses a constant amount of extra space.

Solution
#include <string>
#include <vector>

class Solution {
public:
    bool isPrefixAndSuffix(std::string str1, std::string str2) {
        if (str2.size() < str1.size()) {
            return false;
        }
        return (str2.substr(0, str1.size()) == str1) && (str2.substr(str2.size() - str1.size()) == str1);
    }

    int countPrefixSuffixPairs(std::vector<std::string>& words) {
        int ans = 0;
        for (int i = 0; i < words.size(); ++i) {
            for (int j = i + 1; j < words.size(); ++j) {
                if (isPrefixAndSuffix(words[i], words[j])) {
                    ans++;
                }
            }
        }
        return ans;
    }
};
