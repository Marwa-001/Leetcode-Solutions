#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_set<int> first;

        for (int i = 0; i < nums1.size(); i++) {
            first.insert(nums1[i]);
        }

        for (int i = 0; i < nums2.size(); i++) {
            auto it = find(ans.begin(), ans.end(), nums2[i]);
            if (first.count(nums2[i]) && it == ans.end()) {
                ans.push_back(nums2[i]);
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};

    vector<int> result = sol.intersection(nums1, nums2);

    cout << "Intersection: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}