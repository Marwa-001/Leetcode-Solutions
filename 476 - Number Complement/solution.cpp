#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findComplement(int num) {
        vector<int> binary;

        while (num > 0) {
            int quot = num / 2;
            int rem = num % 2;
            binary.push_back(!rem);
            num = quot;
        }

        long long ans = 0;
        long long powerOfTwo = 1;

        // reconstruct integer from flipped binary digits
        for (int i = 0; i < binary.size(); i++) {
            ans += binary[i] * powerOfTwo;
            powerOfTwo *= 2;
        }

        return ans;
    }
};

int main() {
    Solution sol;
    cout << sol.findComplement(5) << endl; // Output: 2
    cout << sol.findComplement(1) << endl; // Output: 0
    return 0;
}
