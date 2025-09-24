#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        int sum = 0;
        do {
            sum = 0;
            while (num > 0) {
                int rem = num % 10;
                sum += rem;
                num = num / 10;
            }
            num = sum;
        } while (sum > 9);
        return sum;
    }
};

int main() {
    Solution sol;
    cout << sol.addDigits(38) << endl; // Output: 2
    cout << sol.addDigits(0) << endl;  // Output: 0
    return 0;
}
