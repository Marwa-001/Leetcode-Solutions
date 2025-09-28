#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int isTriangle = 0;
        // sort the array in ascending order (manual sort)
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] > nums[j]) {
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }

        for (int i = 0; i < nums.size() - 2; i++) {
            if (nums[i] + nums[i + 1] > nums[i + 2]) {
                isTriangle = nums[i] + nums[i + 1] + nums[i + 2];
                continue;
            }
        }

        if (isTriangle) {
            return isTriangle;
        }
        return isTriangle;
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {2, 1, 2};
    vector<int> nums2 = {1, 2, 1};
    vector<int> nums3 = {3, 2, 3, 4};

    cout << sol.largestPerimeter(nums1) << endl; // 5
    cout << sol.largestPerimeter(nums2) << endl; // 0
    cout << sol.largestPerimeter(nums3) << endl; // 10
    return 0;
}
