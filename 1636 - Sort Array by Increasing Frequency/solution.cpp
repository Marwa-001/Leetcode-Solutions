#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }

        vector<pair<int, int>> vec(count.begin(), count.end());

        sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            if (a.second == b.second)
                return a.first > b.first; // decreasing order of value if same freq
            return a.second < b.second;   // increasing order of frequency
        });

        vector<int> ans;
        for (auto& p : vec) {
            for (int i = 0; i < p.second; i++) {
                ans.push_back(p.first);
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {1,1,2,2,2,3};
    auto res1 = sol.frequencySort(nums1);
    cout << "Output 1: ";
    for (int x : res1) cout << x << " ";
    cout << endl;

    vector<int> nums2 = {2,3,1,3,2};
    auto res2 = sol.frequencySort(nums2);
    cout << "Output 2: ";
    for (int x : res2) cout << x << " ";
    cout << endl;

    vector<int> nums3 = {-1,1,-6,4,5,-6,1,4,1};
    auto res3 = sol.frequencySort(nums3);
    cout << "Output 3: ";
    for (int x : res3) cout << x << " ";
    cout << endl;

    return 0;
}
