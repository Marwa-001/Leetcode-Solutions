#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> count;
        
        for (int num : nums) {
            count[num]++;
        }

        for (const auto& pair : count) {
            if (pair.second == 1) {
                return pair.first;
            }
        }

        return 0; // Fallback (should not happen due to constraints)
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {2, 2, 1};
    cout << sol.singleNumber(nums1) << endl; // Expected 1

    vector<int> nums2 = {4, 1, 2, 1, 2};
    cout << sol.singleNumber(nums2) << endl; // Expected 4

    vector<int> nums3 = {1};
    cout << sol.singleNumber(nums3) << endl; // Expected 1

    return 0;
}
