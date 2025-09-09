LeetCode Problem #1313: Decompress Run-Length Encoded List
Link to the problem on LeetCode

Description
We are given a list nums of integers representing a run-length encoded list. Consider each pair of adjacent elements in nums as [freq, val] = [nums[2i], nums[2i+1]].

For each such pair, the encoded list contains freq elements with value val. Your task is to return the decompressed list.

My Approach
My solution is a direct implementation of the problem description. I iterate through the input vector nums in steps of two. The first element of each pair is the frequency (nums[i]), and the second is the value (nums[i+1]).

For each pair, I use a nested loop to push the value into my answer vector freq times. This ensures that the resulting list contains the correct number of elements for each run-length encoding.

Complexity Analysis
Time Complexity: O(L), where L is the total length of the decompressed list. The algorithm iterates through each pair in the input and then adds elements to the resulting vector based on their frequency. The total number of additions is equal to the length of the final list.

Space Complexity: O(L), where L is the length of the decompressed list. I am creating a new vector to store the result, and its size will be the same as the decompressed list.

Solution
#include <vector>

class Solution {
public:
    std::vector<int> decompressRLElist(std::vector<int>& nums) {
        std::vector<int> ans;
        for (int i = 0; i < nums.size(); i += 2) {
            int freq = nums[i];
            int val = nums[i + 1];
            for (int k = 0; k < freq; k++) {
                ans.push_back(val);
            }
        }
        return ans;
    }
};
