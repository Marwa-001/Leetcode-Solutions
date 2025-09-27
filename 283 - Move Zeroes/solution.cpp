#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int pos = 0; // position for placing non-zero elements
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[pos++] = nums[i];
            }
        }
        while (pos < nums.size()) {
            nums[pos++] = 0;
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {0, 1, 0, 3, 12};
    vector<int> nums2 = {0};
    vector<int> nums3 = {4, 2, 4, 0, 0, 3, 0, 5, 1, 0};

    sol.moveZeroes(nums1);
    sol.moveZeroes(nums2);
    sol.moveZeroes(nums3);

    for (int n : nums1) cout << n << " "; // 1 3 12 0 0
    cout << endl;

    for (int n : nums2) cout << n << " "; // 0
    cout << endl;

    for (int n : nums3) cout << n << " "; // 4 2 4 3 5 1 0 0 0 0
    cout << endl;

    return 0;
}
