#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // Step 1: Mark presence
        for (int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1;  // map number to index
            if (nums[index] > 0) {
                nums[index] = -nums[index]; // mark as seen
            }
        }

        // Step 2: Collect missing numbers
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {             // still positive → missing
                ans.push_back(i + 1);
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> nums2 = {1, 1};

    vector<int> res1 = sol.findDisappearedNumbers(nums1);
    vector<int> res2 = sol.findDisappearedNumbers(nums2);

    cout << "Missing numbers in nums1: ";
    for (int x : res1) cout << x << " "; // 5 6
    cout << endl;

    cout << "Missing numbers in nums2: ";
    for (int x : res2) cout << x << " "; // 2
    cout << endl;

    return 0;
}
