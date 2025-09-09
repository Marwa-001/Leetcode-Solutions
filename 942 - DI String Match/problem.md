LeetCode Problem #942: DI String Match
Link to the problem on LeetCode

Description
A permutation perm of 0, 1, ..., n is an array of length n + 1 where every integer from 0 to n appears exactly once.

Given a string s of length n where s[i] is either 'I' (for increase) or 'D' (for decrease), you need to find a permutation perm of 0, 1, ..., n such that for all i:

If s[i] == 'I', then perm[i] < perm[i+1].

If s[i] == 'D', then perm[i] > perm[i+1].

Return the lexicographically smallest permutation that satisfies the condition.

My Approach
My approach is a greedy algorithm that builds the permutation iteratively. The key insight is that to satisfy the increasing and decreasing conditions, we should always pick the smallest available number for an 'I' and the largest available number for a 'D'.

I use two pointers, inc and dec. inc starts at 0 and dec starts at n.

I iterate through the string s.

If the character is 'I', it means the current number must be smaller than the next one. To satisfy this while building the permutation, I take the smallest available number, which is inc, and then increment inc.

If the character is 'D', it means the current number must be larger than the next one. I take the largest available number, which is dec, and then decrement dec.

After the loop, there will be one number left. I add this remaining number to the end of the permutation.

This greedy strategy ensures that the generated permutation will satisfy all the conditions.

Complexity Analysis
Time Complexity: O(N), where N is the length of the string s. The algorithm iterates through the string only once.

Space Complexity: O(N), as I am creating a vector of size N+1 to store the resulting permutation.

Solution
#include <vector>
#include <string>

class Solution {
public:
    std::vector<int> diStringMatch(std::string s) {
        int size = s.size() + 1;
        std::vector<int> perm(size);
        int inc = 0, dec = s.size();
        int i;
        for (i = 0; i < s.size(); ++i) {
            if (s[i] == 'I') {
                perm[i] = inc;
                inc++;
            } else if (s[i] == 'D') {
                perm[i] = dec;
                dec--;
            }
        }
        // The last element is the remaining number
        perm[i] = inc;
        return perm;
    }
};
