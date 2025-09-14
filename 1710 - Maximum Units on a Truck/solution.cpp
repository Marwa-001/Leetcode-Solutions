#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        // Sort by units per box in descending order
        sort(boxTypes.begin(), boxTypes.end(), [](vector<int>& a, vector<int>& b) {
            return a[1] > b[1];
        });

        int size = 0, units = 0;
        for (int i = 0; i < boxTypes.size(); i++) {
            if (size + boxTypes[i][0] <= truckSize) {
                size += boxTypes[i][0];
                units += boxTypes[i][0] * boxTypes[i][1];
            } else {
                int remaining = truckSize - size;
                units += remaining * boxTypes[i][1];
                break;
            }
        }
        return units;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> boxTypes = {{1,3},{2,2},{3,1}};
    int truckSize = 4;
    cout << sol.maximumUnits(boxTypes, truckSize) << endl; // Expected: 8
    return 0;
}
