#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> answer;
        vector<int> ans0;
        vector<int> ans1;
        unordered_set<int> set0;
        unordered_set<int> set1;

        for (int num : nums1) {
            set0.insert(num);
        }

        for (int num : nums2) {
            set1.insert(num);
        }

        for (const auto& num : set0) {
            if (!set1.count(num)) {
                ans0.push_back(num);
            }
        }

        for (const auto& num : set1) {
            if (!set0.count(num)) {
                ans1.push_back(num);
            }
        }

        answer.push_back(ans0);
        answer.push_back(ans1);

        return answer;
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1, 2, 3};
    vector<int> nums2 = {2, 4, 6};

    vector<vector<int>> result = sol.findDifference(nums1, nums2);

    cout << "Difference of Arrays:" << endl;
    cout << "In nums1 but not in nums2: ";
    for (int num : result[0]) {
        cout << num << " ";
    }
    cout << endl;

    cout << "In nums2 but not in nums1: ";
    for (int num : result[1]) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
