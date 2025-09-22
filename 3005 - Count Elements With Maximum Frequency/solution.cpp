#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int, int> freq;
        int maxFreq = 0, count = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
            if (freq[nums[i]] > maxFreq) {
                maxFreq = freq[nums[i]];
            }
        }

        for (const auto& pair : freq) {
            if (pair.second == maxFreq) {
                count += pair.second;
            }
        }

        return count;
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1,2,2,3,1,4};
    cout << sol.maxFrequencyElements(nums1) << endl; // Output: 4

    vector<int> nums2 = {1,2,3,4,5};
    cout << sol.maxFrequencyElements(nums2) << endl; // Output: 1

    return 0;
}
