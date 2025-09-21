#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stack1;
        string ans;

        for (int i = 0; i < s.size(); i++) {
            if (!stack1.empty() && stack1.top() == s[i]) {
                stack1.pop();
            } else {
                stack1.push(s[i]);
            }
        }

        int stack1_length = stack1.size();
        for (int i = 0; i < stack1_length; i++) {
            ans += stack1.top();
            stack1.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    Solution sol;
    cout << sol.removeDuplicates("abbaca") << endl; // Output: "ca"
    cout << sol.removeDuplicates("azxxzy") << endl; // Output: "ay"
    return 0;
}
