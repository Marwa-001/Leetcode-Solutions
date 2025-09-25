#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        set<int> unique;
        int maxVal = 0;

        for (int num : nums) {
            unique.insert(num);
            if (num > maxVal) {
                maxVal = num;
            }
        }

        for (int i = 0; i <= nums.size(); i++) {
            auto iter = find(unique.begin(), unique.end(), i);
            if (iter == unique.end()) {
                return i;
            }
        }
        return 0;
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {3, 0, 1};
    cout << sol.missingNumber(nums1) << endl; // Output: 2

    vector<int> nums2 = {0, 1};
    cout << sol.missingNumber(nums2) << endl; // Output: 2

    vector<int> nums3 = {9,6,4,2,3,5,7,0,1};
    cout << sol.missingNumber(nums3) << endl; // Output: 8

    return 0;
}
