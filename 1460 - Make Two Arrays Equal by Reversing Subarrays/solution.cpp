#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int, int> count;
        unordered_map<int, int> target_count;

        for (int num : arr) {
            count[num]++;
        }
        for (int num : target) {
            target_count[num]++;
        }

        return count == target_count;
    }
};

int main() {
    Solution sol;

    vector<int> target1 = {1,2,3,4}, arr1 = {2,4,1,3};
    cout << boolalpha << sol.canBeEqual(target1, arr1) << endl; // true

    vector<int> target2 = {7}, arr2 = {7};
    cout << sol.canBeEqual(target2, arr2) << endl; // true

    vector<int> target3 = {1,12}, arr3 = {12,1};
    cout << sol.canBeEqual(target3, arr3) << endl; // true

    vector<int> target4 = {3,7,9}, arr4 = {3,7,11};
    cout << sol.canBeEqual(target4, arr4) << endl; // false

    return 0;
}
