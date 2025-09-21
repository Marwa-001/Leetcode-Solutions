
#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> occ;
        for (int num : arr) {
            occ[num]++;
        }

        unordered_set<int> unique_counts;
        for (const auto& pair : occ) {
            unique_counts.insert(pair.second);
        }

        return occ.size() == unique_counts.size();
    }
};

int main() {
    Solution sol;
    vector<int> arr = {1,2,2,1,1,3};
    cout << (sol.uniqueOccurrences(arr) ? "true" : "false") << endl;
    return 0;
}
