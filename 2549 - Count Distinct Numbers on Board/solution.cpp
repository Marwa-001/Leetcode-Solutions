#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int distinctIntegers(int n) {
        if (n == 1) {
            return 1;
        }
        return n - 1;
    }
};

int main() {
    Solution sol;
    cout << sol.distinctIntegers(5) << endl; // 4
    cout << sol.distinctIntegers(3) << endl; // 2
    cout << sol.distinctIntegers(1) << endl; // 1
    return 0;
}
