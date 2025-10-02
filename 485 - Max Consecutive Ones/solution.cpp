#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int max = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                count++;
                if (count > max) {
                    max = count;
                }
            } else {
                count = 0;
            }
        }
        
        return max;
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1,1,0,1,1,1};
    cout << sol.findMaxConsecutiveOnes(nums1) << endl; // 3

    vector<int> nums2 = {1,0,1,1,0,1};
    cout << sol.findMaxConsecutiveOnes(nums2) << endl; // 2
    return 0;
}
