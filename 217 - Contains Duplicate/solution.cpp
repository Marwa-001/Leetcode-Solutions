#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> unique;
        for (int num : nums) {
            unique.insert(num);
        }
        return unique.size() != nums.size();
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1, 2, 3, 1};
    vector<int> nums2 = {1, 2, 3, 4};
    vector<int> nums3 = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};

    cout << boolalpha;
    cout << sol.containsDuplicate(nums1) << endl; // true
    cout << sol.containsDuplicate(nums2) << endl; // false
    cout << sol.containsDuplicate(nums3) << endl; // true
    return 0;
}
