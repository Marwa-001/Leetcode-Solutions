#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int max = arr[arr.size() - 1] + k;
        vector<int> ans;

        for (int i = 1; i <= max; i++) {
            if (find(arr.begin(), arr.end(), i) == arr.end()) {
                ans.push_back(i);
                cout << ans[ans.size() - 1] << " ";
                if (ans.size() == k) {
                    return ans.back();
                }
            }
        }

        return -1;
    }
};

int main() {
    Solution sol;
    vector<int> arr1 = {2, 3, 4, 7, 11};
    int k1 = 5;
    cout << "\nResult 1: " << sol.findKthPositive(arr1, k1) << endl; // 9

    vector<int> arr2 = {1, 2, 3, 4};
    int k2 = 2;
    cout << "Result 2: " << sol.findKthPositive(arr2, k2) << endl; // 6

    return 0;
}
