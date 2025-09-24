#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
            if (count[num] > nums.size() / 2) {
                return num;
            }
        }
        return 0; // problem guarantees majority element exists
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {3, 2, 3};
    cout << sol.majorityElement(nums1) << endl; // Output: 3

    vector<int> nums2 = {2,2,1,1,1,2,2};
    cout << sol.majorityElement(nums2) << endl; // Output: 2

    return 0;
}
